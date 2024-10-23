#include "Wrapper.h"

extern "C" __attribute__ ((visibility ("default")))
const char* CalculateWrapper(const char* expression)
{
    std::string std_expression = expression;

    std::string answer = "answer";

    char* c_answer = new char[answer.size() + 1];

    std::strcpy(c_answer, answer.c_str());

    return c_answer;
}

// addition implementation
extern "C" __attribute__ ((visibility ("default")))
int add(int a, int b) { return a + b; }

// substraction implementation
extern "C" __attribute__ ((visibility ("default")))
int subtract(int a, int b) { return a - b; }

// multiply implementation
extern "C" __attribute__ ((visibility ("default")))
int multiply(int a, int b) { return a * b; }

// divide implementation
extern "C" __attribute__ ((visibility ("default")))
int divide(int a, int b) { return a / b; }