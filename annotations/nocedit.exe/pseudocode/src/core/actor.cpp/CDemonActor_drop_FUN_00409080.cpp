// Name: core_actor.cpp_CDemonActor_drop_FUN_00409080
// Address: 00409080
// Address Range: [[00409080, 00409097]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_drop_FUN_00409080(CDemonActor * this_ptr, CDemonActor * carrier, CVector3f * drop_position)
// Globals:
//   TerminatedCString s_core_actor_cpp_0061381c
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_drop_FUN_00409080
          (CDemonActor *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x360);
  return;
}


// Assembly code:
// 00409080: PUSH 0x360
//   Label: core_actor.cpp_CDemonActor_drop_FUN_00409080
// 00409085: PUSH 0x61381c
//   XREF to: 0061381c (DATA)
// 0040908a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040908e: PUSH EDX
// 0040908f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409094: ADD ESP,0xc
// 00409097: RET
