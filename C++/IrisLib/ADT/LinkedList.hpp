/*
	Copyright (c) 2015 Brandon Yue

	Permission is hereby granted, free of charge, to any person obtaining a
	copy of this software and associated documentation files (the "Software"),
	to deal in the Software without restriction, including without limitation
	the rights to use, copy, modify, merge, publish, distribute, sublicense,
	and/or sell copies of the Software, and to permit persons to whom the
	Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
	DEALINGS IN THE SOFTWARE.
	*/

#ifndef __LINKEDLIST_H_DEFINED__
#define __LINKEDLIST_H_DEFINED__

#include <cassert>

namespace IrisAmp
{
	namespace ADT
	{
		template <class Data>
		class LinkedList
		{
		public:
			LinkedList();
			~LinkedList();

			void set( Data item, unsigned index );
			Data get( unsigned index );
			Data pop( unsigned index );

			void pushHead( Data item );
			void pushTail( Data item );

			Data popHead();
			Data popTail();

			Data peekHead();
			Data peekTail();

			void clear();

			class IndexOutOfBoundsException
			{
			public:
				const char* what() const throw( );
			};

		protected:
			/// <remarks>
			/// Each node takes responsibility for linking and unlinking
			/// themselves, so that consumers simply need to pass in the
			/// correct previous and next nodes. Likewise, a node will clean up
			/// its own links when deleted.
			/// </remarks>
			class LinkedNode
			{
			public:
				LinkedNode( LinkedNode* prevNode, Data theItem, LinkedNode* nextNode );
				~LinkedNode();

				LinkedNode* prev;
				LinkedNode* next;
				Data item;
			};

			LinkedNode* nodeAt( unsigned index );

		private:
			LinkedNode* head;
			LinkedNode* tail;
			unsigned length;

			/// <remarks>
			/// Used internally when a pop method detects that there is only
			/// one item in the list. A little extra logic takes place to clean
			/// up the head and tail.
			/// </remarks>
			Data _popOnly();
		};
	}
}

#endif
