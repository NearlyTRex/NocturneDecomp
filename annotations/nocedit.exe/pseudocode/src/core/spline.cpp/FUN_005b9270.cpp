// Name: core_spline.cpp_FUN_005b9270
// Address: 005b9270
// Address Range: [[005b9270, 005b92c9]]
// Convention: unknown
// Signature: undefined core_spline.cpp_FUN_005b9270()

#include "nocturne.h"

int core_spline_cpp_FUN_005b9270(void)

{
  float *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  return (int)ROUND((float)in_stack_00000014 * in_stack_00000004[3] +
                    (float)in_stack_00000010 * in_stack_00000004[2] +
                    (float)in_stack_00000008 * *in_stack_00000004 +
                    (float)in_stack_0000000c * in_stack_00000004[1]);
}


// Assembly code:
// 005b9270: PUSH EBX
//   Label: core_spline.cpp_FUN_005b9270
// 005b9271: PUSH ESI
// 005b9272: PUSH EDI
// 005b9273: PUSH EBP
// 005b9274: MOV EBP,ESP
// 005b9276: SUB ESP,0xc
// 005b9279: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b927c: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005b927f: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005b9282: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005b9285: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005b9288: FMUL float ptr [EAX + 0x4]
// 005b928b: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005b928e: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005b9291: FMUL float ptr [EAX]
// 005b9293: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005b9296: FADDP
// 005b9298: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005b929b: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005b929e: FMUL float ptr [EAX + 0x8]
// 005b92a1: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005b92a4: FADDP
// 005b92a6: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005b92a9: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005b92ac: FMUL float ptr [EAX + 0xc]
// 005b92af: FADDP
// 005b92b1: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 005b92b4: FLD float ptr [EBP + 0xfffffff4]
//   XREF to: Stack[-0x1c] (READ)
// 005b92ba: FISTP dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (WRITE)
// 005b92c0: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 005b92c3: MOV ESP,EBP
// 005b92c5: POP EBP
// 005b92c6: POP EDI
// 005b92c7: POP ESI
// 005b92c8: POP EBX
// 005b92c9: RET
