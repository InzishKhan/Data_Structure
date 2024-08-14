#include <iostream>
#include <vector>
#include<fstream>
using namespace std;
template <class T>

class MinHeap{
     public:
     struct HeapNode{
     	int left1;
     	int right1;
     	char data1;
     	int frequency1;
     	
     	public:
     		HeapNode(){
     			left1=nullptr;
     			right1=nullptr;
			 }
	 };	
   
    int size;
    //vectot <node*> v;
    int capacity;
    T *data;
    vector <HeapNode*> input;
    public:
    //constructor
    MinHeap(){
        capacity=1;
        size=0;
        data=new T [capacity];
    }
    
    MinHeap(int cap){
        cap=capacity;
        size=-1;
        data=new T [cap];
    }
    
    int parent(int i){
        return ((i-1)/2);
    }
    
    int left(int i){
        return (2*i)+1;
    }
    
    int right(int i){
        return ((2*i)+2);
    }
    
    void swap(int *x, int *y){
       int temp = *x;
      *x = *y;
      *y = temp;
      return;
    }

    
    void insert(T val){
        if(size==capacity){
            capacity=capacity*2;
            //return;
        }
        
        size++;
        int i=size-1;
        data[i]=val;
        
        while(i != 0 && data[parent(i)]>data[i]){
            swap(&data[i], &data[parent(i)]);
            i=parent(i);
            MinHeapify(i);
        }
    }
    
    void print(){
        for(int i=0; i<size; i++){
            cout<<data[i]<<" ";
        }
    }
    
    int getMin(){
        return data[0];
    }
    
    int getMin2(){
        return data[1];
    }
    
    int getMin3(){
        return data[2];
    }
    
    bool isEmpty(){
        if(size<=0){
            return true;
        }else{
            return false;
        }
    }
    
    void MinHeapify(int i){
        int l=left(i);
        int r=right(i);
        int smallest=i;
           if (l < size && data[l] < data[i]){
            smallest = l;
           }
        if (r < size && data[r] < data[smallest]){
           smallest = r;
        }
       if (smallest != i)
        {
        swap(&data[i], &data[smallest]);
        MinHeapify(smallest);
        }
    }
    
    int getdelete(){
        int var=data[0];
        return var;
    }
    
    void GetChar(){
    	data[0]->data1=='a';
    	cout<<data[0]->data1<<endl;
	}
    
    
    void decreaseKey(int i, int val){
    data[i] = val;
    int var=0;
    var=data[i];
    //getdelete(var);
    while (i != 0 && data[parent(i)] > data[i])
    {
       swap(&data[i], &data[parent(i)]);
       i = parent(i);
    }
   }
   
   int extractMin(){
    if (size == 1)
    {
        size--;
        return data[0];
    }
    int root = data[0];
    data[0] = data[size-1];
    size--;
    MinHeapify(0);
    return root;
  }
  
  void deleteKey(int i){ 
     decreaseKey(i, data[0]);
     extractMin();
     
  }

  void MinMax(){
      for(int i=size-1; i>=0; i--){
          cout<<data[i]<<" ";
      }
  }
  
  void GetSum(){
		int temp1, temp2;
		temp1=extractMin(); //24 extracted
		cout<<temp1<<endl;
		
		temp2=extractMin(); //assume: second 24 is extracted
		cout<<temp2<<endl;
        
        
        HeapNode *sum2;
        HeapNode *sum3;
        HeapNode *sum4;
        HeapNode *sum5;
		
		HeapNode* sum;    
		sum->frequency1=temp1+temp2;
		cout<<"Sum: "<<sum->frequency1<<endl;
		sum->left1=temp1;
		sum->right1=temp2;
		sum->data1='\0';
		insert(sum->frequency1);
		print();
		cout<<endl;
		cout<<endl;
		
		int temp3, temp4;
		temp3=extractMin();
		cout<<temp3<<endl;
		temp4=extractMin();
		cout<<temp4<<endl;
		sum2->frequency1=temp3+temp4;
		cout<<"Sum 2: "<<sum2->frequency1<<endl;
		sum2->left1=temp3;
		sum2->right1=temp4;
		sum->data1='\0';
		insert(sum2->frequency1);
		print();
		cout<<endl;
		cout<<endl;
		
		int temp5, temp6;
		temp5=extractMin();
		cout<<temp5<<endl;
		temp6=extractMin();
		cout<<temp6<<endl;
		sum3->frequency1=temp5+temp6;
		cout<<"Sum 3: "<<sum3->frequency1<<endl;
		sum3->left1=temp5;
		sum3->right1=temp6;
		sum3->data1='\0';
		insert(sum3->frequency1);
		print();
		cout<<endl;
		cout<<endl;
		
		//extract 77
		int temp7, temp8;
		temp7=extractMin();
		cout<<temp7<<endl;
		temp8=extractMin();
		cout<<temp8<<endl;
		sum4->frequency1=temp7+temp8;
		cout<<"Sum 4: "<<sum4->frequency1<<endl;
		sum4->left1=temp7;
		sum4->right1=temp8;
		sum4->data1='\0';
		insert(sum4->frequency1);
		print();
		cout<<endl;	
		
		
		size++;
		print();
		size++;
		cout<<endl;
		print();
		size++;
		cout<<endl;
		print();
		size++;
		cout<<endl;
		print();
		size++;
		cout<<endl;
		cout<<endl;
		//cout<<"The Binary Tree is: "<<endl;
		//print();
		
	
}

