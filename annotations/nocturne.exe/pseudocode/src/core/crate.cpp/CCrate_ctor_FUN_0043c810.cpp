// Name: core_crate.cpp_CCrate_ctor_FUN_0043c810
// Address: 0043c810
// Address Range: [[0043c810, 0043c867]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_0043c810(CCrate *this_ptr)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_0043c810(CCrate *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CCrateVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"question.kfm");
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].part_visibility_flags[0] = 0;
  return (CCrate *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
