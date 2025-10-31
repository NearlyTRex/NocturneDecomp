// Name: core_stone.cpp_FUN_005bad40
// Address: 005bad40
// Address Range: [[005bad40, 005bad64]]
// Convention: unknown
// Signature: undefined core_stone.cpp_FUN_005bad40()
// Globals:
//   TerminatedCString s_destActor_0065315a
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_boxactor.cpp_CBoxActor_load_FUN_00422060

#include "nocturne.h"

/* Signature: undefined1 actors_other_stone.cpp_FUN_005bad40(undefined4 param_1) */

void core_stone_cpp_FUN_005bad40(void)

{
  int in_stack_00000008;
  
  core_boxactor_cpp_CBoxActor_load_FUN_00422060();
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(in_stack_00000008 + 0x66c),"destActor");
  return;
}


// Assembly code:
// 005bad40: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_stone.cpp_FUN_005bad40
//   XREF to: Stack[0x4] (READ)
// 005bad44: PUSH EDX
// 005bad45: CALL core_boxactor.cpp_CBoxActor_load_FUN_00422060
//   XREF to: 00422060 (UNCONDITIONAL_CALL)
// 005bad4a: ADD ESP,0x4
// 005bad4d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005bad51: PUSH 0x65315a
//   XREF to: 0065315a (DATA)
// 005bad56: ADD EAX,0x66c
// 005bad5b: PUSH EAX
// 005bad5c: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005bad61: ADD ESP,0x8
// 005bad64: RET
