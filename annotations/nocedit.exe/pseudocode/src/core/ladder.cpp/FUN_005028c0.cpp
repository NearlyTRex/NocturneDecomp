// Name: core_ladder.cpp_FUN_005028c0
// Address: 005028c0
// Address Range: [[005028c0, 005029bb]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_005028c0()

#include "nocturne.h"

/* Signature: byte actors_other_ladder.cpp_FUN_005028c0(uint param_1, uint
   param_2) */

float * core_ladder_cpp_FUN_005028c0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CKeyFramedModel *pCVar7;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  if (pCVar7->poly_count < 1) {
    fVar5 = (float)0.5;
    fVar1 = *(float *)(in_stack_00000004 + 0x2dc);
    fVar2 = *(float *)(in_stack_00000004 + 0x2d4);
    fVar3 = *(float *)(in_stack_00000004 + 0x2d8);
    fVar6 = (float)0.10000000000000001;
    fVar4 = *(float *)(in_stack_00000004 + 0x2dc);
    *in_stack_00000008 = -*(float *)(in_stack_00000004 + 0x2d4) * fVar5;
    in_stack_00000008[1] = -0.1;
    in_stack_00000008[2] = -fVar1 * fVar5;
    in_stack_00000008[3] = fVar2 * fVar5;
    in_stack_00000008[4] = fVar3 + fVar6;
    in_stack_00000008[5] = fVar5 * fVar4;
    return in_stack_00000008;
  }
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  *in_stack_00000008 = (pCVar7->bounds_min).x;
  in_stack_00000008[1] = (pCVar7->bounds_min).y;
  in_stack_00000008[2] = (pCVar7->bounds_min).z;
  in_stack_00000008[3] = (pCVar7->bounds_max).x;
  in_stack_00000008[4] = (pCVar7->bounds_max).y;
  in_stack_00000008[5] = (pCVar7->bounds_max).z;
  return in_stack_00000008;
}
