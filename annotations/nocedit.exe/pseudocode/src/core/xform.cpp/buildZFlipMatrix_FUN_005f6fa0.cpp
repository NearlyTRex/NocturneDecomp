// Name: core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
// Address: 005f6fa0
// Address Range: [[005f6fa0, 005f6ffa]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0(CMatrix3x4f * matrix_out, float z_offset)
// Cross-references:
//   core_mimic.cpp_FUN_0051f930 (0051f930) at 0051fb30 [UNCONDITIONAL_CALL]
//   core_xform.cpp_buildMirrorTransform_FUN_005f7000 (005f7000) at 005f70d0 [UNCONDITIONAL_CALL]
// Globals:
//   double g_ZFlipMatrixScaleFactor = 2

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0(CMatrix3x4f *matrix_out,float z_offset)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  float *pfVar2;
  float *pfVar3;
  float local_34 [12];
  
  local_34[0] = 1.0;
  local_34[1] = 0.0;
  local_34[2] = 0.0;
  local_34[3] = 0.0;
  local_34[4] = 0.0;
  local_34[5] = 1.0;
  local_34[6] = 0.0;
  local_34[7] = 0.0;
  local_34[8] = 0.0;
  local_34[9] = 0.0;
  local_34[10] = -1.0;
  local_34[0xb] = (float)matrix_out * (float)g_ZFlipMatrixScaleFactor;
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
// 005f6fa0: PUSH EDI
//   Label: core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
// 005f6fa1: SUB ESP,0x30
// 005f6fa4: MOV EAX,ESI
// 005f6fa6: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005f6faa: FMUL double ptr [0x006583d5]
//   XREF to: 006583d5 (READ)
// 005f6fb0: MOV EDX,0x3f800000
// 005f6fb5: MOV EDI,0xbf800000
// 005f6fba: XOR ECX,ECX
// 005f6fbc: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x34] (DATA)
// 005f6fbf: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005f6fc3: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005f6fc7: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005f6fcb: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005f6fcf: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005f6fd3: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f6fd7: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005f6fdb: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005f6fdf: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 005f6fe3: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 005f6fe7: MOV ECX,0xc
// 005f6fec: MOV EDI,ESI
// 005f6fee: MOV ESI,ESP
// 005f6ff0: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x8] (WRITE)
// 005f6ff4: MOVSD.REP ES:EDI,ESI
// 005f6ff6: ADD ESP,0x30
// 005f6ff9: POP EDI
// 005f6ffa: RET
