// Name: core_bugs.cpp_FUN_00427ba0
// Address: 00427ba0
// Address Range: [[00427ba0, 00427bcb]]
// Convention: __cdecl
// Signature: float __cdecl core_bugs_cpp_FUN_00427ba0(void)

#include "nocturne.h"

float __cdecl core_bugs_cpp_FUN_00427ba0(void)

{
  float in_stack_00000004;
  float in_stack_00000008;
  
  if (in_stack_00000008 < in_stack_00000004) {
    return in_stack_00000004;
  }
  return in_stack_00000008;
}
