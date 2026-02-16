// Name: core_conveyor.cpp_FUN_00442400
// Address: 00442400
// Address Range: [[00442400, 00442490]]
// Convention: __cdecl
// Signature: float __cdecl core_conveyor_cpp_FUN_00442400(void)

#include "nocturne.h"

float __cdecl core_conveyor_cpp_FUN_00442400(void)

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
