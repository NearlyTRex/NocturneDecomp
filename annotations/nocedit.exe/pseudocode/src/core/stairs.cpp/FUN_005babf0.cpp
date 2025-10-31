// Name: core_stairs.cpp_FUN_005babf0
// Address: 005babf0
// Address Range: [[005babf0, 005bac02]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005babf0()
// Function calls:
//   core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005babf0(undefined4 param_1, undefined4
   param_2) */

void core_stairs_cpp_FUN_005babf0(void)

{
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000(in_stack_00000004,in_stack_00000008);
  return;
}


// Assembly code:
// 005babf0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_stairs.cpp_FUN_005babf0
//   XREF to: Stack[0x8] (READ)
// 005babf4: PUSH EDX
// 005babf5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005babf9: PUSH ECX
// 005babfa: CALL core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
//   XREF to: 0040d000 (UNCONDITIONAL_CALL)
// 005babff: ADD ESP,0x8
// 005bac02: RET
