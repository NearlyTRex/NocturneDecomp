// Name: core_bugs.cpp_maxFloat_FUN_00423d60
// Address: 00423d60
// Address Range: [[00423d60, 00423d8b]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_maxFloat_FUN_00423d60(float a,float b)

#include "nocturne.h"

float __cdecl core_bugs_cpp_maxFloat_FUN_00423d60(float a,float b)

{
  if (b < a) {
    return a;
  }
  return b;
}
