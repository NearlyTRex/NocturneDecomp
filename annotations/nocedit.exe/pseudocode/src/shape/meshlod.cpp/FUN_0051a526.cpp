// Name: shape_meshlod.cpp_FUN_0051a526
// Address: 0051a526
// Address Range: [[0051a526, 0051a566]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a526()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a400 (0051a400) at 0051a4b1 [COMPUTED_JUMP]
// Function calls:
//   shape_meshlod.cpp_FUN_00514f90

#include "nocturne.h"

double shape_meshlod_cpp_FUN_0051a526(undefined4 param_1,undefined4 param_2,float *unaff_EBX)

{
  float *pfVar1;
  
  pfVar1 = (float *)shape_meshlod_cpp_FUN_00514f90();
  return (double)((unaff_EBX[2] - pfVar1[2]) * (unaff_EBX[2] - pfVar1[2]) +
                 (unaff_EBX[1] - pfVar1[1]) * (unaff_EBX[1] - pfVar1[1]) +
                 (*unaff_EBX - *pfVar1) * (*unaff_EBX - *pfVar1));
}


// Assembly code:
// 0051a526: PUSH ECX
//   Label: shape_meshlod.cpp_FUN_0051a526
// 0051a527: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x68] (READ)
// 0051a52b: PUSH EDX
// 0051a52c: PUSH EBX
// 0051a52d: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[0x14] (DATA)
// 0051a531: PUSH EAX
// 0051a532: CALL shape_meshlod.cpp_FUN_00514f90
//   XREF to: 00514f90 (UNCONDITIONAL_CALL)
// 0051a537: FLD float ptr [EBX]
// 0051a539: ADD ESP,0x10
// 0051a53c: FSUB float ptr [EAX]
// 0051a53e: FMUL ST0
// 0051a540: FLD float ptr [EBX + 0x4]
// 0051a543: FSUB float ptr [EAX + 0x4]
// 0051a546: FMUL ST0
// 0051a548: FLD float ptr [EBX + 0x8]
// 0051a54b: FXCH
// 0051a54d: FADDP ST2,ST0
// 0051a54f: FSUB float ptr [EAX + 0x8]
// 0051a552: FMUL ST0
// 0051a554: FADDP
// 0051a556: FSTP double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a559: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 0051a55c: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0051a560: MOV ESP,EBP
// 0051a562: POP EBP
// 0051a563: POP EDI
// 0051a564: POP ESI
// 0051a565: POP EBX
// 0051a566: RET
