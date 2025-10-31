// Name: core_bride.cpp_FUN_00424800
// Address: 00424800
// Address Range: [[00424800, 00424813]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00424800()
// Globals:
//   double DOUBLE_00616c8d = 2.5

#include "nocturne.h"

void core_bride_cpp_FUN_00424800(undefined4 param_1,undefined4 param_2,int unaff_EBX)

{
  float10 in_ST0;
  
  *(float *)(unaff_EBX + 4) = (float)(in_ST0 * (float10)DOUBLE_00616c8d);
  return;
}


// Assembly code:
// 00424800: FLD ST0
//   Label: core_bride.cpp_FUN_00424800
// 00424802: FMUL double ptr [0x00616c8d]
//   XREF to: 00616c8d (READ)
// 00424808: FSTP ST1
// 0042480a: FSTP float ptr [EBX + 0x4]
// 0042480d: MOV ESP,EBP
// 0042480f: POP EBP
// 00424810: POP EDI
// 00424811: POP ESI
// 00424812: POP EBX
// 00424813: RET
