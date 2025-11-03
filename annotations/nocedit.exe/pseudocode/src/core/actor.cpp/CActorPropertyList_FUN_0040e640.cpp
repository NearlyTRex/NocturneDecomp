// Name: core_actor.cpp_CActorPropertyList_FUN_0040e640
// Address: 0040e640
// Address Range: [[0040e640, 0040e66b]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
// Cross-references:
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 00422797 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f730 (0042f730) at 0042f7ea [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 00481360 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8db0 (004a8db0) at 004a8f8a [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004cae70 (004cae70) at 004cae98 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505240 (00505240) at 0050534f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b3e0 (0050b3e0) at 0050b434 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c3e0 (0050c3e0) at 0050c438 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050ecf0 (0050ecf0) at 0050eda3 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8e90 (005b8e90) at 005b8eeb [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e0f70 (005e0f70) at 005e0fc3 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e3ca0 (005e3ca0) at 005e3cc8 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9c00 (005e9c00) at 005e9cf8 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb940 (005eb940) at 005eba2f [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee9f0 (005ee9f0) at 005eea2f [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  undefined4 in_stack_00000010;
  void *in_stack_00000014;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,0xf,in_stack_00000008,in_stack_00000014,(void *)0x0);
  *(undefined4 *)(iVar1 + 0x5c) = in_stack_00000010;
  *(void **)(iVar1 + 0x60) = in_stack_00000014;
  return;
}


// Assembly code:
// 0040e640: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e640
// 0040e641: PUSH 0x0
// 0040e643: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 0040e647: PUSH EDX
// 0040e648: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040e64c: PUSH ECX
// 0040e64d: PUSH 0xf
// 0040e64f: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040e653: PUSH EBX
// 0040e654: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e659: ADD ESP,0x14
// 0040e65c: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0040e660: MOV dword ptr [EAX + 0x5c],EDX
// 0040e663: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0040e667: MOV dword ptr [EAX + 0x60],EDX
// 0040e66a: POP EBX
// 0040e66b: RET
