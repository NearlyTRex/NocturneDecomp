// Name: core_actor.cpp_CDemonActor_getCarrier_FUN_00409060
// Address: 00409060
// Address Range: [[00409060, 00409079]]
// Convention: __cdecl
// Signature: CDemonActor * core_actor.cpp_CDemonActor_getCarrier_FUN_00409060(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_0061380a
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_getCarrier_FUN_00409060(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x353);
  return (CDemonActor *)0x0;
}


// Assembly code:
// 00409060: PUSH 0x353
//   Label: core_actor.cpp_CDemonActor_getCarrier_FUN_00409060
// 00409065: PUSH 0x61380a
//   XREF to: 0061380a (DATA)
// 0040906a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040906e: PUSH EDX
// 0040906f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409074: ADD ESP,0xc
// 00409077: XOR EAX,EAX
// 00409079: RET
