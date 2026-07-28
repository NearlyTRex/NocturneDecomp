// Name: core_tbplayer.cpp_CBassPlayer_setup_FUN_00543180
// Address: 00543180
// Address Range: [[00543180, 005431e4]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_CBassPlayer_setup_FUN_00543180(CNPC *param_1)

#include "nocturne.h"

void core_tbplayer_cpp_CBassPlayer_setup_FUN_00543180(CNPC *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_npc_cpp_CNPC_setup_FUN_004ee9e0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                       (&(param_1->base).model);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Hand",1);
  *(int *)param_1[1].base.base.actor_name = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Hand",1);
  (param_1->base).carry_hands[0].secondary_bone_index = 0;
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar1;
  (param_1->base).carry_hands[0].bone_index = *(int *)param_1[1].base.base.actor_name;
  return;
}
