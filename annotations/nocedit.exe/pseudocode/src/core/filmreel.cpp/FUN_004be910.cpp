// Name: core_filmreel.cpp_FUN_004be910
// Address: 004be910
// Address Range: [[004be910, 004be95d]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be910()

#include "nocturne.h"

/* Signature: byte actors_other_filmreel.cpp_FUN_004be910(uint param_1, uint
   param_2) */

float * core_filmreel_cpp_FUN_004be910(void)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  pCVar1 = pCVar2->frame_bounds;
  *in_stack_00000008 = pCVar1->x;
  in_stack_00000008[1] = pCVar1->y;
  in_stack_00000008[2] = pCVar1->z;
  in_stack_00000008[3] = pCVar1[1].x;
  in_stack_00000008[4] = pCVar1[1].y;
  in_stack_00000008[5] = pCVar1[1].z;
  return in_stack_00000008;
}
