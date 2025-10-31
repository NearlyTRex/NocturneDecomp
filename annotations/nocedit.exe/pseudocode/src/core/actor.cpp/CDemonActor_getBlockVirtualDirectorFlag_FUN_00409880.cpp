// Name: core_actor.cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880
// Address: 00409880
// Address Range: [[00409880, 00409899]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_00613898
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x4a5);
  return 0;
}


// Assembly code:
// 00409880: PUSH 0x4a5
//   Label: core_actor.cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880
// 00409885: PUSH 0x613898
//   XREF to: 00613898 (DATA)
// 0040988a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040988e: PUSH EDX
// 0040988f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409894: ADD ESP,0xc
// 00409897: XOR EAX,EAX
// 00409899: RET
