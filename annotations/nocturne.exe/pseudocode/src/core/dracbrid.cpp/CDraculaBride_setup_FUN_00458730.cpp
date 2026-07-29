// Name: core_dracbrid.cpp_CDraculaBride_setup_FUN_00458730
// Address: 00458730
// Address Range: [[00458730, 00458a10]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_CDraculaBride_setup_FUN_00458730(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_CDraculaBride_setup_FUN_00458730(CEnemy *param_1)

{
  CDeformableModelInstance *pCVar1;
  CCharacter *pCVar2;
  int iVar3;
  CSkeleton *this_ptr;
  CDeformableModel *this_ptr_00;
  float fVar4;
  char *pcVar5;
  
  pcVar5 = (param_1->base).model.model_name;
  pCVar1 = &(param_1->base).model;
  if (*(int *)(0x01C775EC + 0x18) == 0) {
    iVar3 = _stricmp(pcVar5,"nbride2.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar1,"nbride2x.dfm");
    }
    iVar3 = _stricmp(pcVar5,"nbride3.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
                (&(param_1->base).model,"nbride3x.dfm");
    }
    iVar3 = _stricmp(pcVar5,"nbride4.dfm");
    if (iVar3 != 0) goto LAB_004587c5;
    pcVar5 = "nbride4x.dfm";
  }
  else {
    iVar3 = _stricmp(pcVar5,"nbride2x.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar1,"nbride2.dfm");
    }
    iVar3 = _stricmp(pcVar5,"nbride3x.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
                (&(param_1->base).model,"nbride3.dfm");
    }
    iVar3 = _stricmp(pcVar5,"nbride4x.dfm");
    if (iVar3 != 0) goto LAB_004587c5;
    pcVar5 = "nbride4.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(&(param_1->base).model,pcVar5);
LAB_004587c5:
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  pCVar1 = &(param_1->base).model;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar1);
  _DAT_01b4d260 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Head",1);
  _DAT_01b4d264 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Hand",1);
  _DAT_01b4d268 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Hand",1);
  _DAT_01b4d26c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01b4d270 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01b4d274 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine",1);
  _DAT_01b4d278 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine1",1);
  _DAT_01b4d27c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine2",1);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(pCVar1);
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_00,"larm01",1);
  *(int *)param_1[1].base.base.actor_name = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_00,"l4arm01",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_00,"rarm01",1);
  *(int *)(param_1[1].base.base.actor_name + 8) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_00,"r4arm01",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_00,"lshin01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_00,"rshin01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_00,"torso01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x18) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_00,"waist01",1);
  *(int *)(param_1[1].base.base.actor_name + 0x1c) = iVar3;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                           (this_ptr_00,"head01",1);
  param_1[1].base.base.location.position.x = fVar4;
  pCVar2 = &param_1[1].base;
  (pCVar2->base).create_event[0x30] = '\0';
  (pCVar2->base).create_event[0x31] = '\0';
  (pCVar2->base).create_event[0x32] = '\0';
  (pCVar2->base).create_event[0x33] = '\0';
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(5.0,10.0);
  *(float *)(param_1[1].base.base.create_event + 0x1c) = fVar4;
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(2.0,20.0);
  *(float *)(param_1[1].base.base.create_event + 0x20) = fVar4;
  return;
}
