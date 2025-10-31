// Name: core_minecar.cpp_FUN_00520eb0
// Address: 00520eb0
// Address Range: [[00520eb0, 00520f1e]]
// Convention: unknown
// Signature: undefined core_minecar.cpp_FUN_00520eb0()
// Globals:
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_platfrm.cpp_FUN_0054cc30

#include "nocturne.h"

/* Signature: undefined1 actors_other_minecar.cpp_FUN_00520eb0(undefined4 param_1, undefined4
   param_2) */

void core_minecar_cpp_FUN_00520eb0(void)

{
  int in_stack_00000004;
  float in_stack_0000000c;
  
  core_platfrm_cpp_FUN_0054cc30();
  if (((*(int *)(in_stack_00000004 + 0x2d4) == 3) || (*(int *)(in_stack_00000004 + 0x2d4) == 4)) &&
     (in_stack_0000000c = *(float *)(in_stack_00000004 + 0x72c) - in_stack_0000000c,
     *(float *)(in_stack_00000004 + 0x72c) = in_stack_0000000c, in_stack_0000000c < 0.0)) {
    *(undefined4 *)(in_stack_00000004 + 0x72c) = 0x3dcccccd;
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    return;
  }
  return;
}


// Assembly code:
// 00520eb0: PUSH EBX
//   Label: core_minecar.cpp_FUN_00520eb0
// 00520eb1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00520eb5: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00520eb9: PUSH EBX
// 00520eba: CALL core_platfrm.cpp_FUN_0054cc30
//   XREF to: 0054cc30 (UNCONDITIONAL_CALL)
// 00520ebf: MOV EDX,dword ptr [EBX + 0x2d4]
// 00520ec5: ADD ESP,0x8
// 00520ec8: CMP EDX,0x3
// 00520ecb: JZ 0x00520ed2
//   XREF to: 00520ed2 (CONDITIONAL_JUMP)
// 00520ecd: CMP EDX,0x4
// 00520ed0: JNZ 0x00520eeb
//   XREF to: 00520eeb (CONDITIONAL_JUMP)
// 00520ed2: FLD float ptr [EBX + 0x72c]
//   Label: LAB_00520ed2
// 00520ed8: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00520edc: FST float ptr [EBX + 0x72c]
// 00520ee2: FLDZ
// 00520ee4: FCOMPP
// 00520ee6: FNSTSW AX
// 00520ee8: SAHF
// 00520ee9: JA 0x00520eed
//   XREF to: 00520eed (CONDITIONAL_JUMP)
// 00520eeb: POP EBX
//   Label: LAB_00520eeb
// 00520eec: RET
// 00520eed: PUSH 0xffff
//   Label: LAB_00520eed
// 00520ef2: PUSH 0x0
// 00520ef4: PUSH 0x10000
// 00520ef9: PUSH 0x4000
// 00520efe: PUSH 0x0
// 00520f00: ADD EBX,0x20
// 00520f03: PUSH EBX
// 00520f04: MOV dword ptr [EBX + 0x70c],0x3dcccccd
// 00520f0e: MOV EBX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 00520f14: PUSH EBX
//   XREF to: 02d12db0 (DATA)
// 00520f15: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 00520f1a: ADD ESP,0x1c
// 00520f1d: POP EBX
// 00520f1e: RET
