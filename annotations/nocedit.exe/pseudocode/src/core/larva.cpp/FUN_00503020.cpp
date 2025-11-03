// Name: core_larva.cpp_FUN_00503020
// Address: 00503020
// Address Range: [[00503020, 0050305f]]
// Convention: unknown
// Signature: undefined core_larva.cpp_FUN_00503020()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_larva.cpp_FUN_00503020(undefined4 param_1) */

void core_larva_cpp_FUN_00503020(void)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  float fVar2;
  CEnemy *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(this_ptr);
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->base_actor).actor_name[8] = '\0';
  (pCVar1->base_actor).actor_name[9] = '\0';
  (pCVar1->base_actor).actor_name[10] = '\0';
  (pCVar1->base_actor).actor_name[0xb] = '\0';
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,30.0);
  *(float *)in_stack_00000004->field6_0xbe38 = fVar2;
  return;
}


// Assembly code:
// 00503020: PUSH EBX
//   Label: core_larva.cpp_FUN_00503020
// 00503021: PUSH ESI
// 00503022: SUB ESP,0x4
// 00503025: MOV ESI,dword ptr [ESP + 0x10]
// 00503029: LEA EBX,[ESI + 0x158]
// 0050302f: PUSH EBX
// 00503030: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 00503035: ADD ESP,0x4
// 00503038: PUSH EBX
// 00503039: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0050303e: ADD ESP,0x4
// 00503041: PUSH ESI
// 00503042: MOV dword ptr [ESI + 0xbebc],0x0
// 0050304c: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 00503051: ADD ESP,0x4
// 00503054: PUSH 0x41f00000
// 00503059: PUSH 0x0
// 0050305b: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
