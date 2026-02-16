// Name: core_bat.cpp_FUN_004146f0
// Address: 004146f0
// Address Range: [[004146f0, 00414780]]
// Convention: __cdecl
// Signature: float __cdecl core_bat_cpp_FUN_004146f0(void)

#include "nocturne.h"

float __cdecl core_bat_cpp_FUN_004146f0(void)

{
  double dVar1;
  float in_stack_00000004;
  float in_stack_00000008;
  
  if (in_stack_00000004 < 0.0) {
    dVar1 = floor((double)(-in_stack_00000004 / in_stack_00000008));
    in_stack_00000004 = (float)dVar1 * in_stack_00000008 + in_stack_00000004;
    if (in_stack_00000004 < 0.0) {
      in_stack_00000004 = in_stack_00000004 + in_stack_00000008;
    }
    return in_stack_00000004;
  }
  dVar1 = floor((double)(in_stack_00000004 / in_stack_00000008));
  return in_stack_00000004 - (float)dVar1 * in_stack_00000008;
}
