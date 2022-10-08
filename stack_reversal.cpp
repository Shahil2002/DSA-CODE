#include <iostream>
#include <stack>
using namespace std;

void deletemid(stack<int> &st, int k)
{
  if(k==1)
  {
  	st.pop();
  	return;
  }

  int top=st.top();
  st.pop();
  deletemid(st, k-1);
  st.push(top);
  return;
}

void print(stack<int> &st)
{
   stack<int> temp;
   while(!st.empty())
   {
   	temp.push(st.top());
   	st.pop();
   }

    while(!temp.empty())
   {
   	cout<<temp.top()<<" ";
   	temp.pop();
   }
   return;
}


int main()
{  
	stack<int> arr;
	arr.push(1);
	arr.push(2);
	arr.push(3);
	arr.push(4);
	
	// arr.push(4);
	// arr.pop();
	if(arr.empty())
		print(arr);
	else
  deletemid(arr, arr.size()/2 + 1);
 print(arr);


	return 0;
}