#include <iostream>

using namespace std;

const int Size =5;
template <class t>
class queuetype {
    t q[Size];
    t f,r;
    public:
        void addition(t);
        t deletion();
        t isfull();
        t isempty();
        void display();

        queuetype(){
             f = r = -1;
        }

};
template <class t>
void queuetype<t> :: addition(t x){
    if(f==-1)
    {
        f = r = 0;
        q[r] = x;
    }
    else {
        r++;
        q[r] = x;
    }
}
template <class t>
t queuetype<t> :: deletion(){
    int rem;
    if(f == r){
        rem = q[f];
        f = r = -1;
    }
    else{
        rem = q[f];
        f++;
    }
    return rem;
}
template <class t>
t queuetype<t>:: isempty()
{

    if(f == -1)
        return 1;
    else return -1;
}
template <class t>
t queuetype<t> ::isfull(){
    if(r == Size-1)
        return 1;
    else return -1;
}
template <class t>
void queuetype<t> :: display(){
    t i;
    cout<<endl;
    for(i =0; i<f ; i++)//display deleted places
        cout<<"-\t";

    for(i=f ; i<=r ; i++)//display queue elements
        cout<<q[i]<<"\t";

    for(i= r+1 ; i<= Size-1 ; i++)
        cout<<"-\t";
}
int main()
{
    int ch,e,x; char c = 'y';
    queuetype <int> q;
    cout << "\n\tARRAY IMPLEMENTATION OF QUEUE!" << endl;
    while(c == 'y' || c == 'Y')
    {
        cout<<"\n\t MENU ";
        cout<<"\n 1. Addition";
        cout<<"\n 2. Deletion";
        cout<<"\n 3. Check if empty";
        cout<<"\n 4. Check if full";
        cout<<"\n Enter your choice: ";
        cin>>ch;

        switch(ch){
            case 1: e = q.isfull();
                    if(e == 1)
                        cout<<"\n The Queue is full, Cannot insert any element!!";
                    else{
                    cout<<"\n Enter the element you want to insert in queue: ";
                        cin>>x;
                    q.addition(x);
                    q.display();
                    }
                    break;
            case 2: e = q.isempty();
                    if(e==1 ){
                        cout<<"\n The Queue is empty, can't remove any element!!";}
                    else{
                            int b = q.deletion();
                    cout<<"\n The removed element in queue is = "<<b;
                    q.display();
                    }
                    break;
            case 3: e = q.isempty();
                    if(e==1 ){
                        cout<<"\n The Queue is empty, can't remove any element!!";}

                    else cout<<"\n The Queue can delete or insert more elements.";
                    break;

            case 4: e = q.isfull();
                    if(e == 1)
                        cout<<"\n The Queue is full, Cannot insert any element!!";
                    else cout<<"\n The Queue can insert or delete more elements.";
                    break;
            default: cout<<"\n Wrong Choice!!";


        }    cout<<"\n Do you want to continue?(Y/N): ";
            cin>>c;

    }
    return 0;
}
/*
        ARRAY IMPLEMENTATION OF QUEUE!

         MENU
 1. Addition
 2. Deletion
 3. Check if empty
 4. Check if full
 Enter your choice: 1

 Enter the element you want to insert in queue: 5

5       -       -       -       -
 Do you want to continue?(Y/N): y

         MENU
 1. Addition
 2. Deletion
 3. Check if empty
 4. Check if full
 Enter your choice: 2

 The removed element in queue is = 5
0       -       -       -       -       -
 Do you want to continue?(Y/N): y

         MENU
 1. Addition
 2. Deletion
 3. Check if empty
 4. Check if full
 Enter your choice: 1

 Enter the element you want to insert in queue: 7

7       -       -       -       -
 Do you want to continue?(Y/N): y

         MENU
 1. Addition
 2. Deletion
 3. Check if empty
 4. Check if full
 Enter your choice: 1

 Enter the element you want to insert in queue: 89

7       89      -       -       -
 Do you want to continue?(Y/N): y

         MENU
 1. Addition
 2. Deletion
 3. Check if empty
 4. Check if full
 Enter your choice: 1

 Enter the element you want to insert in queue: 12

7       89      12      -       -
 Do you want to continue?(Y/N): y

         MENU
 1. Addition
 2. Deletion
 3. Check if empty
 4. Check if full
 Enter your choice: 2

 The removed element in queue is = 7
-       89      12      -       -
 Do you want to continue?(Y/N): y

         MENU
 1. Addition
 2. Deletion
 3. Check if empty
 4. Check if full
 Enter your choice: 3

 The Queue can delete or insert more elements.
 Do you want to continue?(Y/N): y

         MENU
 1. Addition
 2. Deletion
 3. Check if empty
 4. Check if full
 Enter your choice: 4

 The Queue can insert or delete more elements.
 Do you want to continue?(Y/N): y

         MENU
 1. Addition
 2. Deletion
 3. Check if empty
 4. Check if full
 Enter your choice: 7

 Wrong Choice!!
 Do you want to continue?(Y/N): n

Process returned 0 (0x0)   execution time : 102.976 s
Press any key to continue.
*/
