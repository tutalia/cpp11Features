//
//  main.cpp
//  Cpp11
//
//  Created by koray dogutekin on 08/01/17.
//  Copyright © 2017 koray dogutekin. All rights reserved.
//

#include <iostream>
#include <memory>

using namespace std;

void TestPointers()
{
    
    // raw pointer to shared pointer conversion
    int* rawPtr = new int (44);
    shared_ptr<int> sPtr(rawPtr);
    cout<<*sPtr<<endl;
    
    
}

int main(int argc, const char * argv[]) {


    TestPointers();
    
    return 0;
}
