// Name: core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0
// Address: 004840b0
// Address Range: [[004840b0, 004842f2] [00484329, 00484390]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0()

#include "nocturne.h"

void core_dracbrid_cpp_DraculaBrideModels_FUN_004840b0(void)

{
  CDeformableModelInstance *pCVar1;
  CCharacter *pCVar2;
  int iVar3;
  CSkeleton *this_ptr;
  CDeformableModel *this_ptr_00;
  float fVar4;
  CEnemy *in_stack_00000004;
  char *pcVar5;
  
  pcVar5 = (in_stack_00000004->base).model.model_name;
  pCVar1 = &(in_stack_00000004->base).model;
  if (g_CGamePtr->nudity_flag == 0) {
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,"nbride2.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"nbride2x.dfm");
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,"nbride3.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                (&(in_stack_00000004->base).model,"nbride3x.dfm");
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,"nbride4.dfm");
    if (iVar3 != 0) goto LAB_00484145;
    pcVar5 = "nbride4x.dfm";
  }
  else {
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,"nbride2x.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"nbride2.dfm");
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,"nbride3x.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                (&(in_stack_00000004->base).model,"nbride3.dfm");
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,"nbride4x.dfm");
    if (iVar3 != 0) goto LAB_00484145;
    pcVar5 = "nbride4.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(in_stack_00000004->base).model,pcVar5);
LAB_00484145:
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  pCVar1 = &(in_stack_00000004->base).model;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  INT_02c6d0a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Head");
  INT_02c6d0a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Hand")
  ;
  INT_02c6d0a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Hand")
  ;
  INT_02c6d0ac = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L UpperArm");
  INT_02c6d0b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R UpperArm");
  INT_02c6d0b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine");
  INT_02c6d0b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine1")
  ;
  INT_02c6d0bc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine2")
  ;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(pCVar1);
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"larm01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 8) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"l4arm01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0xc) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"rarm01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x10) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"r4arm01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"lshin01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x18) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"rshin01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x1c) = iVar3;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_00,"torso01",1);
  in_stack_00000004[1].base.base.location.position.x = fVar4;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_00,"waist01",1);
  in_stack_00000004[1].base.base.location.position.y = fVar4;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_00,"head01",1);
  in_stack_00000004[1].base.base.location.position.z = fVar4;
  pCVar2 = &in_stack_00000004[1].base;
  (pCVar2->base).create_event[0x38] = '\0';
  (pCVar2->base).create_event[0x39] = '\0';
  (pCVar2->base).create_event[0x3a] = '\0';
  (pCVar2->base).create_event[0x3b] = '\0';
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
  *(float *)(in_stack_00000004[1].base.base.create_event + 0x24) = fVar4;
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
  *(float *)(in_stack_00000004[1].base.base.create_event + 0x28) = fVar4;
  return;
}
