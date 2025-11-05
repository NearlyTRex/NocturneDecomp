// Name: core_drone.cpp_FUN_0048ebc0
// Address: 0048ebc0
// Address Range: [[0048ebc0, 0048ec3f]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048ebc0()
// Globals:
//   TerminatedCString s_Bipn04_00622377
//   TerminatedCString s_Bipn09_0062237e
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_drone.cpp_FUN_0048ebc0(undefined4 param_1) */

void core_drone_cpp_FUN_0048ebc0(void)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  CSkeleton *this_ptr_00;
  int iVar2;
  CEnemy *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->base_actor).actor_name[8] = '\0';
  (pCVar1->base_actor).actor_name[9] = '\0';
  (pCVar1->base_actor).actor_name[10] = '\0';
  (pCVar1->base_actor).actor_name[0xb] = '\0';
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bipn04");
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bipn09");
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = iVar2;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->base_actor).actor_name[0x14] = '\0';
  (pCVar1->base_actor).actor_name[0x15] = '\0';
  (pCVar1->base_actor).actor_name[0x16] = '\0';
  (pCVar1->base_actor).actor_name[0x17] = '\0';
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->base_actor).actor_name[0x18] = '\0';
  (pCVar1->base_actor).actor_name[0x19] = '\0';
  (pCVar1->base_actor).actor_name[0x1a] = '\0';
  (pCVar1->base_actor).actor_name[0x1b] = '\0';
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->base_actor).actor_name[0x1c] = '\0';
  (pCVar1->base_actor).actor_name[0x1d] = '\0';
  (pCVar1->base_actor).actor_name[0x1e] = '\0';
  (pCVar1->base_actor).actor_name[0x1f] = '\0';
  return;
}


// Assembly code:
// 0048ebc0: PUSH EBX
//   Label: core_drone.cpp_FUN_0048ebc0
// 0048ebc1: PUSH ESI
// 0048ebc2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0048ebc6: LEA ESI,[EBX + 0x158]
// 0048ebcc: PUSH ESI
// 0048ebcd: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0048ebd2: ADD ESP,0x4
// 0048ebd5: PUSH ESI
// 0048ebd6: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0048ebdb: ADD ESP,0x4
// 0048ebde: PUSH 0x1
// 0048ebe0: PUSH 0x622377
//   XREF to: 00622377 (DATA)
// 0048ebe5: PUSH EAX
// 0048ebe6: MOV ESI,EAX
// 0048ebe8: MOV dword ptr [EBX + 0xbebc],0x0
// 0048ebf2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0048ebf7: ADD ESP,0xc
// 0048ebfa: PUSH 0x1
// 0048ebfc: PUSH 0x62237e
//   XREF to: 0062237e (DATA)
// 0048ec01: PUSH ESI
// 0048ec02: MOV dword ptr [EBX + 0xbec0],EAX
// 0048ec08: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0048ec0d: ADD ESP,0xc
// 0048ec10: PUSH EBX
// 0048ec11: MOV dword ptr [EBX + 0xbec4],EAX
// 0048ec17: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 0048ec1c: MOV dword ptr [EBX + 0xbec8],0x0
// 0048ec26: MOV dword ptr [EBX + 0xbecc],0x0
// 0048ec30: ADD ESP,0x4
// 0048ec33: MOV dword ptr [EBX + 0xbed0],0x0
// 0048ec3d: POP ESI
// 0048ec3e: POP EBX
// 0048ec3f: RET
