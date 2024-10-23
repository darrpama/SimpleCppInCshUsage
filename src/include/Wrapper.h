#pragma once
#ifndef WRAPPER_H
#define WRAPPER_H

#include <string>

extern "C" __attribute__ ((visibility ("default")))
const char* CalculateWrapper(const char* expression);

extern "C" __attribute__ ((visibility ("default")))
int add(int a, int b);

extern "C" __attribute__ ((visibility ("default")))
int subtract(int a, int b);

extern "C" __attribute__ ((visibility ("default")))
int multiply(int a, int b);

extern "C" __attribute__ ((visibility ("default")))
int divide(int a, int b);

#endif  // WRAPPER_H