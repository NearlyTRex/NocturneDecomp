// Name: core_stairs.cpp_FUN_005b9230
// Address: 005b9230
// Address Range: [[005b9230, 005b9269]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b9230()

#include "nocturne.h"

float core_stairs_cpp_FUN_005b9230(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  
  return *in_stack_00000014 * in_stack_00000004[3] +
         *in_stack_00000010 * in_stack_00000004[2] +
         *in_stack_00000008 * *in_stack_00000004 + *in_stack_0000000c * in_stack_00000004[1];
}


// Assembly code:
// 005b9230: SUB ESP,0x4
//   Label: core_stairs.cpp_FUN_005b9230
// 005b9233: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b9237: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005b923b: FLD float ptr [EDX]
// 005b923d: FMUL float ptr [EAX + 0x4]
// 005b9240: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b9244: FLD float ptr [EDX]
// 005b9246: FMUL float ptr [EAX]
// 005b9248: FADDP
// 005b924a: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005b924e: FLD float ptr [EDX]
// 005b9250: FMUL float ptr [EAX + 0x8]
// 005b9253: FADDP
// 005b9255: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 005b9259: FLD float ptr [EDX]
// 005b925b: FMUL float ptr [EAX + 0xc]
// 005b925e: FADDP
// 005b9260: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 005b9263: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 005b9266: ADD ESP,0x4
// 005b9269: RET
