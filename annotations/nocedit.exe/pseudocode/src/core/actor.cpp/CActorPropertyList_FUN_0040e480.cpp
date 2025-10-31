// Name: core_actor.cpp_CActorPropertyList_FUN_0040e480
// Address: 0040e480
// Address Range: [[0040e480, 0040e49d]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
// Cross-references:
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 00422867 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f730 (0042f730) at 0042f7a0 [UNCONDITIONAL_CALL]
//   core_dest.cpp_FUN_0046fe80 (0046fe80) at 0046febf [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 004814c2 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f69c0 (004f69c0) at 004f6a88 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505240 (00505240) at 005052a8 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e0f70 (005e0f70) at 005e0fa7 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList *this_ptr)

{
  core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  return;
}


// Assembly code:
// 0040e480: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e480
// 0040e481: PUSH 0x0
// 0040e483: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0040e487: PUSH EDX
// 0040e488: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040e48c: PUSH ECX
// 0040e48d: PUSH 0xc
// 0040e48f: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040e493: PUSH EBX
// 0040e494: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e499: ADD ESP,0x14
// 0040e49c: POP EBX
// 0040e49d: RET
