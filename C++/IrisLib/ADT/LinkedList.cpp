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
	}
}