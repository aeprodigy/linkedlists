#include <iostream>

using namespace std;
struct Student{
// we create the Student Structure
//in here we will create its Variables and pointer variables.
string id;
string name;
Student *next;

};
void print(Student *pontr)//we create the function with the pointer as the parameter.
{
    //we will use the while loop for this
        while(pontr != NULL){
                cout<<pontr->name<<endl;
                cout<<pontr->id<<endl;
                cout<<pontr->next<<endl;
                pontr=pontr->next;
                //lets try to run this now.

        }
}
int main()
{
 //we now create the Objects(Nodes) of this class.
 Student *head = new Student();//the head Node is created.
 Student *p2=new Student();
 Student *p3=new Student();
 Student *p4=new Student();
 Student *current = head; // we are going to use the Current object to traverse through the list.


 //Lets assign Data to these nodes as well as the linking them to those that follow after the other.

 //headNode
 head->name="Madalitso";//we assign the name into the head node
 head->id="2010392";//we assign the student number.
 head->next=p2;//we assign the Link to the second Node.

 // we will repeat the rest of the steps with the remaining Nodes. i will have to skip this part.
    p2->name="Kabwe";
    p2->id="2010444";
    p2->next=p3;

    p3->name="ephius";
    p3->id="2010475";
    p3->next=p4;

    p4->name="KIng";
    p4->id="2010491";
    p4-> next = NULL;
    print(head);

    //we are now going to create a function that will get all the data and dispaly it
    return 0;
}
