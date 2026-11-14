// Name: core_bugs.cpp_maxFloat_FUN_00428150
// Address: 00428150
// Address Range: [[00428150, 0042817b]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_maxFloat_FUN_00428150(float a,float b)

#include "nocturne.h"

float __cdecl core_bugs_cpp_maxFloat_FUN_00428150(float a,float b)

{
  if (b < a) {
    return a;
  }
  return b;
}
