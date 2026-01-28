// Name: core_health.cpp_FUN_004f1fd0
// Address: 004f1fd0
// Address Range: [[004f1fd0, 004f2014]]
// Convention: unknown
// Signature: undefined4 core_health_cpp_FUN_004f1fd0(void)

#include "nocturne.h"

/* Signature: byte actors_other_health.cpp_FUN_004f1fd0(uint param_1, uint
   param_2) */

uint core_health_cpp_FUN_004f1fd0(void)

{
  float fVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (0 < *(int *)(in_stack_00000004 + 0x2d4)) {
    fVar1 = *(float *)(in_stack_00000004 + 0x2d8) + *(float *)(in_stack_00000008 + 0x243c);
    *(float *)(in_stack_00000008 + 0x243c) = fVar1;
    if ((float)100 < fVar1) {
      *(uint *)(in_stack_00000008 + 0x243c) = 0x42c80000;
    }
    *(int *)(in_stack_00000004 + 0x2d4) = *(int *)(in_stack_00000004 + 0x2d4) + -1;
  }
  return *(uint *)(in_stack_00000004 + 0x2d4);
}
