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
  
  core_hero_cpp_CHero_FUN_004f2540(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr_00,"gabriela.dfm");
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  core_cloth_cpp_CCloth_load_FUN_00438cf0((CCloth *)(this_ptr->unk + 0x40),"gabcoat.cth");
  core_cloth_cpp_FUN_00439710();
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  INT_02d7b848 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 head");
  INT_02d7b84c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Clavicle");
  INT_02d7b850 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Clavicle");
  INT_02d7b854 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_02d7b858 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_02d7b85c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm");
  INT_02d7b860 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm");
  INT_02d7b864 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot");
  INT_02d7b868 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot");
  INT_02d7b86c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Thigh");
  INT_02d7b870 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Thigh");
  INT_02d7b874 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Calf");
  INT_02d7b878 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Calf");
  INT_02d7b888 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand");
  INT_02d7b88c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  INT_02d7b890 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  INT_02d7b894 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  INT_02d7b87c = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  INT_02d7b884 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  INT_02d7b880 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  (this_ptr->base).unk3[8] = '\0';
  (this_ptr->base).unk3[9] = '\0';
  (this_ptr->base).unk3[10] = '\0';
  (this_ptr->base).unk3[0xb] = '\0';
  (this_ptr->base).unk3[0xc] = '\0';
  (this_ptr->base).unk3[0xd] = '\0';
  (this_ptr->base).unk3[0xe] = '\0';
  (this_ptr->base).unk3[0xf] = '\0';
  (this_ptr->base).unk3[0x10] = '\0';
  (this_ptr->base).unk3[0x11] = '\0';
  (this_ptr->base).unk3[0x12] = '\0';
  (this_ptr->base).unk3[0x13] = '\0';
  *(int *)(this_ptr->base).base.carry_hands[0].unk1 = INT_02d7b888;
  return;
}
