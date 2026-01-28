// Name: core_baron.cpp_CBaron_FUN_00412cb0
// Address: 00412cb0
// Address Range: [[00412cb0, 00412e64]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_FUN_00412cb0(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_FUN_00412cb0(CBaron *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  
  core_hero_cpp_CHero_FUN_004f2540(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->base).base.model);
  INT_00822498 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 head");
  INT_0082249c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Clavicle");
  INT_008224a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Clavicle");
  INT_008224a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_008224a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_008224ac = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm");
  INT_008224b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  INT_008224b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot");
  INT_008224b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot");
  INT_008224bc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Thigh");
  INT_008224c0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Thigh");
  INT_008224c4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Calf");
  INT_008224c8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Calf");
  INT_008224cc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  INT_008224d0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  INT_008224d4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  INT_008224d8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine1");
  this_ptr->unk[0xd8] = '\0';
  this_ptr->unk[0xd9] = '\0';
  this_ptr->unk[0xda] = '\0';
  this_ptr->unk[0xdb] = '\0';
  *(int *)((this_ptr->base).base.unk2 + 0x24) = iVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&g_CKeyFramedModelInstanceInstance);
  return;
}
