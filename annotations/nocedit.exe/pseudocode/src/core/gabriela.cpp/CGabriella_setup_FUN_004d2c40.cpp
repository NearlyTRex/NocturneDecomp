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
  
  core_hero_cpp_CHero_setup_FUN_004f2540(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr_00,"gabriela.dfm");
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  core_cloth_cpp_CCloth_load_FUN_00438cf0(&this_ptr->coat_cloth,"gabcoat.cth");
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (&this_ptr->coat_cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  INT_02d7b848 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 head",1);
  INT_02d7b84c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Clavicle",1);
  INT_02d7b850 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Clavicle",1);
  INT_02d7b854 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm",1);
  INT_02d7b858 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm",1);
  INT_02d7b85c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm",1);
  INT_02d7b860 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm",1);
  INT_02d7b864 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot",1);
  INT_02d7b868 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot",1);
  INT_02d7b86c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Thigh",1);
  INT_02d7b870 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Thigh",1);
  INT_02d7b874 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Calf",1);
  INT_02d7b878 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Calf",1);
  INT_02d7b888 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand",1);
  INT_02d7b88c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand",1);
  INT_02d7b890 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2",1);
  INT_02d7b894 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine",1);
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  INT_02d7b87c = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  INT_02d7b884 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  INT_02d7b880 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  (this_ptr->base).pushed_object = (CBoxActor *)0x0;
  (this_ptr->base).lever_to_pull = (CLever *)0x0;
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  (this_ptr->base).base.carry_hands[0].bone_index = INT_02d7b888;
  return;
}
