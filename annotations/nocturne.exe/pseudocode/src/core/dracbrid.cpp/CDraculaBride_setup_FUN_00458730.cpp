// Name: core_dracbrid.cpp_CDraculaBride_setup_FUN_00458730
// Address: 00458730
// Address Range: [[00458730, 00458a10]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_setup_FUN_00458730(CDraculaBride *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_CDraculaBride_setup_FUN_00458730(CDraculaBride *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  float fVar3;
  char *pcVar4;
  
  pcVar4 = (this_ptr->base).base.model.model_name;
  pCVar1 = &(this_ptr->base).base.model;
  if (g_CGame_PTR_005b9354->nudity_flag == 0) {
    iVar2 = _stricmp(pcVar4,"nbride2.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar1,"nbride2x.dfm");
    }
    iVar2 = _stricmp(pcVar4,"nbride3.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
                (&(this_ptr->base).base.model,"nbride3x.dfm");
    }
    iVar2 = _stricmp(pcVar4,"nbride4.dfm");
    if (iVar2 != 0) goto LAB_004587c5;
    pcVar4 = "nbride4x.dfm";
  }
  else {
    iVar2 = _stricmp(pcVar4,"nbride2x.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar1,"nbride2.dfm");
    }
    iVar2 = _stricmp(pcVar4,"nbride3x.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
                (&(this_ptr->base).base.model,"nbride3.dfm");
    }
    iVar2 = _stricmp(pcVar4,"nbride4x.dfm");
    if (iVar2 != 0) goto LAB_004587c5;
    pcVar4 = "nbride4.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(&(this_ptr->base).base.model,pcVar4);
LAB_004587c5:
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  pCVar1 = &(this_ptr->base).base.model;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar1);
  _DAT_01b4d260 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Head",1);
  _DAT_01b4d264 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01b4d268 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01b4d26c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01b4d270 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01b4d274 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  _DAT_01b4d278 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01b4d27c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(pCVar1);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"larm01",1);
  this_ptr->part_indices[0] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"l4arm01",1);
  this_ptr->part_indices[1] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rarm01",1);
  this_ptr->part_indices[2] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"r4arm01",1);
  this_ptr->part_indices[3] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"lshin01",1);
  this_ptr->part_indices[4] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"rshin01",1);
  this_ptr->part_indices[5] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"torso01",1);
  this_ptr->part_indices[6] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"waist01",1);
  this_ptr->part_indices[7] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_01,"head01",1);
  this_ptr->part_indices[8] = iVar2;
  this_ptr->attack_landed = 0;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(5.0,10.0);
  this_ptr->freaky_timer = fVar3;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(2.0,20.0);
  this_ptr->action_delay = fVar3;
  return;
}
