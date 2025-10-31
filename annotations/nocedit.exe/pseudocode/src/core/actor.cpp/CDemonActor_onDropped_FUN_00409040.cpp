// Name: core_actor.cpp_CDemonActor_onDropped_FUN_00409040
// Address: 00409040
// Address Range: [[00409040, 00409057]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_onDropped_FUN_00409040(CDemonActor * this_ptr, CVector3f * drop_position)
// Globals:
//   TerminatedCString s_core_actor_cpp_006137f8
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_onDropped_FUN_00409040(CDemonActor *this_ptr,CVector3f *drop_position)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x348);
  return;
}


// Assembly code:
// 00409040: PUSH 0x348
//   Label: core_actor.cpp_CDemonActor_onDropped_FUN_00409040
// 00409045: PUSH 0x6137f8
//   XREF to: 006137f8 (DATA)
// 0040904a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040904e: PUSH EDX
// 0040904f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409054: ADD ESP,0xc
// 00409057: RET
