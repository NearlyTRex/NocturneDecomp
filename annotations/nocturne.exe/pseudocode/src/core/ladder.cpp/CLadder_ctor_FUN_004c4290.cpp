// Name: core_ladder.cpp_CLadder_ctor_FUN_004c4290
// Address: 004c4290
// Address Range: [[004c4290, 004c4335]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_004c4290(CLadder *this_ptr)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_004c4290(CLadder *this_ptr)

{
  int iVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  iVar1 = core_actor_cpp_FUN_00409d30(this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(iVar1 + 0x150));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_ladder_cpp_FUN_004c4340_0059f954;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(this_ptr_00,"null.kfm")
  ;
  this_ptr_00[1].part_visibility_flags[0] = 0x40000000;
  this_ptr_00[1].part_visibility_flags[1] = 0x41200000;
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].part_visibility_flags[3] = 0;
  this_ptr_00[1].part_visibility_flags[6] = 0;
  this_ptr_00[1].part_visibility_flags[5] = this_ptr_00[1].part_visibility_flags[6];
  this_ptr_00[1].part_visibility_flags[4] = this_ptr_00[1].part_visibility_flags[5];
  this_ptr_00[1].part_visibility_flags[9] = 0;
  this_ptr_00[1].part_visibility_flags[8] = this_ptr_00[1].part_visibility_flags[9];
  this_ptr_00[1].part_visibility_flags[7] = this_ptr_00[1].part_visibility_flags[8];
  this_ptr_00[1].part_visibility_flags[10] = 0;
  return (CLadder *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
