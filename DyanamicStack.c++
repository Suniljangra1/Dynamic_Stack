// create a stack  class 
#include<iostream>
using namespace std;
class StackD
{
    int *array;
    int top;
    int max;
    void Resize()
    {
         int *temp;
         if(top == max)
         {
            temp = new int[2*max];
         }
         for(int i=0;i<=top; i++)
            {
                temp[i] = array[i];
            }
            max = 2* max;
            delete []array;
            array = temp;
            
    }
    public:
        StackD()
        {
            array = new int[1];
            top = -1 ;
            max = 1;
        }
       
         void insert_Element(int value)   
        {
            if(top == max )
            {
              
              Resize();
            }
              top++;
              array[top] = value;  
        }
         int  Pop_Stack()
         {
             if(top < max)
             {
                top--;
                return array[top+1];
             }
             return 0;
         }
         int Stack_Empty()
         {
            if(top == -1)
            return 0;
            else 
            return 1;
         }
         int Top_Element()
         {
            if(top<max)
            {
                return array[top];
            }
            return 0;
         }
         void Shirnk_to_fit()
         {
            int *temp;
            if(top<max)
            {
                temp = new int[top];
                for(int i=0; i<=top; i++)
                {
                    temp[i]= array[i];
                }
                max = top;
                delete array;
                array = temp ;
            }
         }
         void Search_Element(int value)
         {
            int count=0,other=0;
            for(int i=0; i<top; i++)
                {
                    count++;
                    if(array[i]== value)
                    {    
                        other = 1;
                    }
            }
            if(other == 1)
            cout<<"\nValue is founded \nIndex of your value is "<<count<<endl;
            else 
            cout<<"\nValue no found";
            
         }
         int Size_Stack()
         {
            cout<<"Max size of Stack is : "<< max;
         }
        void Print_Element ()
        {
            for(int i=top; i>= 0; i--)
            {
                cout<<array[i]<<" ";
            }  
        }
};
int main()
{
    StackD s1;
    
    s1.insert_Element(10);
    s1.insert_Element(30);
    s1.insert_Element(60);
    s1.insert_Element(20);
    s1.insert_Element(36);
    s1.insert_Element(25);
    s1.insert_Element(6000);
    s1.insert_Element(5000);
    s1.insert_Element(19);
    s1.Print_Element();
   s1.Search_Element(10);
   
}