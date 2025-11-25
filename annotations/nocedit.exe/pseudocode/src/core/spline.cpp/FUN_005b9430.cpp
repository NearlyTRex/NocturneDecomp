// Name: core_spline.cpp_FUN_005b9430
// Address: 005b9430
// Address Range: [[005b9430, 005b948a]]
// Convention: unknown
// Signature: undefined core_spline.cpp_FUN_005b9430()

#include "nocturne.h"

int core_spline_cpp_FUN_005b9430(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  return (int)ROUND((float)in_stack_00000014 * *(float *)(in_stack_00000004 + 0x1c) +
                    (float)in_stack_00000010 * *(float *)(in_stack_00000004 + 0x18) +
                    (float)in_stack_0000000c * *(float *)(in_stack_00000004 + 0x14) +
                    (float)in_stack_00000008 * *(float *)(in_stack_00000004 + 0x10));
}


// Assembly code:
// 005b9430: PUSH EBX
//   Label: core_spline.cpp_FUN_005b9430
// 005b9431: PUSH ESI
// 005b9432: PUSH EDI
// 005b9433: PUSH EBP
// 005b9434: MOV EBP,ESP
// 005b9436: SUB ESP,0xc
// 005b9439: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b943c: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005b943f: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005b9442: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005b9445: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005b9448: FMUL float ptr [EAX + 0x10]
// 005b944b: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005b944e: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005b9451: FMUL float ptr [EAX + 0x14]
// 005b9454: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005b9457: FADDP
// 005b9459: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005b945c: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005b945f: FMUL float ptr [EAX + 0x18]
// 005b9462: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005b9465: FADDP
// 005b9467: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005b946a: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005b946d: FMUL float ptr [EAX + 0x1c]
// 005b9470: FADDP
// 005b9472: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 005b9475: FLD float ptr [EBP + 0xfffffff4]
//   XREF to: Stack[-0x1c] (READ)
// 005b947b: FISTP dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (WRITE)
// 005b9481: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 005b9484: MOV ESP,EBP
// 005b9486: POP EBP
// 005b9487: POP EDI
// 005b9488: POP ESI
// 005b9489: POP EBX
// 005b948a: RET
