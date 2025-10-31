// Name: core_cloth.cpp_FUN_0043e320
// Address: 0043e320
// Address Range: [[0043e320, 0043e348]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e320()

#include "nocturne.h"

float core_cloth_cpp_FUN_0043e320(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  return in_stack_00000004[2] * in_stack_00000008[2] +
         *in_stack_00000004 * *in_stack_00000008 + in_stack_00000004[1] * in_stack_00000008[1];
}


// Assembly code:
// 0043e320: SUB ESP,0x4
//   Label: core_cloth.cpp_FUN_0043e320
// 0043e323: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043e327: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0043e32b: FLD float ptr [EDX + 0x4]
// 0043e32e: FMUL float ptr [EAX + 0x4]
// 0043e331: FLD float ptr [EDX]
// 0043e333: FMUL float ptr [EAX]
// 0043e335: FADDP
// 0043e337: FLD float ptr [EDX + 0x8]
// 0043e33a: FMUL float ptr [EAX + 0x8]
// 0043e33d: FADDP
// 0043e33f: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0043e342: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0043e345: ADD ESP,0x4
// 0043e348: RET
