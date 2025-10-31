// Name: core_flies.cpp_FUN_004cc700
// Address: 004cc700
// Address Range: [[004cc700, 004cc74f]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cc700()
// Globals:
//   double DOUBLE_0062a446 = -0.5
//   double DOUBLE_0062a44e = 0.5

#include "nocturne.h"

/* Signature: undefined1 actors_other_flies.cpp_FUN_004cc700(undefined4 param_1, undefined4 param_2)
    */

void core_flies_cpp_FUN_004cc700(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  in_stack_00000008[1] = 0.0;
  in_stack_00000008[4] = *(float *)(in_stack_00000004 + 0x15c);
  fVar1 = (float)DOUBLE_0062a446;
  *in_stack_00000008 = *(float *)(in_stack_00000004 + 0x158) * fVar1;
  fVar2 = (float)DOUBLE_0062a44e;
  in_stack_00000008[3] = *(float *)(in_stack_00000004 + 0x158) * fVar2;
  in_stack_00000008[2] = *(float *)(in_stack_00000004 + 0x160) * fVar1;
  in_stack_00000008[5] = fVar2 * *(float *)(in_stack_00000004 + 0x160);
  return;
}


// Assembly code:
// 004cc700: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_flies.cpp_FUN_004cc700
//   XREF to: Stack[0x4] (READ)
// 004cc704: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004cc708: MOV dword ptr [EAX + 0x4],0x0
// 004cc70f: MOV ECX,dword ptr [EDX + 0x15c]
// 004cc715: MOV dword ptr [EAX + 0x10],ECX
// 004cc718: FLD double ptr [0x0062a446]
//   XREF to: 0062a446 (READ)
// 004cc71e: FLD float ptr [EDX + 0x158]
// 004cc724: FMUL ST1
// 004cc726: FSTP float ptr [EAX]
// 004cc728: FLD double ptr [0x0062a44e]
//   XREF to: 0062a44e (READ)
// 004cc72e: FLD float ptr [EDX + 0x158]
// 004cc734: FMUL ST1
// 004cc736: FSTP float ptr [EAX + 0xc]
// 004cc739: FLD float ptr [EDX + 0x160]
// 004cc73f: FMULP ST2
// 004cc741: FXCH
// 004cc743: FSTP float ptr [EAX + 0x8]
// 004cc746: FMUL float ptr [EDX + 0x160]
// 004cc74c: FSTP float ptr [EAX + 0x14]
// 004cc74f: RET
