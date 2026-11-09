// Name: core_bugs.cpp_maxFloat_FUN_00424300
// Address: 00424300
// Address Range: [[00424300, 0042432b]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_maxFloat_FUN_00424300(float param_1,float param_2)

#include "nocturne.h"

float __cdecl core_bugs_cpp_maxFloat_FUN_00424300(float param_1,float param_2)

{
  if (param_2 < param_1) {
    return param_1;
  }
  return param_2;
}
