// Name: core_bodypart.cpp_SBodyPartModel_ctor_FUN_00416da0
// Address: 00416da0
// Address Range: [[00416da0, 00416db3]]
// Convention: __cdecl
// Signature: SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_00416da0(SBodyPartModel *this_ptr)

#include "nocturne.h"

SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_00416da0(SBodyPartModel *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500(&this_ptr->model);
  return (SBodyPartModel *)(pCVar1[-1].model_name + 0xec);
}
