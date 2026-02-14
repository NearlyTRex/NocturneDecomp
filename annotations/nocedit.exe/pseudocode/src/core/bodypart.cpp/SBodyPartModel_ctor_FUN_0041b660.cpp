// Name: core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b660
// Address: 0041b660
// Address Range: [[0041b660, 0041b673]]
// Convention: __cdecl
// Signature: SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_0041b660(SBodyPartModel *this_ptr)

#include "nocturne.h"

SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_0041b660(SBodyPartModel *this_ptr)

{
  SBodyPartModel_ptr_24 pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&this_ptr->model);
  return ADJ(pCVar1);
}
