class Base{
int priv;
protected:
int prot;
public:
int publ;
};
// What can derived1 access from Base? It can access only the public and protected members of the base class (i.e int prot, int publ)
// What are the access specifiers of members inherited from Base? Protected, Public
class derived1 : Base {
int priv1;
protected:
int prot1;
public:
int publ1;
};
// What can derived2 access from derived1? The protected and public members of the derived 1 class
// What are the access specifiers of members inherited from derived1? Protected and Public
// What about the inherited members of Base in derived1? The members are overwritten
class derived2 : public derived1 {
int priv2;
protected:
int prot2;
public:
int publ2;
};
// What can derived3 access from derived2? int prot2 and int publ2
// What are the access specifiers of members inherited from derived2? Protected and Public
// What about the inherited members of Base & derived1 in derived2? The memebers are overwritten
class derived3 : protected derived2 {
int priv3;
protected:
int prot3;
public:
int publ3;
};
// Assignment: write out all the remaining inheritance
//schemes that are possible together with all possible
//member access specifiers. Upload your code to your
//github account.

//the base can be derived infinite times therefore i used the value "n" to suggest the infinity
class derivedn: protected derived3 {
int privn;
protected:
int protn;
public:
int publn;
};
