// Name: core_actor.cpp_CDemonActor_allowBulletHoles_FUN_004098a0
// Address: 004098a0
// Address Range: [[004098a0, 004098b9]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_allowBulletHoles_FUN_004098a0(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_006138aa
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x4b0);
  return 0;
}


// Assembly code:
// 004098a0: PUSH 0x4b0
//   Label: core_actor.cpp_CDemonActor_allowBulletHoles_FUN_004098a0
// 004098a5: PUSH 0x6138aa
//   XREF to: 006138aa (DATA)
// 004098aa: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004098ae: PUSH EDX
// 004098af: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 004098b4: ADD ESP,0xc
// 004098b7: XOR EAX,EAX
// 004098b9: RET
