class mystack{
	int a[];
	int top;
	int capacity;
	public mystack(int capacity){
		this.capacity=capacity;
		top=-1;
		a=new int[capacity];
	
	void push(int data);
	if(top==capacity-1){
		throw new exception();
	}
	top++;
	a[top]=data;
}
int pop(){
	if(top==-1){
		throw new exception;
	}
	int res=a[top];
	top--;
	return res;
}
int peek(){
	if(top==-1){
		throw new exception();
	}
	return res[top];
}
boolean isempty(){
	return top==-1;
}
}
