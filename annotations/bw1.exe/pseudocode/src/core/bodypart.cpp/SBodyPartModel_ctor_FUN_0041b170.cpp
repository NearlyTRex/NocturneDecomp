// Name: core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b170
// Address: 0041b170
// Address Range: [[0041b170, 0041b183]]
// Convention: __cdecl
// Signature: SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_0041b170(SBodyPartModel *this_ptr)

#include "nocturne.h"

SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_0041b170(SBodyPartModel *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860(&this_ptr->model);
  return (SBodyPartModel *)(pCVar1[-1].model_name + 0xec);
}
