// Name: shape_cramtex.cpp_maxInt_FUN_00448440
// Address: 00448440
// Address Range: [[00448440, 00448459]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_maxInt_FUN_00448440(int a, int b)
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_maxInt_FUN_00448440(int a,int b)

{
  crt_stack_c_stack_probe_FUN_005ff9f3(4);
  if (b < a) {
    return a;
  }
  return b;
}


// Assembly code:
// 00448440: PUSH 0x4
//   Label: shape_cramtex.cpp_maxInt_FUN_00448440
// 00448445: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0044844a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0044844e: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00448452: CMP EAX,EDX
// 00448454: JLE 0x00448457
//   XREF to: 00448457 (CONDITIONAL_JUMP)
// 00448456: RET
// 00448457: MOV EAX,EDX
//   Label: LAB_00448457
// 00448459: RET
