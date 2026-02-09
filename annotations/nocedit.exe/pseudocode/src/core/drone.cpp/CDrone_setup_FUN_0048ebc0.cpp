// Name: core_drone.cpp_CDrone_setup_FUN_0048ebc0
// Address: 0048ebc0
// Address Range: [[0048ebc0, 0048ec3f]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_setup_FUN_0048ebc0(CDrone *this_ptr)

#include "nocturne.h"

void __cdecl core_drone_cpp_CDrone_setup_FUN_0048ebc0(CDrone *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  this_ptr->unk[0] = '\0';
  this_ptr->unk[1] = '\0';
  this_ptr->unk[2] = '\0';
  this_ptr->unk[3] = '\0';
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bipn04");
  *(int *)(this_ptr->unk + 4) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bipn09");
  *(int *)(this_ptr->unk + 8) = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr->unk[0xc] = '\0';
  this_ptr->unk[0xd] = '\0';
  this_ptr->unk[0xe] = '\0';
  this_ptr->unk[0xf] = '\0';
  this_ptr->unk[0x10] = '\0';
  this_ptr->unk[0x11] = '\0';
  this_ptr->unk[0x12] = '\0';
  this_ptr->unk[0x13] = '\0';
  this_ptr->unk[0x14] = '\0';
  this_ptr->unk[0x15] = '\0';
  this_ptr->unk[0x16] = '\0';
  this_ptr->unk[0x17] = '\0';
  return;
}
