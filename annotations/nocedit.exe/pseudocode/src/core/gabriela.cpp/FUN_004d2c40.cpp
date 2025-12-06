// Name: core_gabriela.cpp_FUN_004d2c40
// Address: 004d2c40
// Address Range: [[004d2c40, 004d2e89]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d2c40()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_gabriella.cpp_FUN_004d2c40(uint param_1) */

void core_gabriela_cpp_FUN_004d2c40(void)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CMotionList *pCVar1;
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f2540(in_stack_00000004);
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,"gabriela.dfm");
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)&in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].y,
             "gabcoat.cth");
  core_cloth_cpp_FUN_00439710();
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  DAT_02d7b848 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 head");
  DAT_02d7b84c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Clavicle");
  DAT_02d7b850 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Clavicle");
  _DAT_02d7b854 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L UpperArm");
  DAT_02d7b858 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  _DAT_02d7b85c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L ForeArm");
  DAT_02d7b860 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  DAT_02d7b864 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot");
  DAT_02d7b868 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot");
  _DAT_02d7b86c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Thigh");
  DAT_02d7b870 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Thigh");
  _DAT_02d7b874 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Calf");
  DAT_02d7b878 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Calf");
  DAT_02d7b888 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  DAT_02d7b88c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  DAT_02d7b890 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  DAT_02d7b894 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr->motion_controller);
  DAT_02d7b87c = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr->motion_controller);
  DAT_02d7b884 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr->motion_controller);
  DAT_02d7b880 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  in_stack_00000004->field6_0x1fb9c[8] = '\0';
  in_stack_00000004->field6_0x1fb9c[9] = '\0';
  in_stack_00000004->field6_0x1fb9c[10] = '\0';
  in_stack_00000004->field6_0x1fb9c[0xb] = '\0';
  in_stack_00000004->field6_0x1fb9c[0xc] = '\0';
  in_stack_00000004->field6_0x1fb9c[0xd] = '\0';
  in_stack_00000004->field6_0x1fb9c[0xe] = '\0';
  in_stack_00000004->field6_0x1fb9c[0xf] = '\0';
  in_stack_00000004->field6_0x1fb9c[0x10] = '\0';
  in_stack_00000004->field6_0x1fb9c[0x11] = '\0';
  in_stack_00000004->field6_0x1fb9c[0x12] = '\0';
  in_stack_00000004->field6_0x1fb9c[0x13] = '\0';
  *(int *)(in_stack_00000004->base_character).carry_hands[0].field0_0x0 = DAT_02d7b888;
  return;
}
