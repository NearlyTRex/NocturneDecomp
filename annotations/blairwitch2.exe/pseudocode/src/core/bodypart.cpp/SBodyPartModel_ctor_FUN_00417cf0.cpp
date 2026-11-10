// Name: core_bodypart.cpp_SBodyPartModel_ctor_FUN_00417cf0
// Address: 00417cf0
// Address Range: [[00417cf0, 00417d03]]
// Convention: __cdecl
// Signature: SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_00417cf0(SBodyPartModel *this_ptr)

#include "nocturne.h"

SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_00417cf0(SBodyPartModel *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x18);
  return (SBodyPartModel *)(pCVar1[-1].model_name + 0xec);
}
