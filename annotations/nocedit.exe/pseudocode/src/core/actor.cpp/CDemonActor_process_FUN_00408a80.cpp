// Name: core_actor.cpp_CDemonActor_process_FUN_00408a80
// Address: 00408a80
// Address Range: [[00408a80, 00408a97]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_process_FUN_00408a80(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_00613581
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_process_FUN_00408a80(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x1dc);
  return;
}


// Assembly code:
// 00408a80: PUSH 0x1dc
//   Label: core_actor.cpp_CDemonActor_process_FUN_00408a80
// 00408a85: PUSH 0x613581
//   XREF to: 00613581 (DATA)
// 00408a8a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00408a8e: PUSH EDX
// 00408a8f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408a94: ADD ESP,0xc
// 00408a97: RET
