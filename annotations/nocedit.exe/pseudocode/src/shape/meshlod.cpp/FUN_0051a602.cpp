// Name: shape_meshlod.cpp_FUN_0051a602
// Address: 0051a602
// Address Range: [[0051a602, 0051a62e]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a602()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a400 (0051a400) at 0051a4b1 [COMPUTED_JUMP]

#include "nocturne.h"

double shape_meshlod_cpp_FUN_0051a602
                 (undefined4 param_1,undefined4 param_2,float *unaff_EBX,float *param_4)

{
  return (double)((unaff_EBX[2] - param_4[2]) * (unaff_EBX[2] - param_4[2]) +
                 (unaff_EBX[1] - param_4[1]) * (unaff_EBX[1] - param_4[1]) +
                 (*unaff_EBX - *param_4) * (*unaff_EBX - *param_4));
}


// Assembly code:
// 0051a602: FLD float ptr [EBX]
//   Label: shape_meshlod.cpp_FUN_0051a602
// 0051a604: FSUB float ptr [ECX]
// 0051a606: FMUL ST0
// 0051a608: FLD float ptr [EBX + 0x4]
// 0051a60b: FSUB float ptr [ECX + 0x4]
// 0051a60e: FMUL ST0
// 0051a610: FLD float ptr [EBX + 0x8]
// 0051a613: FXCH
// 0051a615: FADDP ST2,ST0
// 0051a617: FSUB float ptr [ECX + 0x8]
// 0051a61a: FMUL ST0
// 0051a61c: FADDP
// 0051a61e: FSTP double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a621: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a624: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0051a628: MOV ESP,EBP
// 0051a62a: POP EBP
// 0051a62b: POP EDI
// 0051a62c: POP ESI
// 0051a62d: POP EBX
// 0051a62e: RET
