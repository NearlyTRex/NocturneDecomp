// Name: core_hostage.cpp_CHostage_setup_FUN_004b6b20
// Address: 004b6b20
// Address Range: [[004b6b20, 004b6ce8]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_setup_FUN_004b6b20(CHostage *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hostage_cpp_CHostage_setup_FUN_004b6b20(CHostage *this_ptr)

{
  char *str1;
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  CSkeleton *this_ptr_01;
  CMotionList *this_ptr_02;
  int iVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(&(this_ptr->base).base.model);
  str1 = (this_ptr->base).base.model.model_name;
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
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  this_ptr_02 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                          (&this_ptr_00->motion_controller);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                    (this_ptr_01,"Bip01 R UpperArm",1);
  this_ptr->bone_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Foot",1);
  this_ptr->bone_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Foot",1);
  this_ptr->bone_indices[3] = iVar1;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Hand",1);
  iVar1 = this_ptr->hostage_type;
  (this_ptr->base).base.carry_hands[1].bone_index = iVar2;
  if (iVar1 != 1) {
    iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Hand",1)
    ;
    (this_ptr->base).base.carry_hands[0].bone_index = iVar1;
  }
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine1",1);
  iVar1 = this_ptr->hostage_type;
  (this_ptr->base).base.gesture_branch_root = iVar2;
  if (iVar1 == 1) {
    _DAT_01cae1a0 =
         core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(this_ptr_02,"gunup",1);
  }
  core_npc_cpp_CNPC_setup_FUN_004ee9e0(&this_ptr->base);
  this_ptr->sfx_handle = 0;
  return;
}
