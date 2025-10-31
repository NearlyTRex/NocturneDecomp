// Name: core_cloth.cpp_FUN_0043e3d0
// Address: 0043e3d0
// Address Range: [[0043e3d0, 0043e3f2]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e3d0()

#include "nocturne.h"

void core_cloth_cpp_FUN_0043e3d0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  *in_stack_00000004 = *in_stack_0000000c * *in_stack_00000008;
  in_stack_00000004[1] = in_stack_0000000c[1] * *in_stack_00000008;
  in_stack_00000004[2] = in_stack_0000000c[2] * *in_stack_00000008;
  return;
}


// Assembly code:
// 0043e3d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_cloth.cpp_FUN_0043e3d0
//   XREF to: Stack[0x4] (READ)
// 0043e3d4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0043e3d8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0043e3dc: FLD float ptr [ECX]
// 0043e3de: FMUL float ptr [EDX]
// 0043e3e0: FSTP float ptr [EAX]
// 0043e3e2: FLD float ptr [ECX + 0x4]
// 0043e3e5: FMUL float ptr [EDX]
// 0043e3e7: FSTP float ptr [EAX + 0x4]
// 0043e3ea: FLD float ptr [ECX + 0x8]
// 0043e3ed: FMUL float ptr [EDX]
// 0043e3ef: FSTP float ptr [EAX + 0x8]
// 0043e3f2: RET
