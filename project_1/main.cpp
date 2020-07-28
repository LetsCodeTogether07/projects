#include<iostream>

using namespace std;

class NumericProgression
{
public:
    NumericProgression(int i = 0):first(i),current(i){}
    virtual ~NumericProgression(){};
    void printProgression(int n);
protected:
    int first;
    int current;
    virtual int firstValue();
    virtual int nextValue();

};

int NumericProgression :: firstValue()
{
   current = first;
   return current;
}

int NumericProgression :: nextValue()
{
    return ++current;
}


void NumericProgression ::printProgression(int n)
{
    cout<<firstValue();
    for(int i =2;i<n;i++)
        cout<<" " <<nextValue();
    cout<<endl;
}


class ArithmeticProg : public NumericProgression
{
protected:
    int inc;
    virtual int nextValue();
public:
    ArithmeticProg(int d = 1);
};

ArithmeticProg :: ArithmeticProg(int d):NumericProgression(),inc(d){}

int ArithmeticProg :: nextValue()
{
    current += inc;
    return current;
}



class GeometricProg : public NumericProgression
{
protected:
    int base;
    virtual int nextValue();
public:
    GeometricProg(int b = 2);
};
GeometricProg :: GeometricProg(int b) : NumericProgression(1),base(b){}


int GeometricProg :: nextValue()
{
    current *=base;
    return current;
}


class FebonacciProg : public NumericProgression
{
protected:
    int prev;
    int second;
    virtual int firstValue();
    virtual int nextValue();
public:
    FebonacciProg(int f =0,int s = 1);

};

FebonacciProg :: FebonacciProg(int f,int s):NumericProgression(f),second(s),prev(second - first){}

int FebonacciProg :: firstValue()
{
    current = first;
    prev = second - first;
    return current;

}
int FebonacciProg :: nextValue()
{
    int temp = prev;
    prev = current;
    current+= temp;
    return current;
}

int main()
{
    NumericProgression *prog;

    prog = new ArithmeticProg(5);
    prog -> printProgression(50);

    cout<<endl;
    prog = new GeometricProg(10);
    prog -> printProgression(10);

    cout<<endl;
    prog = new FebonacciProg();
    prog -> printProgression(20);


   return 0;
}




