// Name: core_gabriela.cpp_CGabriella_setup_FUN_004957c0
// Address: 004957c0
// Address Range: [[004957c0, 00495a09]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004957c0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004957c0(CGabriella *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
  char *pcVar2;
  int iVar3;
  
  core_hero_cpp_CHero_setup_FUN_004b48d0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(this_ptr_00,"gabriela.dfm");
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
  core_cloth_cpp_CCloth_load_FUN_00435240(&this_ptr->coat_cloth,"gabcoat.cth");
  core_cloth_cpp_CCloth_setup_FUN_004359e0
            (&this_ptr->coat_cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  _DAT_01c71398 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 head",1);
  _DAT_01c7139c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_01c713a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_01c713a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01c713a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01c713ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01c713b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01c713b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01c713b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01c713bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_01c713c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_01c713c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Calf",1);
  _DAT_01c713c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Calf",1);
  _DAT_01c713d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01c713dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01c713e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01c713e4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine",1);
  iVar3 = 1;
  pcVar2 = "gab draw";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&this_ptr_00->motion_controller);
  _DAT_01c713cc = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar2,iVar3);
  iVar3 = 1;
  pcVar2 = "gab shoot";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&this_ptr_00->motion_controller);
  _DAT_01c713d4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar2,iVar3);
  iVar3 = 1;
  pcVar2 = "gab crossbow shoot";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&this_ptr_00->motion_controller);
  _DAT_01c713d0 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar2,iVar3);
  (this_ptr->base).pushed_object = (CBoxActor *)0x0;
  (this_ptr->base).lever_to_pull = (CLever *)0x0;
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_01c713d8;
  return;
}
