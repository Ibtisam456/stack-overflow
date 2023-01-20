#include <iostream>
using namespace std;

const int max_size = 50;
class Stack
 {
private:
        
        int data[max_size]; 
    	int temp; 

public:
      Stack() 
    {
       
       temp = -1;
    }

  void push(int element) 
  {
    if (temp >= max_size - 1)
	{
      cout << "stack overflow" << endl;
      return ;
    }
    data[++temp] = element;
  }

  void pop()
   {
    if (temp < 0)
	 {
      cout << "Stack is empty" << endl;
      return ;
    }
    temp--;
  }

  bool is_empty() {
    return temp < 0;
  }

  int peek() 
  {
    if (temp < 0) {
      cout << "empty" << endl;
      return 0;
    }
    return data[temp];
  }
};

int main() 
{
	
  Stack stack;
  stack.push(6);
  stack.push(7);
  stack.push(8);

 
  while (!stack.is_empty()) 
  {
    cout << stack.peek() << endl;
    stack.pop();
  }

  return 0;
}

