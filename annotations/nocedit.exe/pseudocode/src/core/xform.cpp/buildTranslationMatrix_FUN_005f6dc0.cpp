// Name: core_xform.cpp_buildTranslationMatrix_FUN_005f6dc0
// Address: 005f6dc0
// Address Range: [[005f6dc0, 005f6e1b]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildTranslationMatrix_FUN_005f6dc0(CMatrix3x4f * output_matrix, CVector3f * translation)

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildTranslationMatrix_FUN_005f6dc0
          (CMatrix3x4f *output_matrix,CVector3f *translation)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  float *pfVar2;
  float local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  
  local_38[1] = 0.0;
  local_38[2] = 0.0;
  local_38[3] = output_matrix->m[0].w;
  local_28 = 0;
  local_24 = 0x3f800000;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x3f800000;
  local_1c = output_matrix->m[0].x;
  local_38[0] = 1.0;
  local_c = output_matrix->m[0].y;
  pfVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


// Assembly code:
// 005f6dc0: PUSH EBX
//   Label: core_xform.cpp_buildTranslationMatrix_FUN_005f6dc0
// 005f6dc1: PUSH EDI
// 005f6dc2: SUB ESP,0x30
// 005f6dc5: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005f6dc9: MOV EDX,ESI
// 005f6dcb: MOV EBX,0x3f800000
// 005f6dd0: MOV EDI,EDX
// 005f6dd2: XOR ESI,ESI
// 005f6dd4: MOV EAX,dword ptr [ECX]
// 005f6dd6: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 005f6dda: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 005f6dde: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005f6de2: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 005f6de6: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 005f6dea: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005f6dee: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005f6df2: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005f6df6: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 005f6dfa: MOV EAX,dword ptr [ECX + 0x4]
// 005f6dfd: MOV ESI,ESP
// 005f6dff: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f6e03: MOV EAX,dword ptr [ECX + 0x8]
// 005f6e06: MOV ECX,0xc
// 005f6e0b: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x38] (DATA)
// 005f6e0e: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005f6e12: MOVSD.REP ES:EDI,ESI
// 005f6e14: MOV EAX,EDX
// 005f6e16: ADD ESP,0x30
// 005f6e19: POP EDI
// 005f6e1a: POP EBX
// 005f6e1b: RET
