// Name: core_bugs.cpp_maxFloat_FUN_00424300
// Address: 00424300
// Address Range: [[00424300, 0042432b]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_maxFloat_FUN_00424300(float a,float b)

#include "nocturne.h"

float __cdecl core_bugs_cpp_maxFloat_FUN_00424300(float a,float b)

{
  if (b < a) {
    return a;
  }
  return b;
}
