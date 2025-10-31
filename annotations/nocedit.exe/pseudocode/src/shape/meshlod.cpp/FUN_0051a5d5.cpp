// Name: shape_meshlod.cpp_FUN_0051a5d5
// Address: 0051a5d5
// Address Range: [[0051a5d5, 0051a601]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a5d5()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a400 (0051a400) at 0051a4b1 [COMPUTED_JUMP]

#include "nocturne.h"

double shape_meshlod_cpp_FUN_0051a5d5(undefined4 param_1,undefined4 param_2,float *unaff_EBX)

{
  float *unaff_EDI;
  
  return (double)((unaff_EBX[2] - unaff_EDI[2]) * (unaff_EBX[2] - unaff_EDI[2]) +
                 (unaff_EBX[1] - unaff_EDI[1]) * (unaff_EBX[1] - unaff_EDI[1]) +
                 (*unaff_EBX - *unaff_EDI) * (*unaff_EBX - *unaff_EDI));
}


// Assembly code:
// 0051a5d5: FLD float ptr [EBX]
//   Label: shape_meshlod.cpp_FUN_0051a5d5
// 0051a5d7: FSUB float ptr [EDI]
// 0051a5d9: FMUL ST0
// 0051a5db: FLD float ptr [EBX + 0x4]
// 0051a5de: FSUB float ptr [EDI + 0x4]
// 0051a5e1: FMUL ST0
// 0051a5e3: FLD float ptr [EBX + 0x8]
// 0051a5e6: FXCH
// 0051a5e8: FADDP ST2,ST0
// 0051a5ea: FSUB float ptr [EDI + 0x8]
// 0051a5ed: FMUL ST0
// 0051a5ef: FADDP
// 0051a5f1: FSTP double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a5f4: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a5f7: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0051a5fb: MOV ESP,EBP
// 0051a5fd: POP EBP
// 0051a5fe: POP EDI
// 0051a5ff: POP ESI
// 0051a600: POP EBX
// 0051a601: RET
