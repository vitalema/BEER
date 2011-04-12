#include <string>
#include "Item.h"

class Player {
	public:
		Player (std::string playerName);
		void increaseClickCount();
		bool hasItem(Item i);
	private: 
		void combineItems(Item a, Item b);
		static Item inventory[];
		int clickCount;
};