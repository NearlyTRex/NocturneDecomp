// Name: core_gabriela.cpp_CGabriella_setup_FUN_004d2c40
// Address: 004d2c40
// Address Range: [[004d2c40, 004d2e89]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004d2c40(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004d2c40(CGabriella *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
  char *pcVar2;
  int iVar3;
  
  core_hero_cpp_CHero_setup_FUN_004f2540(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr_00,"gabriela.dfm");
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  core_cloth_cpp_CCloth_load_FUN_00438cf0(&this_ptr->coat_cloth,"gabcoat.cth");
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (&this_ptr->coat_cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  g_GabriellaIndices[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 head",1);
  g_GabriellaIndices[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Clavicle",1);
  g_GabriellaIndices[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Clavicle",1);
  g_GabriellaIndices[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm",1);
  g_GabriellaIndices[4] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm",1);
  g_GabriellaIndices[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm",1);
  g_GabriellaIndices[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm",1);
  g_GabriellaIndices[7] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot",1);
  g_GabriellaIndices[8] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot",1);
  g_GabriellaIndices[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Thigh",1);
  g_GabriellaIndices[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Thigh",1);
  g_GabriellaIndices[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Calf",1);
  g_GabriellaIndices[0xc] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Calf",1);
  g_GabriellaIndices[0x10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand",1);
  g_GabriellaIndices[0x11] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Hand",1);
  g_GabriellaIndices[0x12] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2",1);
  g_GabriellaIndices[0x13] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine",1);
  iVar3 = 1;
  pcVar2 = "gab draw";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  g_GabriellaIndices[0xd] =
       core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1,pcVar2,iVar3);
  iVar3 = 1;
  pcVar2 = "gab shoot";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  g_GabriellaIndices[0xf] =
       core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1,pcVar2,iVar3);
  iVar3 = 1;
  pcVar2 = "gab crossbow shoot";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  g_GabriellaIndices[0xe] =
       core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1,pcVar2,iVar3);
  (this_ptr->base).pushed_object = (CBoxActor *)0x0;
  (this_ptr->base).lever_to_pull = (CLever *)0x0;
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  (this_ptr->base).base.carry_hands[0].bone_index = g_GabriellaIndices[0x10];
  return;
}
