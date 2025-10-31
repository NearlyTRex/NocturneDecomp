// Name: core_actor.cpp_CDemonActor_renderOpaque_FUN_00408aa0
// Address: 00408aa0
// Address Range: [[00408aa0, 00408ab9]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_renderOpaque_FUN_00408aa0(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_00613593
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_renderOpaque_FUN_00408aa0(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x1e8);
  return 0;
}


// Assembly code:
// 00408aa0: PUSH 0x1e8
//   Label: core_actor.cpp_CDemonActor_renderOpaque_FUN_00408aa0
// 00408aa5: PUSH 0x613593
//   XREF to: 00613593 (DATA)
// 00408aaa: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00408aae: PUSH EDX
// 00408aaf: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408ab4: ADD ESP,0xc
// 00408ab7: XOR EAX,EAX
// 00408ab9: RET
