// Name: core_hostage.cpp_CHostage_setup_FUN_004d1400
// Address: 004d1400
// Address Range: [[004d1400, 004d15c8]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_setup_FUN_004d1400(CHostage *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hostage_cpp_CHostage_setup_FUN_004d1400(CHostage *this_ptr)

{
  byte *str1;
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  CSkeleton *this_ptr_01;
  CMotionList *this_ptr_02;
  int iVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(&(this_ptr->base).base.model);
  str1 = &(this_ptr->base).base.model.field_0x2260;
  this_ptr->hostage_type = 6;
  iVar1 = _stricmp(str1,"hickboy.dfm");
  if (iVar1 == 0) {
    this_ptr->hostage_type = 0;
  }
  iVar1 = _stricmp(str1,"depute.dfm");
  if (iVar1 == 0) {
    this_ptr->hostage_type = 1;
  }
  iVar1 = _stricmp(str1,"hickho.dfm");
  if (iVar1 == 0) {
    this_ptr->hostage_type = 2;
  }
  iVar1 = _stricmp(str1,"hickgirl.dfm");
  if (iVar1 == 0) {
    this_ptr->hostage_type = 4;
  }
  iVar1 = _stricmp(str1,"hickdad.dfm");
  if (iVar1 == 0) {
    this_ptr->hostage_type = 5;
  }
  iVar1 = _stricmp(str1,"preacher.dfm");
  if (iVar1 == 0) {
    this_ptr->hostage_type = 3;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                          ((CMotionController *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_01,"Bip01 R UpperArm",1);
  this_ptr->bone_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  this_ptr->bone_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  this_ptr->bone_indices[3] = iVar1;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Hand",1);
  iVar1 = this_ptr->hostage_type;
  *(int *)&(this_ptr->base).base.field_0x2690 = iVar2;
  if (iVar1 != 1) {
    iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1)
    ;
    (this_ptr->base).base.carry_hands[0] = (SCarryHand)(char)iVar1;
    (this_ptr->base).base.carry_hands[1] = (SCarryHand)(char)((uint)iVar1 >> 8);
    *(short *)&(this_ptr->base).base.field_0x261a = (short)((uint)iVar1 >> 0x10);
  }
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine1",1);
  iVar1 = this_ptr->hostage_type;
  (this_ptr->base).base.gesture_branch_root = iVar2;
  if (iVar1 == 1) {
    _DAT_01cedfcc =
         core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(this_ptr_02,"gunup",1);
  }
  core_npc_cpp_CNPC_setup_FUN_00510510(&this_ptr->base);
  this_ptr->sfx_handle = 0;
  return;
}
