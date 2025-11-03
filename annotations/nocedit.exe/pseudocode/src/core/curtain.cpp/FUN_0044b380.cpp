// Name: core_curtain.cpp_FUN_0044b380
// Address: 0044b380
// Address Range: [[0044b380, 0044b3d3]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044b380()
// Globals:
//   double DOUBLE_00619c4a = 0.5
//   double DOUBLE_00619c52 = 0.100000000000000

#include "nocturne.h"

/* Signature: undefined1 actors_other_curtain.cpp_FUN_0044b380(undefined4 param_1, undefined4
   param_2) */

void core_curtain_cpp_FUN_0044b380(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x158);
  fVar2 = (float)DOUBLE_00619c4a;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(in_stack_00000004 + 0x160) * fVar2;
  in_stack_00000008[3] = *(float *)(in_stack_00000004 + 0x158) * fVar2;
  in_stack_00000008[4] = *(float *)(in_stack_00000004 + 0x15c) + (float)DOUBLE_00619c52;
  in_stack_00000008[5] = fVar2 * *(float *)(in_stack_00000004 + 0x160);
  return;
}


// Assembly code:
// 0044b380: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_curtain.cpp_FUN_0044b380
//   XREF to: Stack[0x4] (READ)
// 0044b384: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0044b388: FLD float ptr [EDX + 0x158]
// 0044b38e: FCHS
// 0044b390: FLD double ptr [0x00619c4a]
//   XREF to: 00619c4a (READ)
// 0044b396: FXCH
// 0044b398: FMUL ST1
// 0044b39a: MOV dword ptr [EAX + 0x4],0xbdcccccd
// 0044b3a1: FSTP float ptr [EAX]
// 0044b3a3: FLD float ptr [EDX + 0x160]
// 0044b3a9: FCHS
// 0044b3ab: FMUL ST1
// 0044b3ad: FSTP float ptr [EAX + 0x8]
// 0044b3b0: FLD float ptr [EDX + 0x158]
// 0044b3b6: FMUL ST1
// 0044b3b8: FSTP float ptr [EAX + 0xc]
// 0044b3bb: FLD float ptr [EDX + 0x15c]
// 0044b3c1: FADD double ptr [0x00619c52]
//   XREF to: 00619c52 (READ)
// 0044b3c7: FSTP float ptr [EAX + 0x10]
// 0044b3ca: FMUL float ptr [EDX + 0x160]
// 0044b3d0: FSTP float ptr [EAX + 0x14]
// 0044b3d3: RET
