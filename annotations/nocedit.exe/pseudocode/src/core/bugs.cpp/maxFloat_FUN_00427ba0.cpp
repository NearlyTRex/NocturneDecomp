// Name: core_bugs.cpp_maxFloat_FUN_00427ba0
// Address: 00427ba0
// Address Range: [[00427ba0, 00427bcb]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_maxFloat_FUN_00427ba0(float a,float b)

#include "nocturne.h"

float __cdecl core_bugs_cpp_maxFloat_FUN_00427ba0(float a,float b)

{
  if (b < a) {
    return a;
  }
  return b;
}
