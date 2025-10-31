// Name: core_xform.cpp_buildScaleMatrix_FUN_005f6e80
// Address: 005f6e80
// Address Range: [[005f6e80, 005f6ed6]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildScaleMatrix_FUN_005f6e80(CMatrix3x4f * output_matrix, CVector3f * scale_vector)

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildScaleMatrix_FUN_005f6e80(CMatrix3x4f *output_matrix,CVector3f *scale_vector)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  float *pfVar2;
  float local_38 [6];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  
  local_38[0] = output_matrix->m[0].w;
  local_38[1] = 0.0;
  local_38[2] = 0.0;
  local_38[3] = 0.0;
  local_38[4] = 0.0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_38[5] = output_matrix->m[0].x;
  local_c = 0;
  local_10 = output_matrix->m[0].y;
  pfVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


// Assembly code:
// 005f6e80: PUSH EBX
//   Label: core_xform.cpp_buildScaleMatrix_FUN_005f6e80
// 005f6e81: PUSH EDI
// 005f6e82: SUB ESP,0x30
// 005f6e85: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005f6e89: MOV EDX,ESI
// 005f6e8b: MOV EDI,ESI
// 005f6e8d: MOV EAX,dword ptr [ECX]
// 005f6e8f: XOR EBX,EBX
// 005f6e91: MOV ESI,ESP
// 005f6e93: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x38] (DATA)
// 005f6e96: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 005f6e9a: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 005f6e9e: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 005f6ea2: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 005f6ea6: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 005f6eaa: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f6eae: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005f6eb2: MOV EAX,dword ptr [ECX + 0x4]
// 005f6eb5: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005f6eb9: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005f6ebd: MOV EAX,dword ptr [ECX + 0x8]
// 005f6ec0: MOV ECX,0xc
// 005f6ec5: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0xc] (WRITE)
// 005f6ec9: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005f6ecd: MOVSD.REP ES:EDI,ESI
// 005f6ecf: MOV EAX,EDX
// 005f6ed1: ADD ESP,0x30
// 005f6ed4: POP EDI
// 005f6ed5: POP EBX
// 005f6ed6: RET
