// Name: core_pryemorp.cpp_CPryeMorph_setup_FUN_005275c0
// Address: 005275c0
// Address Range: [[005275c0, 0052777c]]
// Convention: __cdecl
// Signature: void __cdecl core_pryemorp_cpp_CPryeMorph_setup_FUN_005275c0(CPryeMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_pryemorp_cpp_CPryeMorph_setup_FUN_005275c0(CPryeMorph *this_ptr)

{
  byte *this_ptr_00;
  byte *this_ptr_01;
  char cVar1;
  char *pcVar2;
  CMotionList *this_ptr_02;
  char *pcVar3;
  int iVar4;
  
  core_npc_cpp_CNPC_setup_FUN_00509020((CNPC *)this_ptr);
  pcVar2 = (char *)core_actor_cpp_createActorByName_FUN_0040c4f0(&this_ptr->field_0x2076c);
  pcVar3 = &this_ptr->field_0x2074c;
  *(char **)&this_ptr->field_0x20810 = pcVar2;
  do {
    cVar1 = *pcVar3;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  iVar4 = *(int *)&this_ptr->field_0x20810;
  *(uint *)(iVar4 + 0x20) = *(uint *)&this_ptr->field_0x20;
  *(uint *)(iVar4 + 0x24) = *(uint *)&this_ptr->field_0x24;
  *(uint *)(iVar4 + 0x28) = *(uint *)&this_ptr->field_0x28;
  *(uint *)(iVar4 + 0x2c) = *(uint *)&this_ptr->field_0x2c;
  iVar4 = *(int *)&this_ptr->field_0x20810;
  if ((uint *)(iVar4 + 0x30) != (uint *)&this_ptr->field_0x30) {
    *(uint *)(iVar4 + 0x30) = *(uint *)&this_ptr->field_0x30;
    *(uint *)(iVar4 + 0x34) = *(uint *)&this_ptr->field_0x34;
    *(uint *)(iVar4 + 0x38) = *(uint *)&this_ptr->field_0x38;
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(*(int *)&this_ptr->field_0x20810 + 0x158),
             &this_ptr->field_0x2072c);
  *(uint *)(*(int *)&this_ptr->field_0x20810 + 0x27b8) =
       *(uint *)&this_ptr->field_0x21444;
  (*(code *)**(uint **)(*(int *)&this_ptr->field_0x20810 + 0x154))
            (*(int *)&this_ptr->field_0x20810);
  iVar4 = 1;
  pcVar3 = &this_ptr->field_0x2078c;
  this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                          ((CMotionController *)(*(int *)&this_ptr->field_0x20810 + 0x158));
  iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(this_ptr_02,pcVar3,iVar4);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
            ((CMotionController *)(*(int *)&this_ptr->field_0x20810 + 0x158),iVar4,0.0);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
            ((CDeformableModelInstance *)(*(int *)&this_ptr->field_0x20810 + 0x158));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
            ((CDeformableModelInstance *)(*(int *)&this_ptr->field_0x20810 + 0x158));
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)this_ptr_00);
  this_ptr_01 = &this_ptr->field_0x20814;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            ((CMorph *)this_ptr_01,0,(CDeformableModelInstance *)this_ptr_00);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            ((CMorph *)this_ptr_01,1,
             (CDeformableModelInstance *)(*(int *)&this_ptr->field_0x20810 + 0x158));
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10
            ((CMorph *)this_ptr_01,0,*(CKeyFramedModel **)&this_ptr->field_0x309c,0);
  core_morph_cpp_CMorph_getReady_FUN_004fac10((CMorph *)this_ptr_01);
  *(uint *)&this_ptr->field_0x21440 = 0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
            ((CDeformableModelInstance *)(*(int *)&this_ptr->field_0x20810 + 0x158));
  return;
}
