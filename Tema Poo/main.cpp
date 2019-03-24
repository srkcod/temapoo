#include <iostream>
using namespace std;

char adunare (char v[n],char t[n])
{
    int rest=0;                        ///se face practic la fel ca adunarea de clasele 1-4 unde tii minte un 1 daca suma cifrelor cu
    for(i=1; i<=n; i++)                ///acelasi rang este peste 10
    {
        if(v[i]+t[i]+rest>9)
        {
            s[i]=v[i]+t[i];
            rest=0;
        }
        else
        {
            s[i]=(v[i]+t[i]+rest)%10;
            rest=1;

        }
    }

    return s[i];
}
char paritate (char v[n])
{

}
class bigint
{
private:

    bigint()
    {
        char* a = NULL;
        int n;
        cin>>n;
        a = new char[n];
        a[0]=n;
        char nr;
        for(int i=1; i<=n; i++)
        {
            a[i]=
        }
    }
};


int main()
{

    return 0;
}
