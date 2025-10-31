// Name: core_flame.cpp_FUN_004cac00
// Address: 004cac00
// Address Range: [[004cac00, 004cac53]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004cac00()
// Globals:
//   double DOUBLE_0062a146 = 0.5
//   double DOUBLE_0062a14e = 0.100000000000000

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cac00(undefined4 param_1, undefined4 param_2)
    */

void core_flame_cpp_FUN_004cac00(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x158);
  fVar2 = (float)DOUBLE_0062a146;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(in_stack_00000004 + 0x160) * fVar2;
  in_stack_00000008[3] = *(float *)(in_stack_00000004 + 0x158) * fVar2;
  in_stack_00000008[4] = *(float *)(in_stack_00000004 + 0x15c) + (float)DOUBLE_0062a14e;
  in_stack_00000008[5] = fVar2 * *(float *)(in_stack_00000004 + 0x160);
  return;
}


// Assembly code:
// 004cac00: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_flame.cpp_FUN_004cac00
//   XREF to: Stack[0x4] (READ)
// 004cac04: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004cac08: FLD float ptr [EDX + 0x158]
// 004cac0e: FCHS
// 004cac10: FLD double ptr [0x0062a146]
//   XREF to: 0062a146 (READ)
// 004cac16: FXCH
// 004cac18: FMUL ST1
// 004cac1a: MOV dword ptr [EAX + 0x4],0xbdcccccd
// 004cac21: FSTP float ptr [EAX]
// 004cac23: FLD float ptr [EDX + 0x160]
// 004cac29: FCHS
// 004cac2b: FMUL ST1
// 004cac2d: FSTP float ptr [EAX + 0x8]
// 004cac30: FLD float ptr [EDX + 0x158]
// 004cac36: FMUL ST1
// 004cac38: FSTP float ptr [EAX + 0xc]
// 004cac3b: FLD float ptr [EDX + 0x15c]
// 004cac41: FADD double ptr [0x0062a14e]
//   XREF to: 0062a14e (READ)
// 004cac47: FSTP float ptr [EAX + 0x10]
// 004cac4a: FMUL float ptr [EDX + 0x160]
// 004cac50: FSTP float ptr [EAX + 0x14]
// 004cac53: RET
