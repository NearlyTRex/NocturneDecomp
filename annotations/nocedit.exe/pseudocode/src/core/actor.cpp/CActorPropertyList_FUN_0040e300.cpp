// Name: core_actor.cpp_CActorPropertyList_FUN_0040e300
// Address: 0040e300
// Address Range: [[0040e300, 0040e324]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e300(CActorPropertyList * this_ptr)
// Cross-references:
//   core_backgnd.cpp_CBackgroundActor_FUN_00412a40 (00412a40) at 00412a9a [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 004227fe [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 00481498 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502ca0 (00502ca0) at 00502cf3 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a5f0 (0054a5f0) at 0054a762 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e8b4 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba840 (005ba840) at 005ba8eb [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e300(CActorPropertyList *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  return;
}


// Assembly code:
// 0040e300: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e300
// 0040e301: PUSH 0x0
// 0040e303: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0040e307: PUSH EDX
// 0040e308: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040e30c: PUSH ECX
// 0040e30d: PUSH 0x9
// 0040e30f: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040e313: PUSH EBX
// 0040e314: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e319: ADD ESP,0x14
// 0040e31c: MOV dword ptr [EAX + 0x5c],0x0
// 0040e323: POP EBX
// 0040e324: RET
