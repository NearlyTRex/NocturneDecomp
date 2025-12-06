// Name: core_crate.cpp_FUN_004484d0
// Address: 004484d0
// Address Range: [[004484d0, 00448527]]
// Convention: __cdecl
// Signature: CCrate * core_crate.cpp_FUN_004484d0(CCrate * this_ptr)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_FUN_004484d0(CCrate *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_crate_cpp_FUN_0065c264;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"question.kfm");
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CCrate *)(this_ptr_00[-1].part_visibility_flags + 9);
}
