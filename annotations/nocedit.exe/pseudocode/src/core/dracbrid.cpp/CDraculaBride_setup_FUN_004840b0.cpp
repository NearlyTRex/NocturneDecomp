// Name: core_dracbrid.cpp_CDraculaBride_setup_FUN_004840b0
// Address: 004840b0
// Address Range: [[004840b0, 004842f2] [00484329, 00484390]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_setup_FUN_004840b0(CDraculaBride *this_ptr)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_setup_FUN_004840b0(CDraculaBride *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  float fVar3;
  char *pcVar4;
  
  pcVar4 = (this_ptr->base).base.model.model_name;
  pCVar1 = &(this_ptr->base).base.model;
  if (g_CGamePtr->nudity_flag == 0) {
    iVar2 = stricmp(pcVar4,"nbride2.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"nbride2x.dfm");
    }
    iVar2 = stricmp(pcVar4,"nbride3.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                (&(this_ptr->base).base.model,"nbride3x.dfm");
    }
    iVar2 = stricmp(pcVar4,"nbride4.dfm");
    if (iVar2 != 0) goto LAB_00484145;
    pcVar4 = "nbride4x.dfm";
  }
  else {
    iVar2 = stricmp(pcVar4,"nbride2x.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"nbride2.dfm");
    }
    iVar2 = stricmp(pcVar4,"nbride3x.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                (&(this_ptr->base).base.model,"nbride3.dfm");
    }
    iVar2 = stricmp(pcVar4,"nbride4x.dfm");
    if (iVar2 != 0) goto LAB_00484145;
    pcVar4 = "nbride4.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(&(this_ptr->base).base.model,pcVar4);
LAB_00484145:
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  pCVar1 = &(this_ptr->base).base.model;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  INT_02c6d0a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  INT_02c6d0a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  INT_02c6d0a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  INT_02c6d0ac = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_02c6d0b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_02c6d0b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  INT_02c6d0b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine1");
  INT_02c6d0bc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(pCVar1);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"larm01",1);
  *(int *)(this_ptr->unk1 + 8) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"l4arm01",1);
  *(int *)(this_ptr->unk1 + 0xc) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rarm01",1);
  *(int *)(this_ptr->unk1 + 0x10) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"r4arm01",1);
  *(int *)(this_ptr->unk1 + 0x14) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lshin01",1);
  *(int *)(this_ptr->unk1 + 0x18) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rshin01",1);
  *(int *)(this_ptr->unk1 + 0x1c) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"torso01",1);
  *(int *)(this_ptr->unk1 + 0x20) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"waist01",1);
  *(int *)(this_ptr->unk1 + 0x24) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"head01",1);
  *(int *)(this_ptr->unk1 + 0x28) = iVar2;
  this_ptr->unk3[0] = '\0';
  this_ptr->unk3[1] = '\0';
  this_ptr->unk3[2] = '\0';
  this_ptr->unk3[3] = '\0';
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
  *(float *)this_ptr->unk2 = fVar3;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
  *(float *)(this_ptr->unk2 + 4) = fVar3;
  return;
}
