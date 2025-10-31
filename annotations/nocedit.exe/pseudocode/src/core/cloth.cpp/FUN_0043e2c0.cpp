// Name: core_cloth.cpp_FUN_0043e2c0
// Address: 0043e2c0
// Address Range: [[0043e2c0, 0043e2e8]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e2c0()

#include "nocturne.h"

float core_cloth_cpp_FUN_0043e2c0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  return in_stack_00000004[2] * in_stack_00000008[2] +
         *in_stack_00000004 * *in_stack_00000008 + in_stack_00000004[1] * in_stack_00000008[1];
}


// Assembly code:
// 0043e2c0: SUB ESP,0x4
//   Label: core_cloth.cpp_FUN_0043e2c0
// 0043e2c3: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043e2c7: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0043e2cb: FLD float ptr [EDX + 0x4]
// 0043e2ce: FMUL float ptr [EAX + 0x4]
// 0043e2d1: FLD float ptr [EDX]
// 0043e2d3: FMUL float ptr [EAX]
// 0043e2d5: FADDP
// 0043e2d7: FLD float ptr [EDX + 0x8]
// 0043e2da: FMUL float ptr [EAX + 0x8]
// 0043e2dd: FADDP
// 0043e2df: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0043e2e2: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0043e2e5: ADD ESP,0x4
// 0043e2e8: RET
