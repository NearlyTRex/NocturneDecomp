// Name: core_bugs.cpp_maxFloat_FUN_00428150
// Address: 00428150
// Address Range: [[00428150, 0042817b]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_maxFloat_FUN_00428150(float param_1,float param_2)

#include "nocturne.h"

float __cdecl core_bugs_cpp_maxFloat_FUN_00428150(float param_1,float param_2)

{
  if (param_2 < param_1) {
    return param_1;
  }
  return param_2;
}
