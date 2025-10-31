// Name: core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0
// Address: 005f6ee0
// Address Range: [[005f6ee0, 005f6f3a]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0(CMatrix3x4f * matrix_out, float x_offset)
// Cross-references:
//   core_mimic.cpp_FUN_0051f930 (0051f930) at 0051fbe3 [UNCONDITIONAL_CALL]
// Globals:
//   double g_XFlipMatrixScaleFactor = 2

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0(CMatrix3x4f *matrix_out,float x_offset)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  float *pfVar2;
  float *pfVar3;
  float local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_34[0] = -1.0;
  local_34[1] = 0.0;
  local_34[2] = 0.0;
  local_24 = 0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x3f800000;
  local_8 = 0;
  local_34[3] = (float)matrix_out * (float)g_XFlipMatrixScaleFactor;
  pfVar2 = local_34;
  pfVar3 = unaff_ESI;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return (CMatrix3x4f *)unaff_ESI;
}


// Assembly code:
// 005f6ee0: PUSH EDI
//   Label: core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0
// 005f6ee1: SUB ESP,0x30
// 005f6ee4: MOV EAX,ESI
// 005f6ee6: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005f6eea: FMUL double ptr [0x006583c5]
//   XREF to: 006583c5 (READ)
// 005f6ef0: MOV EDX,0xbf800000
// 005f6ef5: MOV EDI,0x3f800000
// 005f6efa: XOR ECX,ECX
// 005f6efc: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x34] (DATA)
// 005f6eff: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005f6f03: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005f6f07: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005f6f0b: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 005f6f0f: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f6f13: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005f6f17: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005f6f1b: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 005f6f1f: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 005f6f23: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 005f6f27: MOV ECX,0xc
// 005f6f2c: MOV EDI,ESI
// 005f6f2e: MOV ESI,ESP
// 005f6f30: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (WRITE)
// 005f6f34: MOVSD.REP ES:EDI,ESI
// 005f6f36: ADD ESP,0x30
// 005f6f39: POP EDI
// 005f6f3a: RET
