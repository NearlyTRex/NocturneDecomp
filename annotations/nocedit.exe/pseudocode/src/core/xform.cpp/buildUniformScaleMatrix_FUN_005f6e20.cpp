// Name: core_xform.cpp_buildUniformScaleMatrix_FUN_005f6e20
// Address: 005f6e20
// Address Range: [[005f6e20, 005f6e70]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildUniformScaleMatrix_FUN_005f6e20(CMatrix3x4f * output_matrix, float scale_factor)

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildUniformScaleMatrix_FUN_005f6e20(CMatrix3x4f *output_matrix,float scale_factor)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  CMatrix3x4f **ppCVar2;
  CMatrix3x4f *local_34 [6];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  CMatrix3x4f *local_c;
  undefined4 local_8;
  
  local_34[0] = output_matrix;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  local_34[1] = (CMatrix3x4f *)0x0;
  local_34[2] = (CMatrix3x4f *)0x0;
  local_34[3] = (CMatrix3x4f *)0x0;
  local_34[4] = (CMatrix3x4f *)0x0;
  local_34[5] = output_matrix;
  local_c = output_matrix;
  ppCVar2 = local_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *ppCVar2;
    ppCVar2 = ppCVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


// Assembly code:
// 005f6e20: PUSH EDI
//   Label: core_xform.cpp_buildUniformScaleMatrix_FUN_005f6e20
// 005f6e21: SUB ESP,0x30
// 005f6e24: MOV EAX,ESI
// 005f6e26: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005f6e2a: MOV EDI,ESI
// 005f6e2c: XOR ECX,ECX
// 005f6e2e: MOV ESI,ESP
// 005f6e30: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x34] (DATA)
// 005f6e33: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f6e37: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005f6e3b: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005f6e3f: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 005f6e43: XOR EDX,EDX
// 005f6e45: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 005f6e49: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005f6e4d: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 005f6e51: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005f6e55: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005f6e59: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005f6e5d: MOV ECX,0xc
// 005f6e62: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005f6e66: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 005f6e6a: MOVSD.REP ES:EDI,ESI
// 005f6e6c: ADD ESP,0x30
// 005f6e6f: POP EDI
// 005f6e70: RET
