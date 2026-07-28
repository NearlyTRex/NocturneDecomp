// Name: core_gabriela.cpp_CGabriella_setup_FUN_004957c0
// Address: 004957c0
// Address Range: [[004957c0, 00495a09]]
// Convention: unknown
// Signature: void core_gabriela_cpp_CGabriella_setup_FUN_004957c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_CGabriella_setup_FUN_004957c0(int param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CMotionList *pCVar1;
  char *pcVar2;
  int iVar3;
  
  core_hero_cpp_FUN_004b48d0(param_1);
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x150);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(this_ptr,"gabriela.dfm");
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  core_cloth_cpp_CCloth_load_FUN_00435240((CCloth *)(param_1 + 0x1fa7c),"gabcoat.cth");
  core_cloth_cpp_CCloth_setup_FUN_004359e0
            ((CCloth *)(param_1 + 0x1fa7c),(CVector3f *)(param_1 + 0x20),
             (CVector3f *)(param_1 + 0x30),this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  _DAT_01c71398 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 head",1);
  _DAT_01c7139c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_01c713a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_01c713a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01c713a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01c713ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01c713b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01c713b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01c713b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01c713bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_01c713c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_01c713c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Calf",1);
  _DAT_01c713c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Calf",1);
  _DAT_01c713d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01c713dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01c713e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01c713e4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  iVar3 = 1;
  pcVar2 = "gab draw";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     ((CMotionController *)this_ptr);
  _DAT_01c713cc = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar2,iVar3);
  iVar3 = 1;
  pcVar2 = "gab shoot";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     ((CMotionController *)this_ptr);
  _DAT_01c713d4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar2,iVar3);
  iVar3 = 1;
  pcVar2 = "gab crossbow shoot";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     ((CMotionController *)this_ptr);
  _DAT_01c713d0 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar2,iVar3);
  *(uint *)(param_1 + 0x1fa0c) = 0;
  *(uint *)(param_1 + 0x1fa10) = 0;
  *(uint *)(param_1 + 0x1fa14) = 0;
  *(int *)(param_1 + 0x24a4) = _DAT_01c713d8;
  return;
}
