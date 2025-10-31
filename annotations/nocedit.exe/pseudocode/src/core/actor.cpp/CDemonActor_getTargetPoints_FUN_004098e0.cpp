// Name: core_actor.cpp_CDemonActor_getTargetPoints_FUN_004098e0
// Address: 004098e0
// Address Range: [[004098e0, 004098f9]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_getTargetPoints_FUN_004098e0(CDemonActor * this_ptr, CVector3f * out_points_array)
// Globals:
//   TerminatedCString s_core_actor_cpp_006138ce
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0
          (CDemonActor *this_ptr,CVector3f *out_points_array)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x4c8);
  return 0;
}


// Assembly code:
// 004098e0: PUSH 0x4c8
//   Label: core_actor.cpp_CDemonActor_getTargetPoints_FUN_004098e0
// 004098e5: PUSH 0x6138ce
//   XREF to: 006138ce (DATA)
// 004098ea: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004098ee: PUSH EDX
// 004098ef: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 004098f4: ADD ESP,0xc
// 004098f7: XOR EAX,EAX
// 004098f9: RET
