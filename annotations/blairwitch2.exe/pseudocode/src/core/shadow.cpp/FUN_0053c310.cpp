// Name: core_shadow.cpp_FUN_0053c310
// Address: 0053c310
// Address Range: [[0053c310, 0053c49c]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0053c310(CEnemy *param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_0053c310(CEnemy *param_1)

{
  char *str1;
  CEnemy *pCVar1;
  int iVar2;
  CSkeleton *this_ptr;
  float fVar3;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(&(param_1->base).model);
  str1 = (param_1->base).model.model_name;
  param_1[1].base.base.orient_matrix.m[1].z = 0.0;
  pCVar1 = param_1 + 1;
  (pCVar1->base).base.create_event[0] = '\0';
  (pCVar1->base).base.create_event[1] = '\0';
  (pCVar1->base).base.create_event[2] = '\0';
  (pCVar1->base).base.create_event[3] = '\0';
  iVar2 = _stricmp(str1,"SHADOWBEAST.DFM");
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(str1,"WERE_HEADLESS.DFM"), iVar2 == 0)) {
    param_1[1].base.base.orient_matrix.m[1].z = 1.4013e-45;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       (&(param_1->base).model);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 Pelvis",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  *(int *)(param_1[1].base.base.actor_name + 0x18) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 0x1c) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 L Finger1",1);
  *(int *)(param_1[1].base.base.actor_name + 8) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 R Finger1",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar2;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  (param_1->base).base.is_transparent = 1;
  iVar2 = *(int *)param_1[1].base.base.actor_name;
  (param_1->base).base.is_renderable = 0;
  if (iVar2 == 0) {
    (param_1->base).collision_cylinder_radius = 1.5;
  }
  param_1[1].base.base.location.position.y = 0.0;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,30.0);
  param_1[1].base.base.location.area_id = 0;
  param_1[1].base.base.orient.vec.x = 0.0;
  param_1[1].base.base.location.position.z = fVar3;
  return;
}
