// Name: core_tawiscara.cpp_FUN_00593e80
// Address: 00593e80
// Address Range: [[00593e80, 00593ff2]]
// Convention: unknown
// Signature: void core_tawiscara_cpp_FUN_00593e80(CEnemy *param_1)

#include "nocturne.h"

void core_tawiscara_cpp_FUN_00593e80(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  CSkeleton *this_ptr_00;
  int iVar2;
  float fVar3;
  SMotion *pSVar4;
  
  if (*(int *)&(param_1->base).field_0x3268 == 0) {
    *(uint *)&param_1->field_0xce5c = 0x41700000;
    *(uint *)&param_1->field_0xce60 = 0x41200000;
    (param_1->base).hit_points = 100.0;
  }
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine3",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_00,"Bip01 L Finger1",1);
  *(int *)(param_1[1].base.base.actor_name + 8) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_00,"Bip01 R Finger1",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01jaw2",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar2;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  (param_1->base).base.is_transparent = *(int *)(param_1[1].base.base.actor_name + 0x18);
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
  iVar2 = *(int *)param_1[1].base.base.actor_name;
  param_1[1].base.base.orient_matrix.m[0].z = fVar3;
  if (iVar2 == 0) {
    *(uint *)&(param_1->base).field_0x3270 = 0x3fc00000;
  }
  pCVar1 = &param_1[1].base;
  (pCVar1->base).actor_name[0x1c] = '\0';
  (pCVar1->base).actor_name[0x1d] = '\0';
  (pCVar1->base).actor_name[0x1e] = '\0';
  (pCVar1->base).actor_name[0x1f] = '\0';
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,30.0);
  param_1[1].base.base.location.position.y = 0.0;
  param_1[1].base.base.location.position.z = 0.0;
  param_1[1].base.base.location.position.x = fVar3;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(param_1->base).model.base);
  if (*(int *)(pSVar4 + 0x24) == 0xd) {
    (param_1->base).health_bar_mode = HEALTH_BAR_NONE;
    return;
  }
  (param_1->base).health_bar_mode = HEALTH_BAR_ALWAYS;
  return;
}
