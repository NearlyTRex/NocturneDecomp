// Name: core_health.cpp_CHealthItem_ctor_FUN_004cda70
// Address: 004cda70
// Address Range: [[004cda70, 004cdadb]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004cda70(CHealthItem *this_ptr)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004cda70(CHealthItem *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CHealthItemVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"bullet.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 1;
  this_ptr_00[1].part_visibility_flags[1] = 0x42480000;
  this_ptr_00[-0xffffffff00000002].model_name[200] = '\0';
  this_ptr_00[-0xffffffff00000002].model_name[0xc9] = '\0';
  this_ptr_00[-0xffffffff00000002].model_name[0xca] = '\0';
  this_ptr_00[-0xffffffff00000002].model_name[0xcb] = '\0';
  this_ptr_00[1].part_visibility_flags[2] = 0x3e800000;
  return (CHealthItem *)(this_ptr_00[-2].part_visibility_flags + 0x11);
}
