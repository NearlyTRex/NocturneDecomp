// Name: shape_meshlod.cpp_FUN_0051a4e5
// Address: 0051a4e5
// Address Range: [[0051a4e5, 0051a525]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a4e5()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a400 (0051a400) at 0051a4b1 [COMPUTED_JUMP]
// Function calls:
//   shape_meshlod.cpp_FUN_00514f90

#include "nocturne.h"

double shape_meshlod_cpp_FUN_0051a4e5(undefined4 param_1,undefined4 param_2,float *unaff_EBX)

{
  float *pfVar1;
  
  pfVar1 = (float *)shape_meshlod_cpp_FUN_00514f90();
  return (double)((unaff_EBX[2] - pfVar1[2]) * (unaff_EBX[2] - pfVar1[2]) +
                 (unaff_EBX[1] - pfVar1[1]) * (unaff_EBX[1] - pfVar1[1]) +
                 (*unaff_EBX - *pfVar1) * (*unaff_EBX - *pfVar1));
}


// Assembly code:
// 0051a4e5: MOV ECX,dword ptr [ESP + 0x68]
//   Label: shape_meshlod.cpp_FUN_0051a4e5
//   XREF to: Stack[0x68] (READ)
// 0051a4e9: PUSH ECX
// 0051a4ea: PUSH EDI
// 0051a4eb: PUSH EBX
// 0051a4ec: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[0x2c] (DATA)
// 0051a4f0: PUSH EAX
// 0051a4f1: CALL shape_meshlod.cpp_FUN_00514f90
//   XREF to: 00514f90 (UNCONDITIONAL_CALL)
// 0051a4f6: FLD float ptr [EBX]
// 0051a4f8: ADD ESP,0x10
// 0051a4fb: FSUB float ptr [EAX]
// 0051a4fd: FMUL ST0
// 0051a4ff: FLD float ptr [EBX + 0x4]
// 0051a502: FSUB float ptr [EAX + 0x4]
// 0051a505: FMUL ST0
// 0051a507: FLD float ptr [EBX + 0x8]
// 0051a50a: FXCH
// 0051a50c: FADDP ST2,ST0
// 0051a50e: FSUB float ptr [EAX + 0x8]
// 0051a511: FMUL ST0
// 0051a513: FADDP
// 0051a515: FSTP double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a518: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a51b: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0051a51f: MOV ESP,EBP
// 0051a521: POP EBP
// 0051a522: POP EDI
// 0051a523: POP ESI
// 0051a524: POP EBX
// 0051a525: RET
