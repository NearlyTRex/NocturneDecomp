// Name: core_health.cpp_CHealthItem_ctor_FUN_004d1d80
// Address: 004d1d80
// Address Range: [[004d1d80, 004d1deb]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004d1d80(CHealthItem *this_ptr)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004d1d80(CHealthItem *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CHealthItemVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (this_ptr_00,"health_lg.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 1;
  this_ptr_00[1].part_visibility_flags[1] = 0x42480000;
  this_ptr_00[1].part_visibility_flags[3] = 0;
  this_ptr_00[1].part_visibility_flags[2] = 0;
  return (CHealthItem *)(this_ptr_00[-1].part_visibility_flags + 9);
}
