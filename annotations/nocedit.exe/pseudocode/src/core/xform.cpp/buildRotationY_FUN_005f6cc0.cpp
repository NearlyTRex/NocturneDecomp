// Name: core_xform.cpp_buildRotationY_FUN_005f6cc0
// Address: 005f6cc0
// Address Range: [[005f6cc0, 005f6d33]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildRotationY_FUN_005f6cc0(CMatrix3x4f * output_matrix, float angle_radians)
// Cross-references:
//   core_gabriela.cpp_CGabriella_FUN_004d7120 (004d7120) at 004d74b0 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5550 (004d5550) at 004d563d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c0f09 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildRotationY_FUN_005f6cc0(CMatrix3x4f *output_matrix,float angle_radians)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_44 [9];
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_c;
  float local_8;
  
  fVar3 = (float10)fsin((float10)(float)output_matrix);
  fVar4 = (float10)fcos((float10)(float)output_matrix);
  local_44[1] = 0.0;
  local_44[3] = 0.0;
  local_44[4] = 0.0;
  local_44[5] = 1.0;
  local_44[6] = 0.0;
  local_44[7] = 0.0;
  local_20 = 0;
  local_18 = 0;
  local_c = (float)fVar4;
  local_8 = (float)fVar3;
  local_44[0] = local_c;
  local_44[2] = local_8;
  local_1c = local_c;
  local_44[8] = -local_8;
  pfVar2 = local_44;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


// Assembly code:
// 005f6cc0: PUSH EDI
//   Label: core_xform.cpp_buildRotationY_FUN_005f6cc0
// 005f6cc1: SUB ESP,0x40
// 005f6cc4: MOV EDX,ESI
// 005f6cc6: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 005f6cca: FLD ST0
// 005f6ccc: FSIN
// 005f6cce: FXCH
// 005f6cd0: FCOS
// 005f6cd2: XOR ECX,ECX
// 005f6cd4: MOV EDI,0x3f800000
// 005f6cd9: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 005f6cdd: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 005f6ce1: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 005f6ce5: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 005f6ce9: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005f6ced: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005f6cf1: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005f6cf5: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005f6cf9: MOV ECX,0xc
// 005f6cfe: MOV EDI,ESI
// 005f6d00: MOV ESI,ESP
// 005f6d02: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0xc] (WRITE)
// 005f6d06: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xc] (READ)
// 005f6d0a: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x8] (WRITE)
// 005f6d0e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x44] (DATA)
// 005f6d11: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x8] (READ)
// 005f6d15: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x8] (READ)
// 005f6d19: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005f6d1d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xc] (READ)
// 005f6d21: FCHS
// 005f6d23: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f6d27: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x24] (WRITE)
// 005f6d2b: MOVSD.REP ES:EDI,ESI
// 005f6d2d: MOV EAX,EDX
// 005f6d2f: ADD ESP,0x40
// 005f6d32: POP EDI
// 005f6d33: RET
