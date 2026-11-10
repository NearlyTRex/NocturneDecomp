// Name: core_dracbrid.cpp_CDraculaBride_setup_FUN_00462c90
// Address: 00462c90
// Address Range: [[00462c90, 00462f70]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_setup_FUN_00462c90(CDraculaBride *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_CDraculaBride_setup_FUN_00462c90(CDraculaBride *this_ptr)

{
  byte *str1;
  CDeformableModelInstance *pCVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  float fVar3;
  char *model_name;
  
  str1 = &(this_ptr->base).base.model.field_0x2260;
  pCVar1 = &(this_ptr->base).base.model;
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    iVar2 = _stricmp(str1,"nbride2.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(pCVar1,"nbride2x.dfm");
    }
    iVar2 = _stricmp(str1,"nbride3.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
                (&(this_ptr->base).base.model,"nbride3x.dfm");
    }
    iVar2 = _stricmp(str1,"nbride4.dfm");
    if (iVar2 != 0) goto LAB_00462d25;
    model_name = "nbride4x.dfm";
  }
  else {
    iVar2 = _stricmp(str1,"nbride2x.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(pCVar1,"nbride2.dfm");
    }
    iVar2 = _stricmp(str1,"nbride3x.dfm");
    if (iVar2 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
                (&(this_ptr->base).base.model,"nbride3.dfm");
    }
    iVar2 = _stricmp(str1,"nbride4x.dfm");
    if (iVar2 != 0) goto LAB_00462d25;
    model_name = "nbride4.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr->base).base.model,model_name);
LAB_00462d25:
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  pCVar1 = &(this_ptr->base).base.model;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar1);
  _DAT_01ba5778 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  _DAT_01ba577c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01ba5780 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01ba5784 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01ba5788 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01ba578c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_01ba5790 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01ba5794 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(pCVar1);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_01,"larm01",1);
  this_ptr->part_indices[0] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_01,"l4arm01",1);
  this_ptr->part_indices[1] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_01,"rarm01",1);
  this_ptr->part_indices[2] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_01,"r4arm01",1);
  this_ptr->part_indices[3] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_01,"lshin01",1);
  this_ptr->part_indices[4] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_01,"rshin01",1);
  this_ptr->part_indices[5] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_01,"torso01",1);
  this_ptr->part_indices[6] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_01,"waist01",1);
  this_ptr->part_indices[7] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_01,"head01",1);
  this_ptr->part_indices[8] = iVar2;
  this_ptr->attack_landed = 0;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(5.0,10.0);
  this_ptr->freaky_timer = fVar3;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,20.0);
  this_ptr->action_delay = fVar3;
  return;
}
