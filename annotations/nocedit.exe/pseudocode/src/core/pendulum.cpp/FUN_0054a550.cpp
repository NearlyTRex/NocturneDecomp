// Name: core_pendulum.cpp_FUN_0054a550
// Address: 0054a550
// Address Range: [[0054a550, 0054a58e]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_0054a550()

#include "nocturne.h"

/* Signature: byte actors_other_pendulum.cpp_FUN_0054a550(uint param_1, uint
   param_2) */

uint core_pendulum_cpp_FUN_0054a550(void)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x440) == 0) {
    return 0;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
    *(int *)(in_stack_00000008 + 0x24) = in_stack_00000004 + 0x158;
  }
  return 1;
}
