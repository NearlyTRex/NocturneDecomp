// Name: core_werewolf.cpp_CWerewolf_setup_FUN_00555b40
// Address: 00555b40
// Address Range: [[00555b40, 00555c5a]]
// Convention: unknown
// Signature: void core_werewolf_cpp_CWerewolf_setup_FUN_00555b40(CEnemy *param_1)

#include "nocturne.h"

void core_werewolf_cpp_CWerewolf_setup_FUN_00555b40(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  CSkeleton *this_ptr_00;
  int iVar2;
  float fVar3;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine3",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                    (this_ptr_00,"Bip01 L Finger1",1);
  *(int *)(param_1[1].base.base.actor_name + 8) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                    (this_ptr_00,"Bip01 R Finger1",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01jaw2",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar2;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  (param_1->base).base.is_transparent = *(int *)(param_1[1].base.base.actor_name + 0x18);
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,1.0);
  iVar2 = *(int *)param_1[1].base.base.actor_name;
  param_1[1].base.base.orient_matrix.m[0].z = fVar3;
  if (iVar2 == 0) {
    (param_1->base).collision_cylinder_radius = 1.5;
  }
  pCVar1 = &param_1[1].base;
  (pCVar1->base).actor_name[0x1c] = '\0';
  (pCVar1->base).actor_name[0x1d] = '\0';
  (pCVar1->base).actor_name[0x1e] = '\0';
  (pCVar1->base).actor_name[0x1f] = '\0';
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,30.0);
  param_1[1].base.base.location.position.y = 0.0;
  param_1[1].base.base.location.position.z = 0.0;
  param_1[1].base.base.location.position.x = fVar3;
  return;
}
