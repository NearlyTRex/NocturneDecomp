// Name: core_ladder.cpp_FUN_00502a40
// Address: 00502a40
// Address Range: [[00502a40, 00502a65]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502a40()

#include "nocturne.h"

/* Signature: byte actors_other_ladder.cpp_FUN_00502a40(uint param_1) */

uint core_ladder_cpp_FUN_00502a40(void)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000004;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  if (pCVar1->poly_count < 1) {
    return 0;
  }
  return 1;
}
