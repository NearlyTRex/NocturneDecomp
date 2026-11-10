// Name: core_spirindi.cpp_CSpiritIndian_setup_FUN_0059a060
// Address: 0059a060
// Address Range: [[0059a060, 0059a2a3]]
// Convention: __cdecl
// Signature: void __cdecl core_spirindi_cpp_CSpiritIndian_setup_FUN_0059a060(CSpiritIndian *this_ptr)

#include "nocturne.h"

void __cdecl core_spirindi_cpp_CSpiritIndian_setup_FUN_0059a060(CSpiritIndian *this_ptr)

{
  byte *this_ptr_00;
  byte *this_ptr_01;
  char cVar1;
  int iVar2;
  CMotionList *this_ptr_02;
  char *pcVar3;
  char *pcVar4;
  
  core_npc_cpp_CNPC_setup_FUN_00509020((CNPC *)this_ptr);
  if (*(int *)&this_ptr->field_0x27a8 != 0) {
    *(uint *)&this_ptr->field_0xfc = 1;
  }
  iVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0("CPryeMorph");
  *(int *)&this_ptr->field_0x34170 = iVar2;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(iVar2 + 0x158),"bwp3_prye_morph.dfm");
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)(*(int *)&this_ptr->field_0x34170 + 0x158));
  core_cloth_cpp_CClothList_load_FUN_0043f920((CClothList *)&this_ptr->field_0x33fa4);
  core_cloth_cpp_CClothList_setup_FUN_0043fbc0
            ((CClothList *)&this_ptr->field_0x33fa4,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,
             (CDeformableModelInstance *)(*(int *)&this_ptr->field_0x34170 + 0x158));
  core_cloth_cpp_CClothList_process_FUN_0043fc00
            ((CClothList *)&this_ptr->field_0x2f08,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,0.05,*(float *)&this_ptr->field_0x2504,
             (CDeformableModelInstance *)(*(int *)&this_ptr->field_0x34170 + 0x158));
  if (*(int *)&this_ptr->field_0x27a8 != 0) {
    *(uint *)&this_ptr->field_0xfc = 1;
  }
  pcVar3 = "prye_morph";
  pcVar4 = *(char **)&this_ptr->field_0x34170;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar2 = *(int *)&this_ptr->field_0x34170;
  *(uint *)(iVar2 + 0x20) = *(uint *)&this_ptr->field_0x20;
  *(uint *)(iVar2 + 0x24) = *(uint *)&this_ptr->field_0x24;
  *(uint *)(iVar2 + 0x28) = *(uint *)&this_ptr->field_0x28;
  *(uint *)(iVar2 + 0x2c) = *(uint *)&this_ptr->field_0x2c;
  iVar2 = *(int *)&this_ptr->field_0x34170;
  if ((uint *)(iVar2 + 0x30) != (uint *)&this_ptr->field_0x30) {
    *(uint *)(iVar2 + 0x30) = *(uint *)&this_ptr->field_0x30;
    *(uint *)(iVar2 + 0x34) = *(uint *)&this_ptr->field_0x34;
    *(uint *)(iVar2 + 0x38) = *(uint *)&this_ptr->field_0x38;
  }
  *(uint *)(*(int *)&this_ptr->field_0x34170 + 0x27b8) = 0x3f800000;
  (*(code *)**(uint **)(*(int *)&this_ptr->field_0x34170 + 0x154))
            (*(int *)&this_ptr->field_0x34170);
  iVar2 = 1;
  pcVar4 = "stand";
  this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                          ((CMotionController *)(*(int *)&this_ptr->field_0x34170 + 0x158));
  iVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(this_ptr_02,pcVar4,iVar2);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
            ((CMotionController *)(*(int *)&this_ptr->field_0x34170 + 0x158),iVar2,0.0);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
            ((CDeformableModelInstance *)(*(int *)&this_ptr->field_0x34170 + 0x158));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
            ((CDeformableModelInstance *)(*(int *)&this_ptr->field_0x34170 + 0x158));
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)this_ptr_00);
  this_ptr_01 = &this_ptr->field_0x34174;
  core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10
            ((CMorph *)this_ptr_01,1,*(CKeyFramedModel **)&this_ptr->field_0x34138,0);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            ((CMorph *)this_ptr_01,0,(CDeformableModelInstance *)this_ptr_00);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            ((CMorph *)this_ptr_01,1,
             (CDeformableModelInstance *)(*(int *)&this_ptr->field_0x34170 + 0x158));
  core_morph_cpp_CMorph_getReady_FUN_004fac10((CMorph *)this_ptr_01);
  *(uint *)&this_ptr->field_0x34da0 = 0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
            ((CDeformableModelInstance *)(*(int *)&this_ptr->field_0x34170 + 0x158));
  return;
}
