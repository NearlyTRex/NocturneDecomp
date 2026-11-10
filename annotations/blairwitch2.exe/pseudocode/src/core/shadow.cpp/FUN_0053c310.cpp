// Name: core_shadow.cpp_FUN_0053c310
// Address: 0053c310
// Address Range: [[0053c310, 0053c49c]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0053c310(CEnemy *param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_0053c310(CEnemy *param_1)

{
  byte *str1;
  int iVar1;
  CSkeleton *this_ptr;
  float fVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(&(param_1->base).model);
  str1 = &(param_1->base).model.field_0x2260;
  param_1[1].base.base.orient_matrix.m[1].z = 0.0;
  *(uint *)&param_1[1].base.base.field_0x78 = 0;
  iVar1 = _stricmp(str1,"SHADOWBEAST.DFM");
  if ((iVar1 == 0) ||
     (iVar1 = _stricmp(str1,"WERE_HEADLESS.DFM"), iVar1 == 0)) {
    param_1[1].base.base.orient_matrix.m[1].z = 1.4013e-45;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       (&(param_1->base).model);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 Pelvis",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  *(int *)(param_1[1].base.base.actor_name + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 0x1c) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 L Finger1",1);
  *(int *)(param_1[1].base.base.actor_name + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 R Finger1",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  *(uint *)&(param_1->base).base.field_0xfc = 1;
  iVar1 = *(int *)param_1[1].base.base.actor_name;
  *(uint *)&(param_1->base).base.field_0xf8 = 0;
  if (iVar1 == 0) {
    *(uint *)&(param_1->base).field_0x3434 = 0x3fc00000;
  }
  *(uint *)&param_1[1].base.base.field_0x24 = 0;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,30.0);
  *(uint *)&param_1[1].base.base.field_0x2c = 0;
  param_1[1].base.base.orient.vec.x = 0.0;
  *(float *)&param_1[1].base.base.field_0x28 = fVar2;
  return;
}
