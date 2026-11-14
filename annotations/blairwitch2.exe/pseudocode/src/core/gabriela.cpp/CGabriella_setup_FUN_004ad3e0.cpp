// Name: core_gabriela.cpp_CGabriella_setup_FUN_004ad3e0
// Address: 004ad3e0
// Address Range: [[004ad3e0, 004ad629]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004ad3e0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004ad3e0(CGabriella *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
  char *pcVar2;
  int iVar3;
  
  core_hero_cpp_CHero_setup_FUN_004ce4a0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(this_ptr_00,"gabriela.dfm");
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  core_cloth_cpp_CCloth_load_FUN_005adeb0(&this_ptr->coat_cloth,"gabcoat.cth");
  core_cloth_cpp_FUN_005ae680
            (&this_ptr->coat_cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  _DAT_01cb0678 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 head",1);
  _DAT_01cb067c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_01cb0680 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_01cb0684 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01cb0688 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01cb068c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01cb0690 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01cb0694 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01cb0698 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01cb069c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_01cb06a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_01cb06a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Calf",1);
  _DAT_01cb06a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Calf",1);
  _DAT_01cb06b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01cb06bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01cb06c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01cb06c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  iVar3 = 1;
  pcVar2 = "gab draw";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(&this_ptr_00->base);
  _DAT_01cb06ac = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar1,pcVar2,iVar3);
  iVar3 = 1;
  pcVar2 = "gab shoot";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(&this_ptr_00->base);
  _DAT_01cb06b4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar1,pcVar2,iVar3);
  iVar3 = 1;
  pcVar2 = "gab crossbow shoot";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(&this_ptr_00->base);
  _DAT_01cb06b0 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar1,pcVar2,iVar3);
  (this_ptr->base).pushed_object = (CBoxActor *)0x0;
  (this_ptr->base).lever_to_pull = (CLever *)0x0;
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_01cb06b8;
  return;
}
