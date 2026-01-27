// Name: core_ladder.cpp_CLadder_FUN_00502a40
// Address: 00502a40
// Address Range: [[00502a40, 00502a65]]
// Convention: __cdecl
// Signature: int core_ladder.cpp_CLadder_FUN_00502a40(CLadder * this_ptr)

#include "nocturne.h"

int __cdecl core_ladder_cpp_CLadder_FUN_00502a40(CLadder *this_ptr)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar1->poly_count < 1) {
    return 0;
  }
  return 1;
}
