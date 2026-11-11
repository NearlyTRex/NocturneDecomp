// Name: core_gabriela.cpp_CGabriella_setup_FUN_004c6390
// Address: 004c6390
// Address Range: [[004c6390, 004c65d9]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004c6390(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004c6390(CGabriella *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
  char *pcVar2;
  int iVar3;
  
  core_hero_cpp_CHero_setup_FUN_004eaa10(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50(this_ptr_00,"gabriela.dfm");
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_00);
  core_cloth_cpp_CCloth_load_FUN_0043e6d0(&this_ptr->coat_cloth,"gabcoat.cth");
  core_cloth_cpp_FUN_0043eea0
            (&this_ptr->coat_cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  _DAT_01cc9108 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 head",1);
  _DAT_01cc910c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_01cc9110 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_01cc9114 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01cc9118 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01cc911c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01cc9120 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01cc9124 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01cc9128 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01cc912c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_01cc9130 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_01cc9134 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Calf",1);
  _DAT_01cc9138 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Calf",1);
  _DAT_01cc9148 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01cc914c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01cc9150 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01cc9154 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine",1);
  iVar3 = 1;
  pcVar2 = "gab draw";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr_00->base);
  _DAT_01cc913c = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar2,iVar3);
  iVar3 = 1;
  pcVar2 = "gab shoot";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr_00->base);
  _DAT_01cc9144 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar2,iVar3);
  iVar3 = 1;
  pcVar2 = "gab crossbow shoot";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr_00->base);
  _DAT_01cc9140 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar2,iVar3);
  (this_ptr->base).pushed_object = (CBoxActor *)0x0;
  (this_ptr->base).lever_to_pull = (CLever *)0x0;
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_01cc9148;
  return;
}
