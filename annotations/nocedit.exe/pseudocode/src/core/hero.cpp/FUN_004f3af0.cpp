// Name: core_hero.cpp_FUN_004f3af0
// Address: 004f3af0
// Address Range: [[004f3af0, 004f3b15]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3af0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_00428e30

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f3af0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void core_hero_cpp_FUN_004f3af0(void)

{
  CCharacter *in_stack_00000004;
  
  in_stack_00000004[1].base_actor.actor_name[0] = '\0';
  in_stack_00000004[1].base_actor.actor_name[1] = '\0';
  in_stack_00000004[1].base_actor.actor_name[2] = '\0';
  in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  core_charactr_cpp_CCharacter_FUN_00428e30(in_stack_00000004);
  return;
}


// Assembly code:
// 004f3af0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_hero.cpp_FUN_004f3af0
//   XREF to: Stack[0x4] (READ)
// 004f3af4: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 004f3af8: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 004f3afc: PUSH EDX
// 004f3afd: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004f3b01: PUSH ECX
// 004f3b02: PUSH EAX
// 004f3b03: MOV dword ptr [EAX + 0xbe24],0x0
// 004f3b0d: CALL core_charactr.cpp_CCharacter_FUN_00428e30
//   XREF to: 00428e30 (UNCONDITIONAL_CALL)
// 004f3b12: ADD ESP,0x10
// 004f3b15: RET
