// Name: core_crate.cpp_FUN_00448980
// Address: 00448980
// Address Range: [[00448980, 004489cd]]
// Convention: unknown
// Signature: float * core_crate_cpp_FUN_00448980(void)

#include "nocturne.h"

/* Signature: byte actors_other_crate.cpp_FUN_00448980(uint param_1, uint param_2)
    */

float * core_crate_cpp_FUN_00448980(void)

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
