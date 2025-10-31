// Name: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
// Address: 005f50c0
// Address Range: [[005f50c0, 005f50f1]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
// Cross-references:
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005954c7 [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f *in_stack_ffffffc4;
  float afStack_38 [11];
  
  bVar4 = 0;
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(matrix_a,matrix_b,in_stack_ffffffc4);
  pfVar2 = afStack_38;
  pCVar3 = matrix_a;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return matrix_a;
}


// Assembly code:
// 005f50c0: PUSH EBX
//   Label: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
// 005f50c1: PUSH ESI
// 005f50c2: PUSH EDI
// 005f50c3: SUB ESP,0x30
// 005f50c6: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 005f50ca: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 005f50ce: PUSH EDX
// 005f50cf: PUSH EBX
// 005f50d0: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x3c] (DATA)
// 005f50d4: MOV EDI,EBX
// 005f50d6: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005f50db: MOV ECX,0xc
// 005f50e0: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x3c] (DATA)
// 005f50e4: ADD ESP,0x8
// 005f50e7: MOV EAX,EBX
// 005f50e9: MOVSD.REP ES:EDI,ESI
// 005f50eb: ADD ESP,0x30
// 005f50ee: POP EDI
// 005f50ef: POP ESI
// 005f50f0: POP EBX
// 005f50f1: RET
