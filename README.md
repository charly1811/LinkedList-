# LinkedList
### A C++ implementation of the LinkedList pattern

### Example
See main.cpp for a demo app

### Structure
* **lib/**: Contains the actual source code of the library
* **main.cpp**: A simple program using the library

### API:
*  ```LinkedList.add(T value)```: Add an element to the list
*  ```LinkedList.get(int position)```: Returns the element at the specified position
*  ```LinkedList.getSize()```: Returns the size of underlining array

### To Do
* Add method to remove elements from the LinkedList;

### Requirements
The Library require C++11 or higher. For example to compile the demo you would use:
```g++ main.cpp lib/*h -std=c+11```