// Name: core_actor.cpp_CDemonActor_pickup_FUN_00409020
// Address: 00409020
// Address Range: [[00409020, 00409037]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_pickup_FUN_00409020(CDemonActor * this_ptr, CDemonActor * carrier)
// Globals:
//   TerminatedCString s_core_actor_cpp_006137e6
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_pickup_FUN_00409020(CDemonActor *this_ptr,CDemonActor *carrier)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x33d);
  return;
}


// Assembly code:
// 00409020: PUSH 0x33d
//   Label: core_actor.cpp_CDemonActor_pickup_FUN_00409020
// 00409025: PUSH 0x6137e6
//   XREF to: 006137e6 (DATA)
// 0040902a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040902e: PUSH EDX
// 0040902f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409034: ADD ESP,0xc
// 00409037: RET
