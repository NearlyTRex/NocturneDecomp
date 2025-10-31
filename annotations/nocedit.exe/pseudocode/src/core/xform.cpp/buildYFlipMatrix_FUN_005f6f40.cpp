// Name: core_xform.cpp_buildYFlipMatrix_FUN_005f6f40
// Address: 005f6f40
// Address Range: [[005f6f40, 005f6f9c]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_buildYFlipMatrix_FUN_005f6f40(CMatrix3x4f * matrix_out, float y_offset)
// Globals:
//   double g_YFlipMatrixScaleFactor = 2

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_buildYFlipMatrix_FUN_005f6f40(CMatrix3x4f *matrix_out,float y_offset)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  float *pfVar2;
  float *pfVar3;
  float local_38 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_38[0] = 1.0;
  local_38[1] = 0.0;
  local_38[2] = 0.0;
  local_38[3] = 0.0;
  local_38[4] = 0.0;
  local_38[5] = -1.0;
  local_38[6] = 0.0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x3f800000;
  local_c = 0;
  local_38[7] = (float)matrix_out * (float)g_YFlipMatrixScaleFactor;
  pfVar2 = local_38;
  pfVar3 = unaff_ESI;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return (CMatrix3x4f *)unaff_ESI;
}


// Assembly code:
// 005f6f40: PUSH EDI
//   Label: core_xform.cpp_buildYFlipMatrix_FUN_005f6f40
// 005f6f41: PUSH EBP
// 005f6f42: SUB ESP,0x30
// 005f6f45: MOV EAX,ESI
// 005f6f47: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005f6f4b: FMUL double ptr [0x006583cd]
//   XREF to: 006583cd (READ)
// 005f6f51: MOV EDX,0x3f800000
// 005f6f56: MOV EBP,0xbf800000
// 005f6f5b: MOV EDI,ESI
// 005f6f5d: XOR ECX,ECX
// 005f6f5f: MOV ESI,ESP
// 005f6f61: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x38] (DATA)
// 005f6f64: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 005f6f68: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005f6f6c: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005f6f70: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005f6f74: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 005f6f78: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005f6f7c: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005f6f80: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005f6f84: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 005f6f88: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 005f6f8c: MOV ECX,0xc
// 005f6f91: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 005f6f95: MOVSD.REP ES:EDI,ESI
// 005f6f97: ADD ESP,0x30
// 005f6f9a: POP EBP
// 005f6f9b: POP EDI
// 005f6f9c: RET
