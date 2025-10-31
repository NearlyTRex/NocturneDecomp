// Name: core_stone.cpp_FUN_005badd0
// Address: 005badd0
// Address Range: [[005badd0, 005bae09]]
// Convention: unknown
// Signature: undefined core_stone.cpp_FUN_005badd0()
// Globals:
//   TerminatedCString s_CActorDestination_0065316a
//   TerminatedCString s_Our_destination_0065317c
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_boxactor.cpp_FUN_004226e0

#include "nocturne.h"

/* Signature: undefined1 actors_other_stone.cpp_FUN_005badd0(undefined4 param_1, undefined4 param_2)
    */

void core_stone_cpp_FUN_005badd0(void)

{
  CActorPropertyList *in_stack_0000000c;
  
  core_boxactor_cpp_FUN_004226e0();
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_0000000c);
  return;
}


// Assembly code:
// 005badd0: PUSH EBX
//   Label: core_stone.cpp_FUN_005badd0
// 005badd1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005badd5: PUSH EDX
// 005badd6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005badda: PUSH ECX
// 005baddb: CALL core_boxactor.cpp_FUN_004226e0
//   XREF to: 004226e0 (UNCONDITIONAL_CALL)
// 005bade0: ADD ESP,0x8
// 005bade3: PUSH 0x0
// 005bade5: PUSH 0x65316a
//   XREF to: 0065316a (DATA)
// 005badea: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005badee: PUSH 0x1
// 005badf0: ADD EAX,0x66c
// 005badf5: PUSH EAX
// 005badf6: PUSH 0x65317c
//   XREF to: 0065317c (DATA)
// 005badfb: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005badff: PUSH EBX
// 005bae00: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005bae05: ADD ESP,0x18
// 005bae08: POP EBX
// 005bae09: RET
