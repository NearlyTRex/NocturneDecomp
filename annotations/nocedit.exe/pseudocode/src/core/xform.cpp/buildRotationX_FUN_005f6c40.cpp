// Name: core_xform.cpp_buildRotationX_FUN_005f6c40
// Address: 005f6c40
// Address Range: [[005f6c40, 005f6cb5]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildRotationX_FUN_005f6c40(CMatrix3x4f * output_matrix, float angle_radians)
// Cross-references:
//   core_gabriela.cpp_FUN_004d5550 (004d5550) at 004d5610 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c088e [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildRotationX_FUN_005f6c40(CMatrix3x4f *output_matrix,float angle_radians)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_48 [6];
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_10;
  float local_c;
  
  fVar3 = (float10)fsin((float10)(float)output_matrix);
  fVar4 = (float10)fcos((float10)(float)output_matrix);
  local_48[0] = 1.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  local_48[4] = 0.0;
  local_2c = 0;
  local_28 = 0;
  local_1c = 0;
  local_10 = (float)fVar4;
  local_c = (float)fVar3;
  local_48[5] = local_10;
  local_24 = local_c;
  local_20 = local_10;
  local_30 = -local_c;
  pfVar2 = local_48;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


// Assembly code:
// 005f6c40: PUSH EBX
//   Label: core_xform.cpp_buildRotationX_FUN_005f6c40
// 005f6c41: PUSH EDI
// 005f6c42: SUB ESP,0x40
// 005f6c45: MOV EDX,ESI
// 005f6c47: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 005f6c4b: FLD ST0
// 005f6c4d: FSIN
// 005f6c4f: FXCH
// 005f6c51: FCOS
// 005f6c53: MOV ECX,0x3f800000
// 005f6c58: MOV EDI,ESI
// 005f6c5a: XOR EBX,EBX
// 005f6c5c: MOV ESI,ESP
// 005f6c5e: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x48] (DATA)
// 005f6c61: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x44] (WRITE)
// 005f6c65: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 005f6c69: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 005f6c6d: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 005f6c71: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 005f6c75: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 005f6c79: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f6c7d: MOV ECX,0xc
// 005f6c82: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (WRITE)
// 005f6c86: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (READ)
// 005f6c8a: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xc] (WRITE)
// 005f6c8e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005f6c92: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0xc] (READ)
// 005f6c96: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xc] (READ)
// 005f6c9a: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005f6c9e: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (READ)
// 005f6ca2: FCHS
// 005f6ca4: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005f6ca8: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (WRITE)
// 005f6cac: MOVSD.REP ES:EDI,ESI
// 005f6cae: MOV EAX,EDX
// 005f6cb0: ADD ESP,0x40
// 005f6cb3: POP EDI
// 005f6cb4: POP EBX
// 005f6cb5: RET
