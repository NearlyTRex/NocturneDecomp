// Name: core_zombie.cpp_CZombie_setup_FUN_0055ec20
// Address: 0055ec20
// Address Range: [[0055ec20, 0055ef42]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_setup_FUN_0055ec20(CEnemy *param_1)

#include "nocturne.h"

void core_zombie_cpp_CZombie_setup_FUN_0055ec20(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  CCharacter *pCVar4;
  CSkeleton *this_ptr_00;
  int iVar5;
  CDeformableModel *this_ptr_01;
  float fVar6;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.create_event + 0x18) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                    (this_ptr_00,"Bip01 L ForeArm",1);
  *(int *)(param_1[1].base.base.create_event + 0x24) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                    (this_ptr_00,"Bip01 R ForeArm",1);
  *(int *)(param_1[1].base.base.create_event + 0x28) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                    (this_ptr_00,"Bip01 L UpperArm",1);
  *(int *)(param_1[1].base.base.create_event + 0x2c) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                    (this_ptr_00,"Bip01 R UpperArm",1);
  *(int *)(param_1[1].base.base.create_event + 0x30) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Foot",1);
  *(int *)(param_1[1].base.base.create_event + 0x34) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Foot",1);
  *(int *)(param_1[1].base.base.create_event + 0x38) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Hand",1);
  *(int *)(param_1[1].base.base.create_event + 0x1c) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Hand",1);
  *(int *)(param_1[1].base.base.create_event + 0x20) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  *(int *)(param_1[1].base.base.create_event + 0x3c) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  *(int *)(param_1[1].base.base.create_event + 0x40) = iVar5;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"larm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x44) = iVar5;
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"l4arm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x48) = iVar5;
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rarm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x4c) = iVar5;
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"r4arm01",0);
  *(int *)(param_1[1].base.base.create_event + 0x50) = iVar5;
  if (iVar5 < 0) {
    pCVar4 = &param_1[1].base;
    (pCVar4->base).create_event[0x50] = '\x1d';
    (pCVar4->base).create_event[0x51] = '\0';
    (pCVar4->base).create_event[0x52] = '\0';
    (pCVar4->base).create_event[0x53] = '\0';
  }
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"waist01",0);
  *(int *)(param_1[1].base.base.create_event + 0x54) = iVar5;
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"torso01",1);
  *(int *)(param_1[1].base.base.create_event + 0x58) = iVar5;
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"head01",1);
  *(int *)(param_1[1].base.base.create_event + 0x5c) = iVar5;
  (param_1->base).model.part_data.visibility_flags[0x1d] = 0;
  iVar5 = _stricmp
                    ((param_1->base).model.model_name,"newzomb1.dfm");
  if (iVar5 == 0) {
    pcVar1 = param_1[1].base.base.create_event + 0x44;
    pcVar2 = param_1[1].base.base.create_event + 0x4c;
    uVar3 = *(uint *)pcVar1;
    *(uint *)pcVar1 = *(uint *)pcVar2;
    pcVar1 = param_1[1].base.base.create_event + 0x48;
    *(uint *)pcVar2 = uVar3;
    pcVar2 = param_1[1].base.base.create_event + 0x50;
    uVar3 = *(uint *)pcVar1;
    *(uint *)pcVar1 = *(uint *)pcVar2;
    *(uint *)pcVar2 = uVar3;
  }
  (param_1->base).carry_hands[0].bone_index = *(int *)(param_1[1].base.base.create_event + 0x1c);
  (param_1->base).carry_hands[0].secondary_bone_index =
       *(int *)(param_1[1].base.base.create_event + 0x48);
  (param_1->base).carry_hands[1].bone_index = *(int *)(param_1[1].base.base.create_event + 0x20);
  (param_1->base).carry_hands[1].secondary_bone_index =
       *(int *)(param_1[1].base.base.create_event + 0x50);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  (param_1->base).base.is_transparent =
       (uint)(*(int *)(param_1[1].base.base.create_event + 0xc) != 0);
  fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,1.0);
  iVar5 = *(int *)(param_1[1].base.base.create_event + 0x54);
  param_1[1].base.base.platform_position_delta.z = fVar6;
  if ((-1 < iVar5) && ((param_1->base).collision_cylinder_top < 0.0)) {
    (param_1->base).collision_cylinder_top =
         (param_1->base).model.bounding_box.max.y + (float)-0.75;
  }
  pcVar1 = (param_1->base).model.model_name;
  param_1[1].base.base.standing_platform = (CPlatform *)0x0;
  pCVar4 = &param_1[1].base;
  (pCVar4->base).create_event[0x14] = '\0';
  (pCVar4->base).create_event[0x15] = '\0';
  (pCVar4->base).create_event[0x16] = '\0';
  (pCVar4->base).create_event[0x17] = '\0';
  iVar5 = _stricmp(pcVar1,"newzchik.dfm");
  if (((iVar5 == 0) ||
      (iVar5 = _stricmp(pcVar1,"zombho1.dfm"), iVar5 == 0)) ||
     (iVar5 = _stricmp(pcVar1,"zombho2.dfm"), iVar5 == 0)) {
    pCVar4 = &param_1[1].base;
    (pCVar4->base).create_event[0x14] = '\x01';
    (pCVar4->base).create_event[0x15] = '\0';
    (pCVar4->base).create_event[0x16] = '\0';
    (pCVar4->base).create_event[0x17] = '\0';
  }
  param_1[1].base.base.platform_position_delta.y = 0.0;
  param_1[1].base.base.platform_position_delta.x = 0.0;
  return;
}
