// Name: core_actor.cpp_CDemonActor_updateCollisionData_FUN_004098c0
// Address: 004098c0
// Address Range: [[004098c0, 004098d7]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_updateCollisionData_FUN_004098c0(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_006138bc
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x4be);
  return;
}


// Assembly code:
// 004098c0: PUSH 0x4be
//   Label: core_actor.cpp_CDemonActor_updateCollisionData_FUN_004098c0
// 004098c5: PUSH 0x6138bc
//   XREF to: 006138bc (DATA)
// 004098ca: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004098ce: PUSH EDX
// 004098cf: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 004098d4: ADD ESP,0xc
// 004098d7: RET
