// Name: core_stairs.cpp_FUN_005b93f0
// Address: 005b93f0
// Address Range: [[005b93f0, 005b942a]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b93f0()

#include "nocturne.h"

float core_stairs_cpp_FUN_005b93f0(void)

{
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  
  return *in_stack_00000014 * *(float *)(in_stack_00000004 + 0x1c) +
         *in_stack_00000010 * *(float *)(in_stack_00000004 + 0x18) +
         *in_stack_0000000c * *(float *)(in_stack_00000004 + 0x14) +
         *in_stack_00000008 * *(float *)(in_stack_00000004 + 0x10);
}


// Assembly code:
// 005b93f0: SUB ESP,0x4
//   Label: core_stairs.cpp_FUN_005b93f0
// 005b93f3: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b93f7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b93fb: FLD float ptr [EDX]
// 005b93fd: FMUL float ptr [EAX + 0x10]
// 005b9400: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005b9404: FLD float ptr [EDX]
// 005b9406: FMUL float ptr [EAX + 0x14]
// 005b9409: FADDP
// 005b940b: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005b940f: FLD float ptr [EDX]
// 005b9411: FMUL float ptr [EAX + 0x18]
// 005b9414: FADDP
// 005b9416: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 005b941a: FLD float ptr [EDX]
// 005b941c: FMUL float ptr [EAX + 0x1c]
// 005b941f: FADDP
// 005b9421: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 005b9424: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 005b9427: ADD ESP,0x4
// 005b942a: RET
