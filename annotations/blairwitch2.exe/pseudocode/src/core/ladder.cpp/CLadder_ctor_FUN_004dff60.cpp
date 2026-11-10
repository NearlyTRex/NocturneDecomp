// Name: core_ladder.cpp_CLadder_ctor_FUN_004dff60
// Address: 004dff60
// Address Range: [[004dff60, 004e0005]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_004dff60(CLadder *this_ptr)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_004dff60(CLadder *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CLadderVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(this_ptr_00,(char *)0x5dbd56);
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
  return (CLadder *)(this_ptr_00[-2].part_visibility_flags + 0x11);
}
