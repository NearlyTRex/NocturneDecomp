// Name: core_prye.cpp_CPrye_setup_FUN_00518680
// Address: 00518680
// Address Range: [[00518680, 00518a70]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_setup_FUN_00518680(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_setup_FUN_00518680(CPrye *this_ptr)

{
  byte *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
  byte bVar2;
  uint auStackY_1028 [1015];
  char *pcVar3;
  int iVar4;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  bVar2 = 0;
  core_hero_cpp_FUN_004d26b0(this_ptr);
  this_ptr_00 = &this_ptr->field_0x158;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr_00);
  _DAT_01ed36dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 head",1);
  _DAT_01ed36e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_01ed36e4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_01ed36e8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01ed36ec =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01ed36f0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01ed36f4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01ed36f8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01ed36fc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01ed3700 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_01ed3704 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_01ed3708 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Calf",1);
  _DAT_01ed370c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Calf",1);
  _DAT_01ed3710 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01ed3714 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01ed3718 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Neck",1);
  _DAT_01ed371c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01ed3720 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01ed3724 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine",1);
  _DAT_01ed3728 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Pelvis",1);
  _DAT_01ed372c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Finger1",1);
  _DAT_01ed3730 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Finger11",1);
  _DAT_01ed3734 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Finger1",1);
  _DAT_01ed3738 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Finger11",1);
  iVar4 = 1;
  pcVar3 = "turnlstart";
  *(int *)&this_ptr->field_0x25a8 = _DAT_01ed3710;
  *(int *)&this_ptr->field_0x2620 = _DAT_01ed3714;
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                     ((CMotionController *)this_ptr_00);
  _DAT_01ed373c = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "turnrstart";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                     ((CMotionController *)this_ptr_00);
  _DAT_01ed3740 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "pickup";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                     ((CMotionController *)this_ptr_00);
  iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(pCVar1,pcVar3,iVar4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180
            ((CDeformableModelInstance *)this_ptr_00,iVar4,22.0);
  core_skeleton_cpp_FUN_0054dbd0(this_ptr_00,_DAT_01ed3714);
  uStack_28 = uStack_34;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((uint *)&this_ptr->field_0x20cb0 != &stack0xffffffd8) {
    *(uint *)&this_ptr->field_0x20cb0 = uStack_28;
    *(uint *)&this_ptr->field_0x20cb4 = uStack_24;
    *(uint *)&this_ptr->field_0x20cb8 = uStack_20;
  }
  core_skeleton_cpp_FUN_0054dbd0(&this_ptr->field_0x158,_DAT_01ed36ec);
  uStack_40 = uStack_1c;
  (&stack0xffffffc4)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((uint *)&this_ptr->field_0x20cbc != &stack0xffffffc0) {
    *(uint *)&this_ptr->field_0x20cbc = uStack_40;
    *(uint *)&this_ptr->field_0x20cc0 = uStack_3c;
    *(uint *)&this_ptr->field_0x20cc4 = uStack_38;
  }
  core_prye_cpp_FUN_0051c1c0(this_ptr);
  *(uint *)&this_ptr->field_0x20cc8 = 0;
  *(uint *)&this_ptr->field_0x20cdc = 0;
  *(uint *)&this_ptr->field_0x20cf0 = 0;
  *(uint *)&this_ptr->field_0x20c40 = 0;
  *(uint *)&this_ptr->field_0x20d00 = 0;
  *(uint *)&this_ptr->field_0x20c38 = 0;
  *(uint *)&this_ptr->field_0x20c3c = 0;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  *(uint *)&this_ptr->field_0x20cf8 = 0;
  _DAT_01ed3744 = 0;
  *(uint *)&this_ptr->field_0x20cfc = 0;
  sound_sndmain_cpp_FUN_00556230("prye-pain1.wav");
  sound_sndmain_cpp_FUN_00556230("prye-pain2.wav");
  sound_sndmain_cpp_FUN_00556230("prye-pain3.wav");
  sound_sndmain_cpp_FUN_00556230("prye-death1.wav");
  sound_sndmain_cpp_FUN_00556230("prye-death2.wav");
  sound_sndmain_cpp_FUN_00556230("prye-death3.wav");
  sound_sndmain_cpp_FUN_00556230("fall-1.wav");
  return;
}
