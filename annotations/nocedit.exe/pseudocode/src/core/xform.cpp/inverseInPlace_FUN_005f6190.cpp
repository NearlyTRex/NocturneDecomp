// Name: core_xform.cpp_inverseInPlace_FUN_005f6190
// Address: 005f6190
// Address Range: [[005f6190, 005f61b6]]
// Convention: __cdecl
// Signature: void core_xform.cpp_inverseInPlace_FUN_005f6190(CMatrix3x4f * matrix)
// Function calls:
//   core_xform.cpp_inverse_FUN_005f6210

#include "nocturne.h"

void __cdecl core_xform_cpp_inverseInPlace_FUN_005f6190(CMatrix3x4f *matrix)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *pfVar2;
  byte bVar3;
  CMatrix3x4f *in_stack_ffffffc8;
  float afStack_34 [11];
  
  bVar3 = 0;
  core_xform_cpp_inverse_FUN_005f6210(matrix,in_stack_ffffffc8);
  pfVar2 = afStack_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    matrix->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar3 * -2 + 1;
    matrix = (CMatrix3x4f *)((int)matrix + ((uint)bVar3 * -2 + 1) * 4);
  }
  return;
}


// Assembly code:
// 005f6190: PUSH ESI
//   Label: core_xform.cpp_inverseInPlace_FUN_005f6190
// 005f6191: PUSH EDI
// 005f6192: SUB ESP,0x30
// 005f6195: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005f6199: PUSH EDI
// 005f619a: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x38] (DATA)
// 005f619e: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 005f61a3: MOV ECX,0xc
// 005f61a8: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x38] (DATA)
// 005f61ac: ADD ESP,0x4
// 005f61af: MOVSD.REP ES:EDI,ESI
// 005f61b1: ADD ESP,0x30
// 005f61b4: POP EDI
// 005f61b5: POP ESI
// 005f61b6: RET
