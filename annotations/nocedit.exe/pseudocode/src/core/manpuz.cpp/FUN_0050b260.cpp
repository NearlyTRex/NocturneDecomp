// Name: core_manpuz.cpp_FUN_0050b260
// Address: 0050b260
// Address Range: [[0050b260, 0050b2ac]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b260()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050b260(uint param_1, uint
   param_2) */

float * core_manpuz_cpp_FUN_0050b260(void)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  *in_stack_00000008 = (pCVar1->bounds_min).x;
  in_stack_00000008[1] = (pCVar1->bounds_min).y;
  in_stack_00000008[2] = (pCVar1->bounds_min).z;
  in_stack_00000008[3] = (pCVar1->bounds_max).x;
  in_stack_00000008[4] = (pCVar1->bounds_max).y;
  in_stack_00000008[5] = (pCVar1->bounds_max).z;
  return in_stack_00000008;
}
