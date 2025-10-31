// Name: shape_meshlod.cpp_FUN_0051a767
// Address: 0051a767
// Address Range: [[0051a767, 0051a7ca]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a767()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a6b0 (0051a6b0) at 0051a760 [COMPUTED_JUMP]

#include "nocturne.h"

float * shape_meshlod_cpp_FUN_0051a767(undefined4 param_1,float *param_2,float *unaff_EBX)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int unaff_ESI;
  
  fVar3 = *(float *)(unaff_ESI + 0x50) -
          (param_2[2] * *(float *)(unaff_ESI + 0x4c) +
          *param_2 * *(float *)(unaff_ESI + 0x44) + param_2[1] * *(float *)(unaff_ESI + 0x48));
  fVar1 = *(float *)(unaff_ESI + 0x48);
  fVar2 = *(float *)(unaff_ESI + 0x4c);
  *unaff_EBX = *param_2 - *(float *)(unaff_ESI + 0x44) * fVar3;
  unaff_EBX[1] = param_2[1] - fVar1 * fVar3;
  unaff_EBX[2] = param_2[2] - fVar2 * fVar3;
  return unaff_EBX;
}


// Assembly code:
// 0051a767: LEA ECX,[ESI + 0x44]
//   Label: shape_meshlod.cpp_FUN_0051a767
// 0051a76a: FLD float ptr [EDX + 0x4]
// 0051a76d: FMUL float ptr [ECX + 0x4]
// 0051a770: FLD float ptr [EDX]
// 0051a772: FMUL float ptr [ECX]
// 0051a774: FADDP
// 0051a776: FLD float ptr [EDX + 0x8]
// 0051a779: FMUL float ptr [ECX + 0x8]
// 0051a77c: FADDP
// 0051a77e: FSUBR float ptr [ESI + 0x50]
// 0051a781: FLD float ptr [ECX]
// 0051a783: FXCH
// 0051a785: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 0051a789: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0051a78d: FSTP float ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a790: FLD float ptr [ECX + 0x4]
// 0051a793: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0051a797: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (WRITE)
// 0051a79b: FLD float ptr [ECX + 0x8]
// 0051a79e: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0051a7a2: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (WRITE)
// 0051a7a6: FLD float ptr [EDX]
// 0051a7a8: FSUB float ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a7ab: FSTP float ptr [EBX]
// 0051a7ad: FLD float ptr [EDX + 0x4]
// 0051a7b0: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0051a7b4: FSTP float ptr [EBX + 0x4]
// 0051a7b7: FLD float ptr [EDX + 0x8]
// 0051a7ba: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0051a7be: FSTP float ptr [EBX + 0x8]
// 0051a7c1: MOV EAX,EBX
// 0051a7c3: ADD ESP,0x14
// 0051a7c6: POP EBP
// 0051a7c7: POP EDI
// 0051a7c8: POP ESI
// 0051a7c9: POP EBX
// 0051a7ca: RET
