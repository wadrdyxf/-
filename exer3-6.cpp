#include <iostream.h>
void main()
{
	int k;
	float r,s,l,pi;
	cout<<"������Բ�İ뾶r��һ��������k��"<<endl;
	cin>>r>>k;
	pi=3.14;
	k>=1&&k<=3;
	if (k<2)
		s=pi*r*r;
	else
		if (k==2)
			l=2*pi*r;
		else
			{
				s=pi*r*r;
				l=2*pi*r;
			}
	cout<<"Բ�������"<<s<<endl<<"Բ���ܳ���"<<l<<endl;
}

		