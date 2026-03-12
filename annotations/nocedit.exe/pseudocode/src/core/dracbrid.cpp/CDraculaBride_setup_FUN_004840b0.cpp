// Name: core_dracbrid.cpp_CDraculaBride_setup_FUN_004840b0
// Address: 004840b0
// Address Range: [[004840b0, 004842f2] [00484329, 00484390]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_setup_FUN_004840b0(CDraculaBride *this_ptr)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_setup_FUN_004840b0(CDraculaBride *this_ptr)

{
  char *str1;
  CDeformableModelInstance *this_ptr_02;
  int iVar2;
  int iVar1;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  float fVar3;
  float fVar2;
  CDeformableModelInstance *pCVar1;
  char *pcVar4;
  
  str1 = (this_ptr->base).base.model.model_name;
  pCVar1 = &(this_ptr->base).base.model;
  if (g_CGamePtr->nudity_flag == 0) {
    iVar1 = _stricmp(str1,"nbride2.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"nbride2x.dfm");
    }
    iVar1 = _stricmp(str1,"nbride3.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                (&(this_ptr->base).base.model,"nbride3x.dfm");
    }
    iVar1 = _stricmp(str1,"nbride4.dfm");
    if (iVar1 != 0) goto LAB_00484145;
    pcVar4 = "nbride4x.dfm";
  }
  else {
    iVar2 = _stricmp(str1,"nbride2x.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"nbride2.dfm");
    }
    iVar1 = _stricmp(str1,"nbride3x.dfm");
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                (&(this_ptr->base).base.model,"nbride3.dfm");
    }
    iVar1 = _stricmp(str1,"nbride4x.dfm");
    if (iVar1 != 0) goto LAB_00484145;
    pcVar4 = "nbride4.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(&(this_ptr->base).base.model,pcVar4);
LAB_00484145:
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr_02 = &(this_ptr->base).base.model;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_02);
  INT_02c6d0a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head",1);
  INT_02c6d0a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand",1);
  INT_02c6d0a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand",1);
  INT_02c6d0ac = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm",1);
  INT_02c6d0b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm",1);
  INT_02c6d0b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine",1);
  INT_02c6d0b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine1",1);
  INT_02c6d0bc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_02);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"larm01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"l4arm01",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rarm01",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"r4arm01",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lshin01",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rshin01",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"torso01",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"waist01",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"head01",1);
  this_ptr->part_indices[8] = iVar1;
  this_ptr->attack_landed = 0;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
  this_ptr->freaky_timer = fVar3;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
  this_ptr->action_delay = fVar2;
  return;
}
