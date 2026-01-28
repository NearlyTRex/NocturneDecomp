// Name: core_spline.cpp_FUN_005b90a0
// Address: 005b90a0
// Address Range: [[005b90a0, 005b922b]]
// Convention: unknown
// Signature: void core_spline_cpp_FUN_005b90a0(void)

#include "nocturne.h"

void core_spline_cpp_FUN_005b90a0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  fVar1 = in_stack_00000008 * in_stack_00000008;
  fVar3 = (1.0 - in_stack_0000000c) * (float)0.5;
  fVar2 = fVar1 * in_stack_00000008;
  fVar4 = fVar3 * 2.0f;
  fVar7 = fVar3 * -3.0f;
  fVar6 = 2.0f - fVar3;
  fVar5 = fVar3 + -3.0f;
  fVar9 = 3.0f - fVar4;
  in_stack_00000004[1] = fVar5 * fVar1 + fVar6 * fVar2 + 1.0;
  fVar8 = fVar3 * 4.0f;
  fVar10 = fVar3 + -2.0f;
  in_stack_00000004[3] = fVar3 * fVar2 - fVar3 * fVar1;
  fVar11 = fVar3 * 3.0f;
  fVar6 = fVar6 * 3.0f;
  in_stack_00000004[4] = (fVar8 * in_stack_00000008 + fVar7 * fVar1) - fVar3;
  fVar7 = fVar9 * 2.0f;
  in_stack_00000004[5] = fVar5 * 2.0f * in_stack_00000008 + fVar6 * fVar1;
  fVar5 = fVar10 * 3.0f;
  in_stack_00000004[7] = fVar11 * fVar1 - fVar4 * in_stack_00000008;
  *in_stack_00000004 = (-fVar3 * fVar2 + fVar4 * fVar1) - fVar3 * in_stack_00000008;
  in_stack_00000004[2] = fVar9 * fVar1 + fVar10 * fVar2 + fVar3 * in_stack_00000008;
  in_stack_00000004[6] = fVar5 * fVar1 + fVar7 * in_stack_00000008 + fVar3;
  return;
}
