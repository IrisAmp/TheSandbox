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

#include "LinkedList.hpp"

namespace IrisAmp
{
	namespace ADT
	{
		/*********************************************************************
			LinkedList
			*/
		template <class Data>
		LinkedList<Data>::LinkedList()
			: head( nullptr )
			, tail( nullptr )
			, length( 0 )
		{

		}

		template <class Data>
		LinkedList<Data>::~LinkedList()
		{

		}

		template <class Data>
		void LinkedList<Data>::set( Data item, unsigned index )
		{

		}

		template <class Data>
		Data LinkedList<Data>::get( unsigned index )
		{

		}

		template <class Data>
		Data LinkedList<Data>::pop( unsigned index )
		{

		}

		template <class Data>
		void LinkedList<Data>::pushHead( Data item )
		{

		}

		template <class Data>
		void LinkedList<Data>::pushTail( Data item )
		{

		}

		template <class Data>
		Data LinkedList<Data>::popHead()
		{

		}

		template <class Data>
		Data LinkedList<Data>::popTail()
		{

		}

		template <class Data>
		Data LinkedList<Data>::peekHead()
		{

		}

		template <class Data>
		Data LinkedList<Data>::peekTail()
		{

		}

		template <class Data>
		void LinkedList<Data>::clear()
		{

		}

		template <class Data>
		typename LinkedList<Data>::LinkedNode* LinkedList<Data>::nodeAt( unsigned index )
		{

		}

		template <class Data>
		Data LinkedList<Data>::_popOnly()
		{
			assert( length == 1 );


		}

		/*********************************************************************
			LinkedList::LinkedNode
			*/
		template <class Data>
		LinkedList<Data>::LinkedNode::LinkedNode( LinkedNode* prevNode, Data theItem, LinkedNode* nextNode )
			: prev( prevNode )
			, next( nextNode )
			, item( theItem )
		{
			if( prev ) prev->next = this;
			if( next ) next->prev = this;
		}

		template <class Data>
		LinkedList<Data>::LinkedNode::~LinkedNode()
		{
			if( prev ) prev->next = this->next;
			if( next ) next->prev = this->prev;
		}

		/*********************************************************************
			LinkedList::IndexOutOfBoundsException
			*/
		template <class Data>
		const char* LinkedList<Data>::IndexOutOfBoundsException::what() const throw( )
		{
			return "The given index is out of bounds.";
		}
	}
}
