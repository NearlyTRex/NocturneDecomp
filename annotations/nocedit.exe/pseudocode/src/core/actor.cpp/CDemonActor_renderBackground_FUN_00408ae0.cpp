// Name: core_actor.cpp_CDemonActor_renderBackground_FUN_00408ae0
// Address: 00408ae0
// Address Range: [[00408ae0, 00408af7]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_renderBackground_FUN_00408ae0(CDemonActor * this_ptr, int layer_flag)
// Globals:
//   TerminatedCString s_core_actor_cpp_006135b7
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0(CDemonActor *this_ptr,int layer_flag)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x201);
  return;
}


// Assembly code:
// 00408ae0: PUSH 0x201
//   Label: core_actor.cpp_CDemonActor_renderBackground_FUN_00408ae0
// 00408ae5: PUSH 0x6135b7
//   XREF to: 006135b7 (DATA)
// 00408aea: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00408aee: PUSH EDX
// 00408aef: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408af4: ADD ESP,0xc
// 00408af7: RET
