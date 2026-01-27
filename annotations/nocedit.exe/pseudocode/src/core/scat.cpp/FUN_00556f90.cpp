// Name: core_scat.cpp_FUN_00556f90
// Address: 00556f90
// Address Range: [[00556f90, 0055714c]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00556f90()

#include "nocturne.h"

void core_scat_cpp_FUN_00556f90(void)

{
  CHero *pCVar1;
  CSkeleton *this_ptr;
  int iVar2;
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f2540(in_stack_00000004);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                       (&(in_stack_00000004->base).model);
  INT_0310615c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 head");
  INT_03106160 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L Clavicle");
  INT_03106164 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R Clavicle");
  INT_03106168 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L UpperArm");
  INT_0310616c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R UpperArm");
  INT_03106170 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L ForeArm");
  INT_03106174 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R ForeArm");
  INT_03106178 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Foot")
  ;
  INT_0310617c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Foot")
  ;
  INT_03106180 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L Thigh");
  INT_03106184 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R Thigh");
  INT_03106188 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Calf")
  ;
  INT_0310618c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Calf")
  ;
  INT_03106190 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Hand")
  ;
  INT_03106194 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Hand")
  ;
  INT_03106198 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine2")
  ;
  INT_031061a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine");
  INT_0310619c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine1")
  ;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine1");
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base).base.actor_name[0] = '\0';
  (pCVar1->base).base.actor_name[1] = '\0';
  (pCVar1->base).base.actor_name[2] = '\0';
  (pCVar1->base).base.actor_name[3] = '\0';
  *(int *)((in_stack_00000004->base).unk2 + 0x24) = iVar2;
  return;
}
