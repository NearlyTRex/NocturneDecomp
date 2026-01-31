// Name: core_colonel.cpp_FUN_0043f850
// Address: 0043f850
// Address Range: [[0043f850, 0043f9e1]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_FUN_0043f850(void)

#include "nocturne.h"

void __cdecl core_colonel_cpp_FUN_0043f850(void)

{
  CHero *pCVar1;
  CSkeleton *this_ptr;
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_setup_FUN_004f2540(in_stack_00000004);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                       (&(in_stack_00000004->base).model);
  INT_0083b124 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 head");
  INT_0083b128 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L Clavicle");
  INT_0083b12c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R Clavicle");
  INT_0083b130 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L UpperArm");
  INT_0083b134 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R UpperArm");
  INT_0083b138 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L ForeArm");
  INT_0083b13c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R ForeArm");
  INT_0083b140 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Foot")
  ;
  INT_0083b144 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Foot")
  ;
  INT_0083b148 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L Thigh");
  INT_0083b14c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R Thigh");
  INT_0083b150 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Calf")
  ;
  INT_0083b154 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Calf")
  ;
  INT_0083b158 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Hand")
  ;
  INT_0083b15c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Hand")
  ;
  INT_0083b160 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine2")
  ;
  INT_0083b164 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine");
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base).base.actor_name[0] = '\0';
  (pCVar1->base).base.actor_name[1] = '\0';
  (pCVar1->base).base.actor_name[2] = '\0';
  (pCVar1->base).base.actor_name[3] = '\0';
  return;
}
