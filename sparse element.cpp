//sparse element bro lol
class Solution {

public :

int Sparsenum(int n){
int r = n&1;//odd = 1 and even = 0
while(n)
{


if(r==0){
n=n>>1;
r=n&1;
if(r==0)
{
    return 1;
}
}
 
if(r==1){
    n=n>>1;
    r=n&1;
    if(r==1)
    {
        return 1;

    }

 }

}
return 0;
}};


int main ()
{   int num =0;
cin>>num;
    Solution obj1;
   int value = obj1.Sparsenum(num);

   if(value==1 )
   cout<<"Sparse element bro";
   else 
   cout<<"non-sparse element bro";

return 0;
}