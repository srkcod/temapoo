#ifndef BIGINT_H_INCLUDED
#define BIGINT_H_INCLUDED
using namespace std;

class BigInt
{

private:

    int* a;
    int n;
    cin>>n;
    a = new int [n];
    bool semn;

public:

    int sumacif(const BigInt& valoare)
    {
        for =(i=0; i<=n; i++)
        {
            sumac=sumac+valoare.a[i];
        }
        return sumac;
    }

    bool paritate(const BigInt& valoare)
    {
        return valoare.a[0]%2;
    }
BigInt();
    explicit BigInt(const int);
    explicit BigInt(const char *);
    explicit BigInt(const string &);

    friend BigInt operator+(const BigInt&, const BigInt&);
    friend BigInt operator-(const BigInt&, const BigInt&);
    friend BigInt operator*(const BigInt&, const BigInt&);
    friend BigInt operator/(const BigInt&, const BigInt&);

    BigInt operator=(const BigInt&);
    BigInt operator=(const string&);

    friend BigInt pow(const BigInt&, const int);

    friend istream& operator>>(istream&, BigInt&);
    friend ostream& operator<<(ostream&, const BigInt&);
};
///Constructor fara parametri
BigInt::BigInt()
{
    for(i=1; i<=n; i++)
    {
      valoare.a[i]=0;
    }
    semn = true;
}

BigInt operator+(const BigInt& a[n], const BigInt& b[n])
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



#endif // BIGINT_H_INCLUDED
