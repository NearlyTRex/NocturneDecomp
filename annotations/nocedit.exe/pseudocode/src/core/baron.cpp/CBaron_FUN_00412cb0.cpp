// Name: core_baron.cpp_CBaron_FUN_00412cb0
// Address: 00412cb0
// Address Range: [[00412cb0, 00412e64]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaron_FUN_00412cb0(CBaron * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_baron_cpp_CBaron_FUN_00412cb0(CBaron *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  uint uStack00000040;
  
  core_hero_cpp_CHero_FUN_004f2540(&this_ptr->field0_0x0);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->field0_0x0).base_character.model);
  DAT_00822498 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 head");
  _DAT_0082249c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Clavicle");
  _DAT_008224a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Clavicle");
  _DAT_008224a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L UpperArm");
  _DAT_008224a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R UpperArm");
  _DAT_008224ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L ForeArm");
  _DAT_008224b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R ForeArm");
  _DAT_008224b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Foot");
  _DAT_008224b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Foot");
  _DAT_008224bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Thigh");
  _DAT_008224c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Thigh");
  _DAT_008224c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Calf");
  _DAT_008224c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Calf");
  DAT_008224cc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  DAT_008224d0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  _DAT_008224d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine2");
  _DAT_008224d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine");
  uStack00000040 = 1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine1");
  this_ptr->field1_0x1fbd4[0xd8] = '\0';
  this_ptr->field1_0x1fbd4[0xd9] = '\0';
  this_ptr->field1_0x1fbd4[0xda] = '\0';
  this_ptr->field1_0x1fbd4[0xdb] = '\0';
  *(int *)((this_ptr->field0_0x0).base_character.field11_0x25a0 + 0x24) = iVar1;
  uStack00000040 = 0x412e5f;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&g_CKeyFramedModelInstanceInstance);
  return;
}
