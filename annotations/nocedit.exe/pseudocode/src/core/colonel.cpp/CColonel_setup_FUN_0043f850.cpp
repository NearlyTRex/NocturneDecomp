// Name: core_colonel.cpp_CColonel_setup_FUN_0043f850
// Address: 0043f850
// Address Range: [[0043f850, 0043f9e1]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_setup_FUN_0043f850(CColonel *this_ptr)

#include "nocturne.h"

void __cdecl core_colonel_cpp_CColonel_setup_FUN_0043f850(CColonel *this_ptr)

{
  CSkeleton *this_ptr_00;
  
  core_hero_cpp_CHero_setup_FUN_004f2540(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->base).base.model);
  g_ColonelIndices[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 head",1);
  g_ColonelIndices[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Clavicle",1);
  g_ColonelIndices[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Clavicle",1);
  g_ColonelIndices[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L UpperArm",1);
  g_ColonelIndices[4] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R UpperArm",1);
  g_ColonelIndices[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L ForeArm",1);
  g_ColonelIndices[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R ForeArm",1);
  g_ColonelIndices[7] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Foot",1);
  g_ColonelIndices[8] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Foot",1);
  g_ColonelIndices[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Thigh",1);
  g_ColonelIndices[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Thigh",1);
  g_ColonelIndices[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Calf",1);
  g_ColonelIndices[0xc] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Calf",1);
  g_ColonelIndices[0xd] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Hand",1);
  g_ColonelIndices[0xe] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Hand",1);
  g_ColonelIndices[0xf] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine2",1);
  g_ColonelIndices[0x10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine",1);
  this_ptr->guns_drawn = 0;
  return;
}
