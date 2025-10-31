// Name: core_actor.cpp_CActorPropertyList_FUN_0040e6a0
// Address: 0040e6a0
// Address Range: [[0040e6a0, 0040e6bd]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e6a0(CActorPropertyList * this_ptr)
// Cross-references:
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 0042288b [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050ecf0 (0050ecf0) at 0050ed11 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e6a0(CActorPropertyList *this_ptr)

{
  core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  return;
}


// Assembly code:
// 0040e6a0: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e6a0
// 0040e6a1: PUSH 0x0
// 0040e6a3: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0040e6a7: PUSH EDX
// 0040e6a8: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040e6ac: PUSH ECX
// 0040e6ad: PUSH 0x12
// 0040e6af: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040e6b3: PUSH EBX
// 0040e6b4: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e6b9: ADD ESP,0x14
// 0040e6bc: POP EBX
// 0040e6bd: RET
