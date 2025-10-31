// Name: core_actor.cpp_CDemonActor_stopUsing_FUN_0040a0d0
// Address: 0040a0d0
// Address Range: [[0040a0d0, 0040a0e7]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_stopUsing_FUN_0040a0d0(CDemonActor * this_ptr, CDemonActor * user)
// Globals:
//   TerminatedCString s_core_actor_cpp_00613a07
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0(CDemonActor *this_ptr,CDemonActor *user)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5a2);
  return;
}


// Assembly code:
// 0040a0d0: PUSH 0x5a2
//   Label: core_actor.cpp_CDemonActor_stopUsing_FUN_0040a0d0
// 0040a0d5: PUSH 0x613a07
//   XREF to: 00613a07 (DATA)
// 0040a0da: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040a0de: PUSH EDX
// 0040a0df: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0040a0e4: ADD ESP,0xc
// 0040a0e7: RET
