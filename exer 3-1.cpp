#include<iostream.h>
void main()
{
	int x;
	cout<<"please input x:";
	cin>>x;
	if(x<=99)
		switch(x/10)
	{
		case 0:cout<<"��ֵС��10\n";break;
		case 1:
		case 2:		
		case 3:	
		case 5:	
		case 6:	
		case 7:	
		case 8:
		case 9:cout<<"��ֵ10~~99\n";break;
	}
			else
				if(x>=100)
					switch(x/1000)
				{
					case 0:cout<<"��ֵ100~999\n";break;
					default:cout<<"��ֵ1000����\n";
				}
}

        

#include<iostream.h>
void main()
{
	int x;
	cout<<"please input x:"<<endl;
	cin>>x;
	if(x<=9)
		cout<<"��ֵС��10"<<endl;
	else
		if(x>=10&&x<=99)
			cout<<"��ֵ10~99"<<endl;
		else
			if(x>=100&&x<=999)
				cout<<"��ֵ100~999"<<endl;
			else
				if(x>=1000)
					cout<<"��ֵ1000����"<<endl;
				
}