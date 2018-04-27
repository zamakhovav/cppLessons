#include <iostream>

using namespace std;

int main() {

    unsigned int a; //declaration

    a = 10; //assignment, integer
    a = 0x2A; //hex base
    a = 052; //oct base
    a = 0b1010101;  //base 2

    //initialization = declaration + assignment

    int c = 10; //c++ style initialization
    int e(10); //constructor style initialization
    int f(10); //uniform initialization

    int g = 10u;
    long int h = 40L;

    // values are normally converted to unsigned representation
    unsigned u1 = 40, u2 = 12; //there is no minus values

    std::cout << u1 - u2 << std::endl;
    std::cout << u2 - u1 << std::endl;

    // c++98 syntax
    // typedef [type] [alias]

    typedef unsigned char byte;
    typedef unsigned short word;
    typedef unsigned int dword;
    typedef unsigned long int qword;

    //c++11 syntax
    // using [alias] = [type]

    using byte = unsigned char;
    using word = unsigned short;
    using dword = unsigned int;
    using qword = unsigned long int;

    //decline some type aliases
    using salary = int;
    using budget = int;
    salary managerSalary = 1000;
    budget projectBudget = 125000;

    // decltype operator returns the type of its operand
    int p = 5;

    decltype(p) q = 10; //q is of whatever type p is
    //decltype(f()) x; //x has type whatever it returns

    //C++98
    const int x_old = 5;

    //C++11
    constexpr int x = 5;

    // valid only if get_dize() returns a constexpr type value
    //constexpr int size = get_size();

    bool num = 42; // true
    bool v = 0; // false
    bool n = -4; // true

    int value = -12;
    while(value) {
        value++;
    }

    float pi = 3.14159;
    int val = pi; // 3
    float pi2 = pi; //3.0

    double dou = 9/6; // 1.0
    double d2 = 9.0/6; //1.5

    //type casting
    // static_cast<T>( x ) -> T x
    long double pi_num(3.14159L);

    double d_num = static_cast<double>(pi_num);
    float f_num = static_cast<float>(pi_num);
    int i_num = static_cast<int>(pi_num);

    // out-of-range values
    unsigned char ch0 = -1; //ch0 is
    //char ch = 256; //WARNING! Undefined behaviour
    //char ch2 = 10;

    //C++11
    //auto x; ERROR - uninitialized variable
    auto value1 = 5; //type of x is int
    //auto hello = "hello"; //const name
    auto value2 = string("word");
    auto value3 = "word"s; //starting from C++14;

    constexpr auto value_num = 9/6; //value_num is int and value is 1;
    constexpr auto auto_num = static_cast<double>(9/6);
    constexpr auto auto_null = 42ULL; //
    constexpr auto auto_float = 5.98f;


    return 0;
}