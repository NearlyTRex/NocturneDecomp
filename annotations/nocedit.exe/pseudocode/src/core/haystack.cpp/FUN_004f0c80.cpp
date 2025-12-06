// Name: core_haystack.cpp_FUN_004f0c80
// Address: 004f0c80
// Address Range: [[004f0c80, 004f0e11]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f0c80()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_haystack.cpp_FUN_004f0c80(uint param_1) */

void core_haystack_cpp_FUN_004f0c80(void)

{
  CSkeleton *this_ptr;
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f2540(in_stack_00000004);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                       (&(in_stack_00000004->base_character).model);
  DAT_02db8700 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 head");
  _DAT_02db8704 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Clavicle");
  _DAT_02db8708 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Clavicle");
  _DAT_02db870c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L UpperArm");
  _DAT_02db8710 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R UpperArm");
  _DAT_02db8714 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L ForeArm");
  _DAT_02db8718 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R ForeArm");
  _DAT_02db871c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Foot");
  _DAT_02db8720 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Foot");
  _DAT_02db8724 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Thigh");
  _DAT_02db8728 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Thigh");
  _DAT_02db872c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Calf");
  _DAT_02db8730 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Calf");
  DAT_02db8734 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Hand")
  ;
  DAT_02db8738 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Hand")
  ;
  _DAT_02db873c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine2");
  _DAT_02db8740 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine")
  ;
  in_stack_00000004 = in_stack_00000004 + 1;
  (in_stack_00000004->base_character).base_actor.actor_name[0] = '\0';
  (in_stack_00000004->base_character).base_actor.actor_name[1] = '\0';
  (in_stack_00000004->base_character).base_actor.actor_name[2] = '\0';
  (in_stack_00000004->base_character).base_actor.actor_name[3] = '\0';
  return;
}
