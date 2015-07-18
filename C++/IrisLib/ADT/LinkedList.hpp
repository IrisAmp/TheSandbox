#ifndef __LINKEDLIST_H_DEFINED__
#define __LINKEDLIST_H_DEFINED__

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

		protected:
			class LinkedNode
			{
			public:
				LinkedNode( LinkedNode* prevNode, Data theItem, LinkedNode* nextNode );
				~LinkedNode();

				LinkedNode* prev;
				LinkedNode* next;
				Data item;
			};

			LinkedNode nodeAt( unsigned index );

		private:
			LinkedNode* head;
			LinkedNode* tail;
			unsigned length;

		};
	}
}

#endif
