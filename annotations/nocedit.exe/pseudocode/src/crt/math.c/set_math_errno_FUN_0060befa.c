// Name: crt_math.c_set_math_errno_FUN_0060befa
// Address: 0060befa
// Address Range: [[0060befa, 0060bf2c]]
// Convention: __cdecl
// Signature: double crt_math.c_set_math_errno_FUN_0060befa(int errorFlags, double * valuePtr)
// Cross-references:
//   crt_math.c_handle_math_error_FUN_0060c02b (0060c02b) at 0060c08d [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_process_math_error_FUN_0060bf2d

#include "nocturne.h"

double __cdecl crt_math_c_set_math_errno_FUN_0060befa(int errorFlags,double *valuePtr)

{
  double dVar1;
  
  dVar1 = crt_math_c_process_math_error_FUN_0060bf2d(errorFlags,valuePtr,valuePtr);
  return dVar1;
}


// Assembly code:
// 0060befa: PUSH EBP
//   Label: crt_math.c_set_math_errno_FUN_0060befa
// 0060befb: MOV EBP,ESP
// 0060befd: SUB ESP,0x10
// 0060bf00: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060bf03: PUSH EDX
// 0060bf04: PUSH EDX
// 0060bf05: MOV ECX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060bf08: PUSH ECX
// 0060bf09: CALL crt_math.c_process_math_error_FUN_0060bf2d
//   XREF to: 0060bf2d (UNCONDITIONAL_CALL)
// 0060bf0e: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060bf11: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 0060bf14: ADD ESP,0xc
// 0060bf17: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060bf1a: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0060bf1d: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x10] (READ)
// 0060bf20: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0060bf23: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (READ)
// 0060bf26: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (READ)
// 0060bf29: MOV ESP,EBP
// 0060bf2b: POP EBP
// 0060bf2c: RET
