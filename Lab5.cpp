#include <iostream>
#include <string>
using namespace std;

// complete the class below
class Stack {
	private:
		string *items; //array to hold items in stack
		int capacity;  //size of array.
		int numItems;
	public:
		// write a constructor that will have one input parameter x, with a default value of 5
			// use x as the initial value for capacity attribute
			// initialize a new array with the number of elements equal to the current capacity attribute
				// the new array will be accessed using the "items" pointer
			// be sure to set the initial number of items to zero
		Stack() {}

		// implement a "push" method to add new strings to the stack
		// be sure to update the number of items
		// if the stack is full, output a message to the console
			// increase the capacity by 5
			//  and **use dynamic allocation** to increase the capacity of the old items stack to the new capacity
		void push(string inObj) {}

		// implement a method to check if your stack is empty
		// returns true if empty, false if not empty
		bool empty() {
			return 0;
		}

		// implement a "pop" method to "remove" the top item from stack
		// this function should return the removed item item
		// dont forget to update the number of items
		// if your stack is empty, do nothing
		string pop() {
			return " ";
		}

		// implement a method getNumItems to retrieve the number of items
		//    currently in the stack
		int getNumItems() {
			return 0;
		}

};



// Define the class BrowserHistory below
class BrowserHistory {
	private:
		// One stacks of strings and the page you are currently viewing is all that is used here
		Stack history;
		string currentUrl;

	public:
		// Implement the constructor to initialize your object
		//    with a new current page at defaultUrl
		// At this point, your history should be empty
		BrowserHistory(string defaultUrl) {}

		// Implement the getCurrentPage method to return 
		//    the most recently visited page
		string getCurrentPage() {
			return " ";
		};

		// Implement the goToPage method, which will take in a url
		//     and update the current page
		//  It should also push the previous page to the history
		//     returns nothing
		void goToPage(string inUrl) {}
		
		// Implement goBack method to go to the previous page in history
		// If there is no previous page to move to, 
		//     print a message and do nothing
		void goBack() {}

		// Implement method canGoBack,
		//    which determines whether there is a previous url in the history
		// Hint: your Stack class has a useful method for this!
		bool canGoBack() {
			return false; // fix this!
		};

		// Implement the historyLength method, which
		//    returns how many urls are in the history,
		//       not including the current page.
		//    hint: Your stack has a useful method for this!
		int historyLength() {
			return 0; // fix this
		};


};
