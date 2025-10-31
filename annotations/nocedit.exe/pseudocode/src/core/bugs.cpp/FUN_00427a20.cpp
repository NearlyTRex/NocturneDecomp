// Name: core_bugs.cpp_FUN_00427a20
// Address: 00427a20
// Address Range: [[00427a20, 00427a5c]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427a20()

#include "nocturne.h"

float * core_bugs_cpp_FUN_00427a20(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  *in_stack_00000008 =
       in_stack_00000004[1] * in_stack_0000000c[2] - in_stack_00000004[2] * in_stack_0000000c[1];
  in_stack_00000008[1] =
       in_stack_00000004[2] * *in_stack_0000000c - *in_stack_00000004 * in_stack_0000000c[2];
  in_stack_00000008[2] =
       *in_stack_00000004 * in_stack_0000000c[1] - in_stack_00000004[1] * *in_stack_0000000c;
  return in_stack_00000008;
}


// Assembly code:
// 00427a20: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bugs.cpp_FUN_00427a20
//   XREF to: Stack[0x4] (READ)
// 00427a24: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00427a28: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00427a2c: FLD float ptr [EAX + 0x4]
// 00427a2f: FMUL float ptr [EDX + 0x8]
// 00427a32: FLD float ptr [EAX + 0x8]
// 00427a35: FMUL float ptr [EDX + 0x4]
// 00427a38: FSUBP
// 00427a3a: FSTP float ptr [ECX]
// 00427a3c: FLD float ptr [EAX + 0x8]
// 00427a3f: FMUL float ptr [EDX]
// 00427a41: FLD float ptr [EAX]
// 00427a43: FMUL float ptr [EDX + 0x8]
// 00427a46: FSUBP
// 00427a48: FSTP float ptr [ECX + 0x4]
// 00427a4b: FLD float ptr [EAX]
// 00427a4d: FMUL float ptr [EDX + 0x4]
// 00427a50: FLD float ptr [EAX + 0x4]
// 00427a53: FMUL float ptr [EDX]
// 00427a55: FSUBP
// 00427a57: MOV EAX,ECX
// 00427a59: FSTP float ptr [ECX + 0x8]
// 00427a5c: RET
