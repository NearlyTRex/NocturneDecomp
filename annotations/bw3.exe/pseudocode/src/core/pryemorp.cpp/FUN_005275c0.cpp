// Name: core_pryemorp.cpp_FUN_005275c0
// Address: 005275c0
// Address Range: [[005275c0, 0052777c]]
// Convention: unknown
// Signature: void core_pryemorp_cpp_FUN_005275c0(int param_1)

#include "nocturne.h"

void core_pryemorp_cpp_FUN_005275c0(int param_1)

{
  CDeformableModelInstance *this_ptr;
  CMorph *this_ptr_00;
  char cVar1;
  char *pcVar2;
  CMotionList *this_ptr_01;
  char *pcVar3;
  int iVar4;
  
  core_npc_cpp_FUN_00509020(param_1);
  pcVar2 = (char *)core_actor_cpp_createActorByName_FUN_0040c4f0(param_1 + 0x2076c);
  pcVar3 = (char *)(param_1 + 0x2074c);
  *(char **)(param_1 + 0x20810) = pcVar2;
  do {
    cVar1 = *pcVar3;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  iVar4 = *(int *)(param_1 + 0x20810);
  *(uint *)(iVar4 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar4 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0x20810);
  if ((uint *)(iVar4 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar4 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar4 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar4 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  core_skeleton_cpp_FUN_0054eae0(*(int *)(param_1 + 0x20810) + 0x158,param_1 + 0x2072c);
  *(uint *)(*(int *)(param_1 + 0x20810) + 0x27b8) = *(uint *)(param_1 + 0x21444);
  (*(code *)**(uint **)(*(int *)(param_1 + 0x20810) + 0x154))(*(int *)(param_1 + 0x20810));
  iVar4 = 1;
  pcVar3 = (char *)(param_1 + 0x2078c);
  this_ptr_01 = core_motion_cpp_FUN_004fc310
                          ((CMotionController *)(*(int *)(param_1 + 0x20810) + 0x158));
  iVar4 = core_motion_cpp_FUN_004fb9c0(this_ptr_01,pcVar3,iVar4);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
            ((CMotionController *)(*(int *)(param_1 + 0x20810) + 0x158),iVar4,0.0);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
            ((CDeformableModelInstance *)(*(int *)(param_1 + 0x20810) + 0x158));
  core_skeleton_cpp_FUN_0054dd10((CDeformableModelInstance *)(*(int *)(param_1 + 0x20810) + 0x158));
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x158);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(this_ptr);
  core_skeleton_cpp_FUN_0054dd10(this_ptr);
  core_skeleton_cpp_FUN_0054e6b0(this_ptr);
  this_ptr_00 = (CMorph *)(param_1 + 0x20814);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(this_ptr_00,0,this_ptr);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            (this_ptr_00,1,(CDeformableModelInstance *)(*(int *)(param_1 + 0x20810) + 0x158));
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10
            (this_ptr_00,0,*(CKeyFramedModel **)(param_1 + 0x309c),0);
  core_morph_cpp_CMorph_getReady_FUN_004fac10(this_ptr_00);
  *(uint *)(param_1 + 0x21440) = 0;
  core_skeleton_cpp_FUN_0054c110(this_ptr);
  core_skeleton_cpp_FUN_0054c110((CDeformableModelInstance *)(*(int *)(param_1 + 0x20810) + 0x158));
  return;
}
