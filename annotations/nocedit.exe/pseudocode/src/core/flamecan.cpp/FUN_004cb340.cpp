// Name: core_flamecan.cpp_FUN_004cb340
// Address: 004cb340
// Address Range: [[004cb340, 004cb38f]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb340()
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040aa8b [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_FUN_004c4c00 (004c4c00) at 004c4d3c [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb390 (004cb390) at 004cb3c1 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f0814 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056bc89 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005de014 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3c1c [UNCONDITIONAL_CALL]
// Globals:
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_fire.cpp_CFireEffect_FUN_004c79d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cb340(undefined4 param_1) */

void core_flamecan_cpp_FUN_004cb340(void)

{
  int iVar1;
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x2d4) = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
  } while (iVar1 < 5);
  *(undefined4 *)(in_stack_00000004 + 0x4f4) = 1;
  return;
}


// Assembly code:
// 004cb340: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cb340
// 004cb341: PUSH ESI
// 004cb342: PUSH EDI
// 004cb343: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004cb347: LEA ESI,[EDI + 0x360]
// 004cb34d: MOV dword ptr [EDI + 0x2d4],0x1
// 004cb357: XOR EBX,EBX
// 004cb359: PUSH 0xffff
//   Label: LAB_004cb359
// 004cb35e: PUSH 0x0
// 004cb360: PUSH 0x4000
// 004cb365: PUSH 0x4000
// 004cb36a: PUSH 0x0
// 004cb36c: PUSH ESI
// 004cb36d: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004cb373: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 004cb374: INC EBX
// 004cb375: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004cb37a: ADD ESP,0x1c
// 004cb37d: CMP EBX,0x5
// 004cb380: JL 0x004cb359
//   XREF to: 004cb359 (CONDITIONAL_JUMP)
// 004cb382: MOV dword ptr [EDI + 0x4f4],0x1
// 004cb38c: POP EDI
// 004cb38d: POP ESI
// 004cb38e: POP EBX
// 004cb38f: RET
