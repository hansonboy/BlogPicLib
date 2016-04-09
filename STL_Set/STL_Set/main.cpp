//
//  main.cpp
//  STL_Set
//
//  Created by wangjianwei on 16/4/9.
//  Copyright © 2016年 JW. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
int main ()
{
    set<int> c;
    c.insert(1);  c.insert(2);  c.insert(4);  c.insert(5); c.insert(6);
    cout<<"count:"<<c.size()<<endl;
    cout<<"find(4):"<<*c.find(4)<<endl;
    cout << "lower_bound(3): "  << *c.lower_bound(3) << endl;
    cout << "upper_bound(3): " << *c.upper_bound(3) << endl;
    cout << "equal_range(3): "
    << *c.equal_range(3).first << " "
    << *c.equal_range(3).second << endl;
    
    cout << endl;
    cout << "lower_bound(5): "  << *c.lower_bound(5) << endl;
    cout << "upper_bound(5): " << *c.upper_bound(5) << endl;
    cout << "equal_range(5): "
    << *c.equal_range(5).first << " "
    << *c.equal_range(5).second << endl;
    
    
    c.insert(c.lower_bound(3), 3);
    //iterate over all elements and print them
    
    set<int>::iterator pos;
    for (pos = c.begin(); pos != c.end(); ++pos) {
        cout << *pos << ' ';
    }
    cout << endl;
    
    c.erase(5);
    copy(c.begin(), c.end(), ostream_iterator<int>(cout," "));
    
}
