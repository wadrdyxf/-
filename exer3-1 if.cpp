#include<iostream.h>
void main()
{
	float x;
	cout<<"Please input x:"<<endl;
	cin>>x;
	if(x<10)
		cout<<":小于10.\n";
	else
		if(x>10&&x<99)
			cout<<":10~99.\n";
		else
			if(x>100&&x<999)
				cout<<":100~999.\n";
			else
				if(x>1000)
					cout<<":大于1000.\n"<<endl;
}