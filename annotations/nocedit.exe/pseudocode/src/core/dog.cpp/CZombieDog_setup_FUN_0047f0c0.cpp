// Name: core_dog.cpp_CZombieDog_setup_FUN_0047f0c0
// Address: 0047f0c0
// Address Range: [[0047f0c0, 0047f117]]
// Convention: __cdecl
// Signature: void core_dog.cpp_CZombieDog_setup_FUN_0047f0c0(CZombieDog * this_ptr)
// Globals:
//   TerminatedCString s_Bip01_Spine1_00620fa4
//   TerminatedCString s_Bip01_Head_00620fb1
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_setup_FUN_0047f0c0(CZombieDog *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine1");
  *(int *)(this_ptr->field1_0xbeb4 + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  *(int *)(this_ptr->field1_0xbeb4 + 0xc) = iVar1;
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  return;
}


// Assembly code:
// 0047f0c0: PUSH EBX
//   Label: core_dog.cpp_CZombieDog_setup_FUN_0047f0c0
// 0047f0c1: PUSH ESI
// 0047f0c2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0047f0c6: LEA EBX,[ESI + 0x158]
// 0047f0cc: PUSH EBX
// 0047f0cd: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0047f0d2: ADD ESP,0x4
// 0047f0d5: PUSH EBX
// 0047f0d6: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0047f0db: ADD ESP,0x4
// 0047f0de: PUSH 0x1
// 0047f0e0: PUSH 0x620fa4
//   XREF to: 00620fa4 (DATA)
// 0047f0e5: PUSH EAX
// 0047f0e6: MOV EBX,EAX
// 0047f0e8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0047f0ed: ADD ESP,0xc
// 0047f0f0: PUSH 0x1
// 0047f0f2: PUSH 0x620fb1
//   XREF to: 00620fb1 (DATA)
// 0047f0f7: PUSH EBX
// 0047f0f8: MOV dword ptr [ESI + 0xbebc],EAX
// 0047f0fe: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0047f103: ADD ESP,0xc
// 0047f106: PUSH ESI
// 0047f107: MOV dword ptr [ESI + 0xbec0],EAX
// 0047f10d: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 0047f112: ADD ESP,0x4
// 0047f115: POP ESI
// 0047f116: POP EBX
// 0047f117: RET
