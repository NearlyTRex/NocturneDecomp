// Name: core_actor.cpp_CDemonActor_renderTransparent_FUN_00408ac0
// Address: 00408ac0
// Address Range: [[00408ac0, 00408ad9]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_renderTransparent_FUN_00408ac0(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_006135a5
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x1f6);
  return 0;
}


// Assembly code:
// 00408ac0: PUSH 0x1f6
//   Label: core_actor.cpp_CDemonActor_renderTransparent_FUN_00408ac0
// 00408ac5: PUSH 0x6135a5
//   XREF to: 006135a5 (DATA)
// 00408aca: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00408ace: PUSH EDX
// 00408acf: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408ad4: ADD ESP,0xc
// 00408ad7: XOR EAX,EAX
// 00408ad9: RET
