// Name: core_conveyor.cpp_FUN_004420d0
// Address: 004420d0
// Address Range: [[004420d0, 00442123]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_004420d0()
// Globals:
//   double DOUBLE_00618e7b = 0.5
//   double DOUBLE_00618e83 = 0.100000000000000

#include "nocturne.h"

/* Signature: undefined1 actors_other_conveyor.cpp_FUN_004420d0(undefined4 param_1, undefined4
   param_2) */

void core_conveyor_cpp_FUN_004420d0(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x72c);
  fVar2 = (float)DOUBLE_00618e7b;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(in_stack_00000004 + 0x734) * fVar2;
  in_stack_00000008[3] = *(float *)(in_stack_00000004 + 0x72c) * fVar2;
  in_stack_00000008[4] = *(float *)(in_stack_00000004 + 0x730) + (float)DOUBLE_00618e83;
  in_stack_00000008[5] = fVar2 * *(float *)(in_stack_00000004 + 0x734);
  return;
}


// Assembly code:
// 004420d0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_conveyor.cpp_FUN_004420d0
//   XREF to: Stack[0x4] (READ)
// 004420d4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004420d8: FLD float ptr [EDX + 0x72c]
// 004420de: FCHS
// 004420e0: FLD double ptr [0x00618e7b]
//   XREF to: 00618e7b (READ)
// 004420e6: FXCH
// 004420e8: FMUL ST1
// 004420ea: MOV dword ptr [EAX + 0x4],0xbdcccccd
// 004420f1: FSTP float ptr [EAX]
// 004420f3: FLD float ptr [EDX + 0x734]
// 004420f9: FCHS
// 004420fb: FMUL ST1
// 004420fd: FSTP float ptr [EAX + 0x8]
// 00442100: FLD float ptr [EDX + 0x72c]
// 00442106: FMUL ST1
// 00442108: FSTP float ptr [EAX + 0xc]
// 0044210b: FLD float ptr [EDX + 0x730]
// 00442111: FADD double ptr [0x00618e83]
//   XREF to: 00618e83 (READ)
// 00442117: FSTP float ptr [EAX + 0x10]
// 0044211a: FMUL float ptr [EDX + 0x734]
// 00442120: FSTP float ptr [EAX + 0x14]
// 00442123: RET
