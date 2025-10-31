// Name: core_actor.cpp_CDemonActor_canPickup_FUN_00409000
// Address: 00409000
// Address Range: [[00409000, 00409019]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_canPickup_FUN_00409000(CDemonActor * this_ptr, CDemonActor * picker)
// Globals:
//   TerminatedCString s_core_actor_cpp_006137d4
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_canPickup_FUN_00409000(CDemonActor *this_ptr,CDemonActor *picker)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x330);
  return 0;
}


// Assembly code:
// 00409000: PUSH 0x330
//   Label: core_actor.cpp_CDemonActor_canPickup_FUN_00409000
// 00409005: PUSH 0x6137d4
//   XREF to: 006137d4 (DATA)
// 0040900a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040900e: PUSH EDX
// 0040900f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409014: ADD ESP,0xc
// 00409017: XOR EAX,EAX
// 00409019: RET
