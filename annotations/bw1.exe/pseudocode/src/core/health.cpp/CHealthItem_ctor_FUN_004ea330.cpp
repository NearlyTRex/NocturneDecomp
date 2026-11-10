// Name: core_health.cpp_CHealthItem_ctor_FUN_004ea330
// Address: 004ea330
// Address Range: [[004ea330, 004ea387]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004ea330(CHealthItem *this_ptr)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004ea330(CHealthItem *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CHealthItemVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (this_ptr_00,"bullet.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 1;
  this_ptr_00[1].part_visibility_flags[1] = 0x42480000;
  return (CHealthItem *)(this_ptr_00[-1].part_visibility_flags + 9);
}
