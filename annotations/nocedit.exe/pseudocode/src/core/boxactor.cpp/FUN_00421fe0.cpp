// Name: core_boxactor.cpp_FUN_00421fe0
// Address: 00421fe0
// Address Range: [[00421fe0, 00422055]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00421fe0()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_00421fe0(uint param_1, uint
   param_2) */

float * core_boxactor_cpp_FUN_00421fe0(void)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  int local_8;
  
  crt_math_c_round_FUN_005fe6b0((double)*(float *)(in_stack_00000004 + 0x310));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  pCVar2 = pCVar1->frame_bounds + local_8 * 2;
  *in_stack_00000008 = pCVar2->x;
  in_stack_00000008[1] = pCVar2->y;
  in_stack_00000008[2] = pCVar2->z;
  in_stack_00000008[3] = pCVar2[1].x;
  in_stack_00000008[4] = pCVar2[1].y;
  in_stack_00000008[5] = pCVar2[1].z;
  return in_stack_00000008;
}
