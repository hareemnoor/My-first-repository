#include<iostream>
using namespace std;
class queue{
	private:
		int B,F;
		int QU[10];
		public:
			queue(void){
				
			}
			void insert(int x){
				if(B>=9){
					cout<<"Queue overflow";
					return;
				}
				else{
					B=B+1;
					QU[B]=x;
					
				}
				if(F==-1)
				F=0;
			}
			//memeber function to remove thevalue from queue
			void  remove(void){
				if(F==-1){
					cout<<"Queue is empty";
					return;
				}
				cout<<"value"<<QU[F]<<"is removed";
				QU[F]=NULL;
				F=F+1;
				if(F>B)
				F=B=-1;
				
			}
			void  display(void){
				if(F==-1){
					cout<<"queue is empty";
					return;
				}
				for(int i=F; i<=B;i++)
				cout<<QU[i]<<endl;
			}
};
int main(){
queue obj;
int n, opt,loop=1;
while(loop){
	cout<<"1- insert value into queue"<<endl;
	cout<<"2- remove value in queue"<<endl;
	cout<<"3- display value in queue"<<endl;
	cout<<"4- Exit"<<endl;
	cout<<"Enter your  option[1-4]: ";
	cin>>opt;
	switch(opt){
		case 1:
		cout<<"Enter a value to insert"<<endl;
		cin>>n;
		obj.insert(n);
		break;
		case 2:
		obj.remove();	
		break;
		case 3:
			cout<<"Value in queue:";
			obj.display();
			break;
			case 4:
				loop=0;
				break;
				default:
				cout<<"invlid option";
				
	}
}



return 0;
}
