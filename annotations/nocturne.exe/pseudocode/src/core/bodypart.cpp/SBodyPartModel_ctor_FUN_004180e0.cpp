// Name: core_bodypart.cpp_SBodyPartModel_ctor_FUN_004180e0
// Address: 004180e0
// Address Range: [[004180e0, 004180f3]]
// Convention: __cdecl
// Signature: SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_004180e0(SBodyPartModel *this_ptr)

#include "nocturne.h"

SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_004180e0(SBodyPartModel *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(&this_ptr->model);
  return (SBodyPartModel *)(pCVar1[-1].model_name + 0xec);
}