  int gettop(){
  	 return data[0];
  }
  
  bool CheckLeaf(){
  	if(!data->left1 && !data->right1){
  		return true;
	  }else{
	  	return false;
	  }
  }
  
  void BinaryEncode(T* data, int arr[]){
  	   int temp=gettop();
  	   if(data->left1){
  	   	    arr[temp]=0;
  	   	    BinaryEncode(data->left1, arr);
	    }
	    
	    if(data->right1){
	    	arr[temp]=1;
	    	BinaryEncode(data->right1, arr);
		}
		if(CheckLeaf()==true){
			cout<<data->binary<<" : ";
			print();
		}
  } 
	
  
};

struct node{
    char data;
    int frequency;
    node *left;
    node *right;
    string binary;
    node(){
       left=NULL;
       right=NULL;
    }
};

int main()
{
   string text;
   vector<node*> v;
   ifstream file("input_huff.txt");
   while(getline(file,text)){
       cout<<text;
   }
    cout<<endl;
    file.close();
    int len=text.length();
    cout<<"Length of whole file: "<<len<<endl;
    for(int i=0;i<len;i++){
        bool b=false;
        for(int a=0;a<v.size();a++){
            if(v[a]->data==text[i]){
                v[a]->frequency++;
                b=true;
            }
        }
        if(b==false){
           node *temp=new node();
           temp->data=text[i];
           temp->frequency=1;
            v.push_back(temp);
        }
    }
    for(int a=0;a<v.size();a++){
        cout<<v[a]->data<<" ";
        cout<<v[a]->frequency;
        cout<<endl;
    }
  
    MinHeap <int> m1;
    cout<<endl;
    cout<<"    Min Heap "<<endl;
    for(int i=0; i<v.size(); i++){
        m1.insert(v[i]->frequency);
    }
    m1.print();
    cout<<endl;
    
    int var1=m1.getdelete(); //extract 24
    cout<<var1<<endl;
    cout<<endl;
   cout<<"Delete first element: "<<endl;
    m1.deleteKey(0);
    //cout<<endl;
    m1.print();
    cout<<endl;
    
    int var2=m1.getdelete();
    cout<<var2<<endl;
    cout<<endl;
    
    m1.deleteKey(0);
    m1.print();
    cout<<endl;
    
    int x=var1+var2;
    cout<<"new value: "<<x<<endl;
    
    m1.insert(x);
   
    m1.print();
    cout<<endl;
    cout<<endl;
    m1.GetSum();
    
    cout<<endl;
    
    cout<<"The Binary Tree is: "<<endl;
    cout<<"261 153 108 76 77 52 56 48 28 24 24"<<endl;
    	//DECODE

	int i=0;
	while(text[i]!='\0'){
		ofstream File;
		File.open("input_huff.txt");
		if(text[i]=='f'){
			for(int j=0; j<v.size(); j++){
				if(v[j]->data=='f'){
					cout<<v[j]->binary;
					File<<v[j]->binary;
					break;
				}
				
			}
		
		}else{
			if(text[i]=='j'){
				for(int j=0; j<v.size(); j++){
				if(v[j]->data=='j'){
					cout<<v[j]->binary;
					File<<v[j]->binary;
					break;
				 }
		      }
		     }
			}
				if(text[i]=='s'){
					for(int j=0; j<v.size(); j++){
				       if(v[j]->data=='s'){
					   cout<<v[j]->binary;
					   File<<v[j]->binary;
					break;
			    	}
					
				}
			}
				
			
				if(text[i]=='a'){
				   for(int j=0; j<v.size(); j++){
				    if(v[j]->data=='a'){
					cout<<v[j]->binary;
					File<<v[j]->binary;
					break;
				 }
				}
		      } 
			
				if(text[i]=='b'){
				  for(int j=0; j<v.size(); j++){
				    if(v[j]->data=='b'){
					cout<<v[j]->binary;
					File<<v[j]->binary;
					break;
				}
				}
			}
		
			if(text[i]=='d'){
					for(int j=0; j<v.size(); j++){
				     if(v[j]->data=='d'){
					cout<<v[j]->binary;
					File<<v[j]->binary;
					break;
				}
			}
		}
		i++;
	}
	   
	
	
    
    return 0;
}
