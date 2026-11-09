// Name: core_health.cpp_CHealthItem_ctor_FUN_004cda70
// Address: 004cda70
// Address Range: [[004cda70, 004cdadb]]
// Convention: unknown
// Signature: CHealthItem * core_health_cpp_CHealthItem_ctor_FUN_004cda70(CHealthItem *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHealthItem * core_health_cpp_CHealthItem_ctor_FUN_004cda70(CHealthItem *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CHealthItemVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"bullet.kfm");
  *(uint *)(this_ptr_00 + 1) = 1;
  *(uint *)&this_ptr_00[1].field_0x4 = 0x42480000;
  *(uint *)&this_ptr_00[-2].field_0x140 = 0;
  *(uint *)&this_ptr_00[1].field_0x8 = 0x3e800000;
  return (CHealthItem *)&this_ptr_00[-2].field_0x44;
}
