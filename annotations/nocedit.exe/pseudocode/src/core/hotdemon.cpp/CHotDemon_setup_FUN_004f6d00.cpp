// Name: core_hotdemon.cpp_CHotDemon_setup_FUN_004f6d00
// Address: 004f6d00
// Address Range: [[004f6d00, 004f6ede]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_setup_FUN_004f6d00(CHotDemon *this_ptr)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_CHotDemon_setup_FUN_004f6d00(CHotDemon *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  char *model_name;
  
  if (g_CGamePtr->nudity_flag == 0) {
    model_name = "hotdemonx.dfm";
  }
  else {
    model_name = "hotdemon.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(this_ptr->base).base.model,model_name);
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  INT_02db88c8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head",1);
  INT_02db88d4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm",1);
  INT_02db88d8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm",1);
  INT_02db88dc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm",1);
  INT_02db88e0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm",1);
  INT_02db88e4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot",1);
  INT_02db88e8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot",1);
  INT_02db88cc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand",1);
  INT_02db88d0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand",1);
  INT_02db88ec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine",1);
  INT_02db88f0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine1",1);
  INT_02db88f4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2",1);
  INT_02db88c8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head",1);
  INT_02db88dc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm",1);
  INT_02db88e0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm",1);
  INT_02db88ec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine",1);
  INT_02db88f4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  return;
}
