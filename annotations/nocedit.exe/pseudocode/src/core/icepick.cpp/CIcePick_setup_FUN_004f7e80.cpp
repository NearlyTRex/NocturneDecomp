// Name: core_icepick.cpp_CIcePick_setup_FUN_004f7e80
// Address: 004f7e80
// Address Range: [[004f7e80, 004f8094]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004f7e80(CIcePick *this_ptr)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004f7e80(CIcePick *this_ptr)

{
  int iVar1;
  CSkeleton *this_ptr_00;
  
  core_hero_cpp_CHero_setup_FUN_004f2540(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->base).base.model);
  INT_02db8970 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 head",1);
  INT_02db8974 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Clavicle",1);
  INT_02db8978 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Clavicle",1);
  INT_02db897c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm",1);
  INT_02db8980 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm",1);
  INT_02db8984 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm",1);
  INT_02db8988 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm",1);
  INT_02db898c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot",1);
  INT_02db8990 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot",1);
  INT_02db8994 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Thigh",1);
  INT_02db8998 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Thigh",1);
  INT_02db899c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Calf",1);
  INT_02db89a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Calf",1);
  INT_02db89a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand",1);
  INT_02db89a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand",1);
  INT_02db89ac = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2",1);
  INT_02db89b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine1",1);
  INT_02db89b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine",1);
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = 0;
  (this_ptr->base).base.carry_hands[1].secondary_bone_index = 0;
  this_ptr->guns_drawn = 0;
  (this_ptr->base).base.carry_hands[0].bone_index = INT_02db89a4;
  (this_ptr->base).base.carry_hands[1].bone_index = INT_02db89a8;
  iVar1 = g_LocalHeroIndex;
  this_ptr->pending_pickup_target = (CDemonActor *)0x0;
  if (this_ptr == (CIcePick *)g_HeroActors[iVar1]) {
    (((CIcePick *)g_HeroActors[iVar1])->base).base.collision_cylinder_radius = 1.5;
  }
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[0] = 0;
  this_ptr->aim_pitch = 0.0;
  return;
}
