// Name: core_health.cpp_FUN_004f1dd0
// Address: 004f1dd0
// Address Range: [[004f1dd0, 004f1e27]]
// Convention: __cdecl
// Signature: CHealthItem * core_health.cpp_FUN_004f1dd0(CHealthItem * this_ptr)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_FUN_004f1dd0(CHealthItem *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_health_cpp_FUN_0065f5a4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"bullet.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 1;
  this_ptr_00[1].part_visibility_flags[1] = 0x42480000;
  return (CHealthItem *)(this_ptr_00[-1].part_visibility_flags + 9);
}
