#include<bits/stdc++.h>
using namespace std;
class Number
{
	public:
		Number(int num):mNum(num) {}
		Number(const Number &n):mNum(n.mNum) {}
		~Number(){}
		bool isPrime()
		{
			for(int i=2;i<mNum;i++)
				if(mNum%i==0) return false;
			return true;
		}
	private: const int mNum;
};
class SuperPrime : public Number
{
	public:
		SuperPrime(int num):Number(num),nNum(num){}
		~SuperPrime(){}
		Number sumBit()
		{
			int sum=0,tmp=nNum;
			while(tmp)
			{
				sum+=tmp%10;
				tmp/=10;
			}
			return Number(sum);
		}
		Number multiBit()
		{
			int sum=1,tmp=nNum;
			while(tmp)
			{
				sum*=tmp%10;
				tmp/=10;
			}
			return Number(sum);
		}
		Number squareSumBit()
		{
			int sum=0,tmp=nNum;
			while(tmp!=0){
				sum+=(tmp%10)*(tmp%10);
				tmp/=10;
			}
			return Number(sum);
		}
		int getNum()
		{
			return nNum;
		}
	private: const int nNum;
};
int main()
{
	SuperPrime sp(113);
	if(sp.isPrime()) printf("sp is a prime\n");
	if(sp.sumBit().isPrime()) printf("sp'sumbit is a prime\n");
	if(sp.multiBit().isPrime()) printf("sp'multibit is a prime\n");
	if(sp.squareSumBit().isPrime()) printf("sp'squareSumBit is a prime\n");
	return 0;
}
