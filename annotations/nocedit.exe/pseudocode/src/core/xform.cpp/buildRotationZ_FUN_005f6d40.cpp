// Name: core_xform.cpp_buildRotationZ_FUN_005f6d40
// Address: 005f6d40
// Address Range: [[005f6d40, 005f6db7]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildRotationZ_FUN_005f6d40(CMatrix3x4f * output_matrix, float angle_radians)

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildRotationZ_FUN_005f6d40(CMatrix3x4f *output_matrix,float angle_radians)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_48 [5];
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_10;
  float local_c;
  
  fVar3 = (float10)fsin((float10)(float)output_matrix);
  fVar4 = (float10)fcos((float10)(float)output_matrix);
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_20 = 0x3f800000;
  local_10 = (float)fVar4;
  local_c = (float)fVar3;
  local_48[0] = local_10;
  local_48[4] = local_c;
  local_34 = local_10;
  local_48[1] = -local_c;
  pfVar2 = local_48;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


// Assembly code:
// 005f6d40: PUSH EBX
//   Label: core_xform.cpp_buildRotationZ_FUN_005f6d40
// 005f6d41: PUSH EDI
// 005f6d42: SUB ESP,0x40
// 005f6d45: MOV EDX,ESI
// 005f6d47: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 005f6d4b: FLD ST0
// 005f6d4d: FSIN
// 005f6d4f: FXCH
// 005f6d51: FCOS
// 005f6d53: MOV EDI,ESI
// 005f6d55: XOR ECX,ECX
// 005f6d57: XOR EBX,EBX
// 005f6d59: MOV ESI,ESP
// 005f6d5b: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 005f6d5f: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 005f6d63: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005f6d67: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005f6d6b: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005f6d6f: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005f6d73: MOV ECX,0x3f800000
// 005f6d78: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f6d7c: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005f6d80: MOV ECX,0xc
// 005f6d85: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (WRITE)
// 005f6d89: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (READ)
// 005f6d8d: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xc] (WRITE)
// 005f6d91: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x48] (DATA)
// 005f6d94: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0xc] (READ)
// 005f6d98: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xc] (READ)
// 005f6d9c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005f6da0: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (READ)
// 005f6da4: FCHS
// 005f6da6: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005f6daa: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (WRITE)
// 005f6dae: MOVSD.REP ES:EDI,ESI
// 005f6db0: MOV EAX,EDX
// 005f6db2: ADD ESP,0x40
// 005f6db5: POP EDI
// 005f6db6: POP EBX
// 005f6db7: RET
