// Name: core_boneguy.cpp_FUN_0041b700
// Address: 0041b700
// Address Range: [[0041b700, 0041b76d]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041b700()

#include "nocturne.h"

float * core_boneguy_cpp_FUN_0041b700(void)

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
