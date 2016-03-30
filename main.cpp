/*
 *   Copyright 2016 Charles-Eugene Loubao
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

/**
 * Example of program using the LinkedList class
 */
#include <iostream>
#include <string>

#include "lib/LinkedList.h"

using namespace std;

int main() {
    LinkedList<string> names;
    names.add("Ash Ketchum");
    names.add("Bjarne Stroustrup");
    names.add("Oliver Queen");

    LinkedList<int> ages;
    ages.add(10);
    ages.add(65);
    ages.add(26);

    for (int i = 0; i < names.getSize(); i++) {
        cout << names.get(i) << " is " << ages.get(i) << " years old";
        if (i == 0) {
            cout << " (since 1997) ";
        }
        cout << endl;
    }
}