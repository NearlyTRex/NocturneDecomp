// Name: core_haystack.cpp_CHaystack_setup_FUN_004f0c80
// Address: 004f0c80
// Address Range: [[004f0c80, 004f0e11]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_setup_FUN_004f0c80(CHaystack *this_ptr)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_setup_FUN_004f0c80(CHaystack *this_ptr)

{
  CSkeleton *this_ptr_00;
  
  core_hero_cpp_CHero_setup_FUN_004f2540(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->base).base.model);
  INT_02db8700 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 head");
  INT_02db8704 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Clavicle");
  INT_02db8708 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Clavicle");
  INT_02db870c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_02db8710 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_02db8714 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm");
  INT_02db8718 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  INT_02db871c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot");
  INT_02db8720 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot");
  INT_02db8724 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Thigh");
  INT_02db8728 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Thigh");
  INT_02db872c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Calf");
  INT_02db8730 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Calf");
  INT_02db8734 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  INT_02db8738 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  INT_02db873c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  INT_02db8740 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  this_ptr->unk[0] = '\0';
  this_ptr->unk[1] = '\0';
  this_ptr->unk[2] = '\0';
  this_ptr->unk[3] = '\0';
  return;
}
