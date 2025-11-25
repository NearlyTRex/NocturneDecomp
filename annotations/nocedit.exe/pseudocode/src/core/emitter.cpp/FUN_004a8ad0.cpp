// Name: core_emitter.cpp_FUN_004a8ad0
// Address: 004a8ad0
// Address Range: [[004a8ad0, 004a8b23]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a8ad0()
// Globals:
//   double DOUBLE_006240c2 = 0.5
//   double DOUBLE_006240ca = 0.100000000000000

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a8ad0(undefined4 param_1, undefined4
   param_2) */

void core_emitter_cpp_FUN_004a8ad0(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x15c);
  fVar2 = (float)DOUBLE_006240c2;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(in_stack_00000004 + 0x164) * fVar2;
  in_stack_00000008[3] = *(float *)(in_stack_00000004 + 0x15c) * fVar2;
  in_stack_00000008[4] = *(float *)(in_stack_00000004 + 0x160) + (float)DOUBLE_006240ca;
  in_stack_00000008[5] = fVar2 * *(float *)(in_stack_00000004 + 0x164);
  return;
}


// Assembly code:
// 004a8ad0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_emitter.cpp_FUN_004a8ad0
//   XREF to: Stack[0x4] (READ)
// 004a8ad4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004a8ad8: FLD float ptr [EDX + 0x15c]
// 004a8ade: FCHS
// 004a8ae0: FLD double ptr [0x006240c2]
//   XREF to: 006240c2 (READ)
// 004a8ae6: FXCH
// 004a8ae8: FMUL ST1
// 004a8aea: MOV dword ptr [EAX + 0x4],0xbdcccccd
// 004a8af1: FSTP float ptr [EAX]
// 004a8af3: FLD float ptr [EDX + 0x164]
// 004a8af9: FCHS
// 004a8afb: FMUL ST1
// 004a8afd: FSTP float ptr [EAX + 0x8]
// 004a8b00: FLD float ptr [EDX + 0x15c]
// 004a8b06: FMUL ST1
// 004a8b08: FSTP float ptr [EAX + 0xc]
// 004a8b0b: FLD float ptr [EDX + 0x160]
// 004a8b11: FADD double ptr [0x006240ca]
//   XREF to: 006240ca (READ)
// 004a8b17: FSTP float ptr [EAX + 0x10]
// 004a8b1a: FMUL float ptr [EDX + 0x164]
// 004a8b20: FSTP float ptr [EAX + 0x14]
// 004a8b23: RET
