// Name: core_actor.cpp_CDemonActor_startInteraction_FUN_0040a090
// Address: 0040a090
// Address Range: [[0040a090, 0040a0a9]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_startInteraction_FUN_0040a090(CDemonActor * this_ptr, CDemonActor * user)
// Globals:
//   TerminatedCString s_core_actor_cpp_006139e3
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090(CDemonActor *this_ptr,CDemonActor *user)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x598);
  return 0;
}


// Assembly code:
// 0040a090: PUSH 0x598
//   Label: core_actor.cpp_CDemonActor_startInteraction_FUN_0040a090
// 0040a095: PUSH 0x6139e3
//   XREF to: 006139e3 (DATA)
// 0040a09a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040a09e: PUSH EDX
// 0040a09f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0040a0a4: ADD ESP,0xc
// 0040a0a7: XOR EAX,EAX
// 0040a0a9: RET
