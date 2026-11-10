// Name: core_doc.cpp_CDoc_setup_FUN_00469060
// Address: 00469060
// Address Range: [[00469060, 004693a4]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_setup_FUN_00469060(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_setup_FUN_00469060(CDoc *this_ptr)

{
  byte *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
  byte bVar2;
  uint auStackY_1028 [1015];
  char *pcVar3;
  int iVar4;
  uint uStack_40;
  uint uStack_34;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar2 = 0;
  core_hero_cpp_CHero_setup_FUN_004eaa10((CHero *)this_ptr);
  this_ptr_00 = &this_ptr->field_0x158;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)this_ptr_00);
  _DAT_01b68814 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 head",1);
  _DAT_01b68818 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_01b6881c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_01b68820 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01b68824 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01b68828 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01b6882c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01b68830 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01b68834 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01b68838 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_01b6883c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_01b68840 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Calf",1);
  _DAT_01b68844 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Calf",1);
  _DAT_01b68848 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01b6884c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01b68850 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Neck",1);
  _DAT_01b68854 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01b68858 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01b6885c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine",1);
  _DAT_01b68860 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Pelvis",1);
  iVar4 = 1;
  pcVar3 = "turnlstart";
  *(int *)&this_ptr->field_0x25a8 = _DAT_01b68848;
  *(int *)&this_ptr->field_0x2620 = _DAT_01b6884c;
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                     ((CMotionController *)this_ptr_00);
  _DAT_01b68864 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "turnrstart";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                     ((CMotionController *)this_ptr_00);
  _DAT_01b68868 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "pickup";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                     ((CMotionController *)this_ptr_00);
  iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar3,iVar4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
            ((CDeformableModelInstance *)this_ptr_00,iVar4,22.0);
  core_skeleton_cpp_FUN_00569040(this_ptr_00,_DAT_01b6884c);
  uStack_28 = uStack_40;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((uint *)&this_ptr->field_0x20090 != &stack0xffffffd8) {
    *(uint *)&this_ptr->field_0x20090 = uStack_28;
    *(uint *)&this_ptr->field_0x20094 = uStack_24;
    *(uint *)&this_ptr->field_0x20098 = uStack_20;
  }
  core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,_DAT_01b68824);
  uStack_1c = uStack_34;
  (&stack0xffffffe8)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((uint *)&this_ptr->field_0x2009c != &stack0xffffffe4) {
    *(uint *)&this_ptr->field_0x2009c = uStack_1c;
    *(uint *)&this_ptr->field_0x200a0 = uStack_18;
    *(uint *)&this_ptr->field_0x200a4 = uStack_14;
  }
  core_doc_cpp_FUN_0046caa0(this_ptr);
  *(uint *)&this_ptr->field_0x200a8 = 0;
  *(uint *)&this_ptr->field_0x200bc = 0;
  *(uint *)&this_ptr->field_0x200d0 = 0;
  *(uint *)&this_ptr->field_0x20020 = 0;
  *(uint *)&this_ptr->field_0x200e0 = 0;
  *(uint *)&this_ptr->field_0x20018 = 0;
  *(uint *)&this_ptr->field_0x2001c = 0;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  *(uint *)&this_ptr->field_0x200d8 = 0;
  _DAT_01b6886c = 0;
  *(uint *)&this_ptr->field_0x200dc = 0;
  return;
}
