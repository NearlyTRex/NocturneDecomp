// Name: shape_meshlod.cpp_FUN_0051edf0
// Address: 0051edf0
// Address Range: [[0051edf0, 0051ee22]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051edf0()

#include "nocturne.h"

float shape_meshlod_cpp_FUN_0051edf0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  return (in_stack_00000004[2] - in_stack_00000008[2]) *
         (in_stack_00000004[2] - in_stack_00000008[2]) +
         (in_stack_00000004[1] - in_stack_00000008[1]) *
         (in_stack_00000004[1] - in_stack_00000008[1]) +
         (*in_stack_00000004 - *in_stack_00000008) * (*in_stack_00000004 - *in_stack_00000008);
}


// Assembly code:
// 0051edf0: SUB ESP,0x10
//   Label: shape_meshlod.cpp_FUN_0051edf0
// 0051edf3: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051edf7: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051edfb: FLD float ptr [EDX]
// 0051edfd: FSUB float ptr [EAX]
// 0051edff: FMUL ST0
// 0051ee01: FLD float ptr [EDX + 0x4]
// 0051ee04: FSUB float ptr [EAX + 0x4]
// 0051ee07: FMUL ST0
// 0051ee09: FLD float ptr [EDX + 0x8]
// 0051ee0c: FXCH
// 0051ee0e: FADDP ST2,ST0
// 0051ee10: FSUB float ptr [EAX + 0x8]
// 0051ee13: FMUL ST0
// 0051ee15: FADDP
// 0051ee17: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 0051ee1b: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 0051ee1f: ADD ESP,0x10
// 0051ee22: RET
