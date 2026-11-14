// Name: core_crate.cpp_CCrate_ctor_FUN_00445bd0
// Address: 00445bd0
// Address Range: [[00445bd0, 00445c27]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_00445bd0(CCrate *this_ptr)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_00445bd0(CCrate *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CCrateVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (this_ptr_00,"question.kfm");
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CCrate *)(this_ptr_00[-1].part_visibility_flags + 9);
}
