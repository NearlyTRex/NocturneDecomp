// Name: core_platfrm.cpp_FUN_0054e180
// Address: 0054e180
// Address Range: [[0054e180, 0054e19f] [0054e1a6, 0054e1bb]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_FUN_0054e180(void)

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054e180(uint param_1, uint
   param_2) */

int __cdecl core_platfrm_cpp_FUN_0054e180(void)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return 1;
  }
  *(int *)(in_stack_00000008 + 0x24) = in_stack_00000004 + 0x158;
  return 1;
}
