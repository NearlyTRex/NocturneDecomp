// Name: core_tentacle.cpp_CTentacle_FUN_005dafc0
// Address: 005dafc0
// Address Range: [[005dafc0, 005db041]]
// Convention: __cdecl
// Signature: void core_tentacle.cpp_CTentacle_FUN_005dafc0(CTentacle * this_ptr)
// Globals:
//   TerminatedCString s_bipp02_00654dc0
//   TerminatedCString s_bipp05_00654dc7
//   TerminatedCString s_bipp06_00654dce
//   TerminatedCString s_bipp09_00654dd5
//   undefined4 DAT_03f6cd08
//   undefined4 DAT_03f6cd0c
//   undefined4 DAT_03f6cd10
//   undefined4 DAT_03f6cd14
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_FUN_005dafc0(CTentacle *this_ptr)

{
  CSkeleton *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  CEnemy *in_stack_00000008;
  undefined4 uStack00000010;
  
  this_ptr_01 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_01);
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000008);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_01);
  DAT_03f6cd08 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"bipp02");
  DAT_03f6cd0c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"bipp05");
  DAT_03f6cd10 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"bipp06");
  uStack00000010 = 1;
  DAT_03f6cd14 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"bipp09");
  return;
}


// Assembly code:
// 005dafc0: PUSH EBX
//   Label: core_tentacle.cpp_CTentacle_FUN_005dafc0
// 005dafc1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dafc5: ADD EBX,0x158
// 005dafcb: PUSH EBX
// 005dafcc: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 005dafd1: ADD ESP,0x4
// 005dafd4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dafd8: PUSH EDX
// 005dafd9: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 005dafde: ADD ESP,0x4
// 005dafe1: PUSH EBX
// 005dafe2: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005dafe7: ADD ESP,0x4
// 005dafea: PUSH 0x1
// 005dafec: PUSH 0x654dc0
//   XREF to: 00654dc0 (DATA)
// 005daff1: PUSH EAX
// 005daff2: MOV EBX,EAX
// 005daff4: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005daff9: ADD ESP,0xc
// 005daffc: PUSH 0x1
// 005daffe: PUSH 0x654dc7
//   XREF to: 00654dc7 (DATA)
// 005db003: PUSH EBX
// 005db004: MOV [0x03f6cd08],EAX
//   XREF to: 03f6cd08 (WRITE)
// 005db009: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005db00e: ADD ESP,0xc
// 005db011: PUSH 0x1
// 005db013: PUSH 0x654dce
//   XREF to: 00654dce (DATA)
// 005db018: PUSH EBX
// 005db019: MOV [0x03f6cd0c],EAX
//   XREF to: 03f6cd0c (WRITE)
// 005db01e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005db023: ADD ESP,0xc
// 005db026: PUSH 0x1
// 005db028: PUSH 0x654dd5
//   XREF to: 00654dd5 (DATA)
// 005db02d: PUSH EBX
// 005db02e: MOV [0x03f6cd10],EAX
//   XREF to: 03f6cd10 (WRITE)
// 005db033: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005db038: ADD ESP,0xc
// 005db03b: MOV [0x03f6cd14],EAX
//   XREF to: 03f6cd14 (WRITE)
// 005db040: POP EBX
// 005db041: RET
