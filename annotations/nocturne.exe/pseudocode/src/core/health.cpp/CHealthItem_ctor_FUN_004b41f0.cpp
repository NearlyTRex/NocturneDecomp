// Name: core_health.cpp_CHealthItem_ctor_FUN_004b41f0
// Address: 004b41f0
// Address Range: [[004b41f0, 004b4247]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004b41f0(CHealthItem *this_ptr)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004b41f0(CHealthItem *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CHealthItemVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"bullet.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 1;
  this_ptr_00[1].part_visibility_flags[1] = 0x42480000;
  return (CHealthItem *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
