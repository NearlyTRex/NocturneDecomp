// Name: core_actor.cpp_CDemonActor_getPathMap_FUN_004090a0
// Address: 004090a0
// Address Range: [[004090a0, 004090b9]]
// Convention: __cdecl
// Signature: CPathMap * core_actor.cpp_CDemonActor_getPathMap_FUN_004090a0(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_0061382e
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

CPathMap * __cdecl core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x36c);
  return (CPathMap *)0x0;
}


// Assembly code:
// 004090a0: PUSH 0x36c
//   Label: core_actor.cpp_CDemonActor_getPathMap_FUN_004090a0
// 004090a5: PUSH 0x61382e
//   XREF to: 0061382e (DATA)
// 004090aa: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004090ae: PUSH EDX
// 004090af: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 004090b4: ADD ESP,0xc
// 004090b7: XOR EAX,EAX
// 004090b9: RET
