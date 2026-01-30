// Name: core_mobster.cpp_FUN_005250a0
// Address: 005250a0
// Address Range: [[005250a0, 0052510d]]
// Convention: __cdecl
// Signature: float * __cdecl core_mobster_cpp_FUN_005250a0(void)

#include "nocturne.h"

float * __cdecl core_mobster_cpp_FUN_005250a0(void)

{
  float fVar1;
  float *in_stack_00000004;
  int in_stack_00000008;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
  fVar1 = 0.5f;
  *in_stack_00000004 = (fStack_30 + fStack_24) * 0.5f;
  in_stack_00000004[1] = fVar1 * (fStack_2c + fStack_20);
  in_stack_00000004[2] = fStack_28 + (float)0.40000000000000002;
  return in_stack_00000004;
}
