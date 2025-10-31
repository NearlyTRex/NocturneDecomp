// Name: shape_meshlod.cpp_FUN_0051a4b8
// Address: 0051a4b8
// Address Range: [[0051a4b8, 0051a4e4]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a4b8()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a400 (0051a400) at 0051a4b1 [COMPUTED_JUMP]

#include "nocturne.h"

double shape_meshlod_cpp_FUN_0051a4b8(undefined4 param_1,undefined4 param_2,float *unaff_EBX)

{
  float fVar1;
  int unaff_ESI;
  
  fVar1 = *(float *)(unaff_ESI + 0x50) -
          (unaff_EBX[2] * *(float *)(unaff_ESI + 0x4c) +
          *unaff_EBX * *(float *)(unaff_ESI + 0x44) + unaff_EBX[1] * *(float *)(unaff_ESI + 0x48));
  return (double)(fVar1 * fVar1);
}


// Assembly code:
// 0051a4b8: LEA EAX,[ESI + 0x44]
//   Label: shape_meshlod.cpp_FUN_0051a4b8
// 0051a4bb: FLD float ptr [EBX + 0x4]
// 0051a4be: FMUL float ptr [EAX + 0x4]
// 0051a4c1: FLD float ptr [EBX]
// 0051a4c3: FMUL float ptr [EAX]
// 0051a4c5: FADDP
// 0051a4c7: FLD float ptr [EBX + 0x8]
// 0051a4ca: FMUL float ptr [EAX + 0x8]
// 0051a4cd: FADDP
// 0051a4cf: FSUBR float ptr [ESI + 0x50]
// 0051a4d2: FMUL ST0
// 0051a4d4: FSTP double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a4d7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a4da: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0051a4de: MOV ESP,EBP
// 0051a4e0: POP EBP
// 0051a4e1: POP EDI
// 0051a4e2: POP ESI
// 0051a4e3: POP EBX
// 0051a4e4: RET
