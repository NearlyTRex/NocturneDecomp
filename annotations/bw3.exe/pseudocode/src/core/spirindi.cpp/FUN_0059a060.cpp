// Name: core_spirindi.cpp_FUN_0059a060
// Address: 0059a060
// Address Range: [[0059a060, 0059a2a3]]
// Convention: unknown
// Signature: void core_spirindi_cpp_FUN_0059a060(int param_1)

#include "nocturne.h"

void core_spirindi_cpp_FUN_0059a060(int param_1)

{
  CDeformableModelInstance *this_ptr;
  CMorph *this_ptr_00;
  char cVar1;
  int iVar2;
  CMotionList *this_ptr_01;
  char *pcVar3;
  char *pcVar4;
  
  core_npc_cpp_FUN_00509020(param_1);
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  iVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0("CPryeMorph");
  *(int *)(param_1 + 0x34170) = iVar2;
  core_skeleton_cpp_FUN_0054eae0(iVar2 + 0x158,"bwp3_prye_morph.dfm");
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)(*(int *)(param_1 + 0x34170) + 0x158));
  core_cloth_cpp_CClothList_load_FUN_0043f920((CClothList *)(param_1 + 0x33fa4));
  core_cloth_cpp_CClothList_setup_FUN_0043fbc0
            ((CClothList *)(param_1 + 0x33fa4),(CVector3f *)(param_1 + 0x20),
             (CVector3f *)(param_1 + 0x30),
             (CDeformableModelInstance *)(*(int *)(param_1 + 0x34170) + 0x158));
  core_cloth_cpp_CClothList_process_FUN_0043fc00
            ((CClothList *)(param_1 + 0x2f08),(CVector3f *)(param_1 + 0x20),
             (CVector3f *)(param_1 + 0x30),0.05,*(float *)(param_1 + 0x2504),
             (CDeformableModelInstance *)(*(int *)(param_1 + 0x34170) + 0x158));
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  pcVar3 = "prye_morph";
  pcVar4 = *(char **)(param_1 + 0x34170);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar2 = *(int *)(param_1 + 0x34170);
  *(uint *)(iVar2 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar2 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar2 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar2 + 0x2c) = *(uint *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x34170);
  if ((uint *)(iVar2 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar2 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar2 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar2 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  *(uint *)(*(int *)(param_1 + 0x34170) + 0x27b8) = 0x3f800000;
  (*(code *)**(uint **)(*(int *)(param_1 + 0x34170) + 0x154))(*(int *)(param_1 + 0x34170));
  iVar2 = 1;
  pcVar4 = "stand";
  this_ptr_01 = core_motion_cpp_FUN_004fc310
                          ((CMotionController *)(*(int *)(param_1 + 0x34170) + 0x158));
  iVar2 = core_motion_cpp_FUN_004fb9c0(this_ptr_01,pcVar4,iVar2);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
            ((CMotionController *)(*(int *)(param_1 + 0x34170) + 0x158),iVar2,0.0);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
            ((CDeformableModelInstance *)(*(int *)(param_1 + 0x34170) + 0x158));
  core_skeleton_cpp_FUN_0054dd10((CDeformableModelInstance *)(*(int *)(param_1 + 0x34170) + 0x158));
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x158);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(this_ptr);
  core_skeleton_cpp_FUN_0054dd10(this_ptr);
  core_skeleton_cpp_FUN_0054e6b0(this_ptr);
  this_ptr_00 = (CMorph *)(param_1 + 0x34174);
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10
            (this_ptr_00,1,*(CKeyFramedModel **)(param_1 + 0x34138),0);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(this_ptr_00,0,this_ptr);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            (this_ptr_00,1,(CDeformableModelInstance *)(*(int *)(param_1 + 0x34170) + 0x158));
  core_morph_cpp_CMorph_getReady_FUN_004fac10(this_ptr_00);
  *(uint *)(param_1 + 0x34da0) = 0;
  core_skeleton_cpp_FUN_0054c110(this_ptr);
  core_skeleton_cpp_FUN_0054c110((CDeformableModelInstance *)(*(int *)(param_1 + 0x34170) + 0x158));
  return;
}
