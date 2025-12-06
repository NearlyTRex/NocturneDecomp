// Name: core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b660
// Address: 0041b660
// Address Range: [[0041b660, 0041b673]]
// Convention: __cdecl
// Signature: SBodyPartModel * core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b660(SBodyPartModel * this_ptr)

#include "nocturne.h"

SBodyPartModel * __cdecl
core_bodypart_cpp_SBodyPartModel_ctor_FUN_0041b660(SBodyPartModel *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(this_ptr->field0_0x0 + 0x18));
  return (SBodyPartModel *)(pCVar1[-1].animation_state + 0x88);
}
