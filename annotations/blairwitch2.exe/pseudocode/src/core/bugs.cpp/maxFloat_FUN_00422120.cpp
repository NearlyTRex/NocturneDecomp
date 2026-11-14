// Name: core_bugs.cpp_maxFloat_FUN_00422120
// Address: 00422120
// Address Range: [[00422120, 0042214b]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_maxFloat_FUN_00422120(float a,float b)

#include "nocturne.h"

float __cdecl core_bugs_cpp_maxFloat_FUN_00422120(float a,float b)

{
  if (b < a) {
    return a;
  }
  return b;
}
