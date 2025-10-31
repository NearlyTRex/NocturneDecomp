// Name: shape_meshlod.cpp_FUN_0051a598
// Address: 0051a598
// Address Range: [[0051a598, 0051a5d4]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a598()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a400 (0051a400) at 0051a4b1 [COMPUTED_JUMP]
// Function calls:
//   shape_meshlod.cpp_FUN_00514f90

#include "nocturne.h"

double shape_meshlod_cpp_FUN_0051a598(undefined4 param_1,undefined4 param_2,float *unaff_EBX)

{
  float *pfVar1;
  
  pfVar1 = (float *)shape_meshlod_cpp_FUN_00514f90();
  return (double)((unaff_EBX[2] - pfVar1[2]) * (unaff_EBX[2] - pfVar1[2]) +
                 (unaff_EBX[1] - pfVar1[1]) * (unaff_EBX[1] - pfVar1[1]) +
                 (*unaff_EBX - *pfVar1) * (*unaff_EBX - *pfVar1));
}


// Assembly code:
// 0051a598: PUSH EDI
//   Label: shape_meshlod.cpp_FUN_0051a598
// 0051a599: PUSH ECX
// 0051a59a: PUSH EBX
// 0051a59b: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[0x8] (DATA)
// 0051a59f: PUSH EAX
// 0051a5a0: CALL shape_meshlod.cpp_FUN_00514f90
//   XREF to: 00514f90 (UNCONDITIONAL_CALL)
// 0051a5a5: FLD float ptr [EBX]
// 0051a5a7: ADD ESP,0x10
// 0051a5aa: FSUB float ptr [EAX]
// 0051a5ac: FMUL ST0
// 0051a5ae: FLD float ptr [EBX + 0x4]
// 0051a5b1: FSUB float ptr [EAX + 0x4]
// 0051a5b4: FMUL ST0
// 0051a5b6: FLD float ptr [EBX + 0x8]
// 0051a5b9: FXCH
// 0051a5bb: FADDP ST2,ST0
// 0051a5bd: FSUB float ptr [EAX + 0x8]
// 0051a5c0: FMUL ST0
// 0051a5c2: FADDP
// 0051a5c4: FSTP double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a5c7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a5ca: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0051a5ce: MOV ESP,EBP
// 0051a5d0: POP EBP
// 0051a5d1: POP EDI
// 0051a5d2: POP ESI
// 0051a5d3: POP EBX
// 0051a5d4: RET
