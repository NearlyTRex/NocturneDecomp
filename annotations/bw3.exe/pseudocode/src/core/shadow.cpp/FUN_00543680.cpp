// Name: core_shadow.cpp_FUN_00543680
// Address: 00543680
// Address Range: [[00543680, 0054386c]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00543680(CEnemy *param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_00543680(CEnemy *param_1)

{
  char *str1;
  float fVar1;
  CCharacter *pCVar2;
  int iVar3;
  CSkeleton *this_ptr;
  float fVar4;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(&(param_1->base).model);
  str1 = (param_1->base).model.model_name;
  param_1[1].base.base.orient_matrix.m[1].z = 0.0;
  pCVar2 = &param_1[1].base;
  (pCVar2->base).create_event[4] = '\0';
  (pCVar2->base).create_event[5] = '\0';
  (pCVar2->base).create_event[6] = '\0';
  (pCVar2->base).create_event[7] = '\0';
  iVar3 = _stricmp(str1,"SHADOWBEAST.DFM");
  if ((iVar3 == 0) ||
     (iVar3 = _stricmp(str1,"WERE_HEADLESS.DFM"), iVar3 == 0)) {
    param_1[1].base.base.orient_matrix.m[1].z = 1.4013e-45;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       (&(param_1->base).model);
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr,"Bip01 Pelvis",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar3;
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr,"Bip01 Spine2",1);
  *(int *)(param_1[1].base.base.actor_name + 0x18) = iVar3;
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 0x1c) = iVar3;
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr,"Bip01 Spine2",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar3;
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr,"Bip01 L Finger1",1);
  *(int *)(param_1[1].base.base.actor_name + 8) = iVar3;
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr,"Bip01 R Finger1",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar3;
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar3;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  (param_1->base).base.is_transparent = 1;
  iVar3 = *(int *)param_1[1].base.base.actor_name;
  (param_1->base).base.is_renderable = 0;
  if (iVar3 == 0) {
    *(uint *)&(param_1->base).field_0x3270 = 0x3fc00000;
  }
  param_1[1].base.base.location.position.y = 0.0;
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,30.0);
  param_1[1].base.base.location.area_id = 0;
  param_1[1].base.base.orient.vec.x = 0.0;
  fVar1 = param_1[1].base.base.orient_matrix.m[2].x;
  param_1[1].base.base.location.position.z = fVar4;
  switch(fVar1) {
  case 0.0:
  case 1.4013e-45:
    *(uint *)&param_1->field_0xce5c = 0x41700000;
    break;
  case 2.8026e-45:
    *(uint *)&param_1->field_0xce5c = 0x41c80000;
    break;
  case 4.2039e-45:
    *(uint *)&param_1->field_0xce5c = 0x41f00000;
    *(uint *)&param_1->field_0xce60 = 0x41a00000;
    (param_1->base).hit_points = 60.0;
    return;
  default:
    goto switchD_005437f7_default;
  }
  *(uint *)&param_1->field_0xce60 = 0x41a00000;
  (param_1->base).hit_points = 40.0;
switchD_005437f7_default:
  return;
}
