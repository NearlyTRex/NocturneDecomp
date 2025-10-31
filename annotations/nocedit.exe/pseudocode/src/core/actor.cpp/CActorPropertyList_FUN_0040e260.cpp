// Name: core_actor.cpp_CActorPropertyList_FUN_0040e260
// Address: 0040e260
// Address Range: [[0040e260, 0040e289]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e260(CActorPropertyList * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 (0040d290) at 0040d2d3 [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_FUN_00414400 (00414400) at 00414423 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_FUN_004234e0 (004234e0) at 00423553 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 00422751 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442130 (00442130) at 00442192 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8db0 (004a8db0) at 004a8ee3 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_00589310 (00589310) at 005893b3 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e8ba0 (005e8ba0) at 005e8c61 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e260(CActorPropertyList *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  return;
}


// Assembly code:
// 0040e260: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e260
// 0040e261: PUSH ESI
// 0040e262: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0040e266: PUSH EDX
// 0040e267: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040e26b: PUSH ECX
// 0040e26c: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040e270: PUSH EBX
// 0040e271: PUSH 0x2
// 0040e273: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0040e277: PUSH ESI
// 0040e278: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e27d: ADD ESP,0x14
// 0040e280: MOV dword ptr [EAX + 0x5c],0x0
// 0040e287: POP ESI
// 0040e288: POP EBX
// 0040e289: RET
