###[STL的基本使用之关联容器：set和multiSet的基本使用]()
1. ####简介
		
	- set 和 multiSet 内部都是使用红黑树来实现，会自动将元素进行排序。两者不同在于set 不允许重复，而multiSet 允许重复
2. ####头文件 *#include\<set>*
4. ####构造函数及析构函数 ![](https://raw.githubusercontent.com/hansonboy/BlogPicLib/master/construction.png)
8. ####非变动性操作函数
	-	运算符重载![](https://raw.githubusercontent.com/hansonboy/BlogPicLib/master/noModifyOperation.png)
	-	查找操作函数![](https://raw.githubusercontent.com/hansonboy/BlogPicLib/master/searchOperation.png)
	-	赋值操作![](https://raw.githubusercontent.com/hansonboy/BlogPicLib/master/assignOperation.png)
	-	迭代器操作![](https://raw.githubusercontent.com/hansonboy/BlogPicLib/master/iterator.png)
6. ####插入删除操作![](https://raw.githubusercontent.com/hansonboy/BlogPicLib/master/InsertDelete.png)
7. ####范例如下
	
 
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
    		 c.erase(5);
    		 copy(c.begin(), c.end(), ostream_iterator<int>(cout," "))
  			}
 8. #### 运行截图![](https://raw.githubusercontent.com/hansonboy/BlogPicLib/master/output.png)
 