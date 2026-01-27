// Name: core_ladder.cpp_CLadder_ctor_FUN_00502540
// Address: 00502540
// Address Range: [[00502540, 005025e5]]
// Convention: __cdecl
// Signature: CLadder * core_ladder.cpp_CLadder_ctor_FUN_00502540(CLadder * this_ptr)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_00502540(CLadder *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CLadderVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"null.kfm")
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
  return (CLadder *)(this_ptr_00[-1].part_visibility_flags + 9);
}
