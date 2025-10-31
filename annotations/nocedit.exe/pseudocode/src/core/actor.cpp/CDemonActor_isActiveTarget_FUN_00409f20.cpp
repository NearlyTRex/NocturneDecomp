// Name: core_actor.cpp_CDemonActor_isActiveTarget_FUN_00409f20
// Address: 00409f20
// Address Range: [[00409f20, 00409f39]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_isActiveTarget_FUN_00409f20(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_00613916
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_isActiveTarget_FUN_00409f20(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x530);
  return 0;
}


// Assembly code:
// 00409f20: PUSH 0x530
//   Label: core_actor.cpp_CDemonActor_isActiveTarget_FUN_00409f20
// 00409f25: PUSH 0x613916
//   XREF to: 00613916 (DATA)
// 00409f2a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00409f2e: PUSH EDX
// 00409f2f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409f34: ADD ESP,0xc
// 00409f37: XOR EAX,EAX
// 00409f39: RET
