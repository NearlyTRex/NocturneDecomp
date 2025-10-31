// Name: core_actor.cpp_CDemonActor_getGroundType_FUN_00408d90
// Address: 00408d90
// Address Range: [[00408d90, 00408da9]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_getGroundType_FUN_00408d90(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_006137b0
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x2a9);
  return 0;
}


// Assembly code:
// 00408d90: PUSH 0x2a9
//   Label: core_actor.cpp_CDemonActor_getGroundType_FUN_00408d90
// 00408d95: PUSH 0x6137b0
//   XREF to: 006137b0 (DATA)
// 00408d9a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00408d9e: PUSH EDX
// 00408d9f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408da4: ADD ESP,0xc
// 00408da7: XOR EAX,EAX
// 00408da9: RET
