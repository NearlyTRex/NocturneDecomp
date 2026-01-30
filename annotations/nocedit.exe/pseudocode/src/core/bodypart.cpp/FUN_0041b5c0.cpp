// Name: core_bodypart.cpp_FUN_0041b5c0
// Address: 0041b5c0
// Address Range: [[0041b5c0, 0041b615]]
// Convention: __cdecl
// Signature: float * __cdecl core_bodypart_cpp_FUN_0041b5c0(void)

#include "nocturne.h"

float * __cdecl core_bodypart_cpp_FUN_0041b5c0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  fVar5 = 0.5f;
  fVar1 = in_stack_00000004[1];
  fVar2 = in_stack_00000004[4];
  fVar3 = in_stack_00000004[2];
  fVar4 = in_stack_00000004[5];
  *in_stack_00000008 = (*in_stack_00000004 + in_stack_00000004[3]) * 0.5f;
  in_stack_00000008[1] = (fVar1 + fVar2) * fVar5;
  in_stack_00000008[2] = fVar5 * (fVar3 + fVar4);
  return in_stack_00000008;
}
