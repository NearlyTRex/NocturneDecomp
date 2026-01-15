// Name: core_boxactor.cpp_FUN_00422340
// Address: 00422340
// Address Range: [[00422340, 00422389]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422340()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_00422340(uint param_1, uint
   param_2) */

uint core_boxactor_cpp_FUN_00422340(void)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(int *)(in_stack_00000004 + 0x5f8) != 0) && (*(int *)(in_stack_00000004 + 0x318) == 0)) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
    if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
      *(int *)(in_stack_00000008 + 0x24) = in_stack_00000004 + 0x158;
    }
    return 1;
  }
  return 0;
}
