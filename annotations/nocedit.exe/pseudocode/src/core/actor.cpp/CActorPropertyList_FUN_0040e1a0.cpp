// Name: core_actor.cpp_CActorPropertyList_FUN_0040e1a0
// Address: 0040e1a0
// Address Range: [[0040e1a0, 0040e1de]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 (0040d290) at 0040d31d [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 00422722 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8db0 (004a8db0) at 004a8fac [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_FUN_004aa170 (004aa170) at 004aa221 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee9e0 (004ee9e0) at 004eea21 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f2040 (004f2040) at 004f2098 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050ecf0 (0050ecf0) at 0050ed72 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e92b [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e0f70 (005e0f70) at 005e108a [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e3ca0 (005e3ca0) at 005e3d73 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f20d0 (005f20d0) at 005f2186 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList *this_ptr)

{
  int iVar1;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(this_ptr);
  *(undefined4 *)(iVar1 + 0x5c) = 1;
  *(undefined4 *)(iVar1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x60) = in_stack_00000014;
  *(undefined4 *)(iVar1 + 100) = in_stack_00000018;
  return;
}


// Assembly code:
// 0040e1a0: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e1a0
// 0040e1a1: PUSH ESI
// 0040e1a2: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 0040e1a6: PUSH EDX
// 0040e1a7: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040e1ab: PUSH ECX
// 0040e1ac: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040e1b0: PUSH EBX
// 0040e1b1: PUSH 0x1
// 0040e1b3: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0040e1b7: PUSH ESI
// 0040e1b8: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e1bd: MOV dword ptr [EAX + 0x5c],0x1
// 0040e1c4: ADD ESP,0x14
// 0040e1c7: MOV dword ptr [EAX + 0x6c],0x3f800000
// 0040e1ce: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0040e1d2: MOV dword ptr [EAX + 0x60],EDX
// 0040e1d5: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 0040e1d9: MOV dword ptr [EAX + 0x64],EDX
// 0040e1dc: POP ESI
// 0040e1dd: POP EBX
// 0040e1de: RET
