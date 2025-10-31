// Name: core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
// Address: 005f7a30
// Address Range: [[005f7a30, 005f7a69]]
// Convention: __cdecl
// Signature: void core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30(CQuaternion4f * quat_ptr, float angle_radians)
// Cross-references:
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d522f [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005584a0 (005584a0) at 00558585 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c02b0 (005c02b0) at 005c0311 [UNCONDITIONAL_CALL]
// Globals:
//   double g_QuaternionHalfAngleFactor3 = 0.5

#include "nocturne.h"

void __cdecl
core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(CQuaternion4f *quat_ptr,float angle_radians)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)(float)quat_ptr * (float10)g_QuaternionHalfAngleFactor3);
  fVar2 = (float10)fsin((float10)(float)quat_ptr * (float10)g_QuaternionHalfAngleFactor3);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = 0.0;
  unaff_ESI[2] = 0.0;
  unaff_ESI[3] = (float)fVar2;
  return;
}


// Assembly code:
// 005f7a30: PUSH EDI
//   Label: core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
// 005f7a31: SUB ESP,0x18
// 005f7a34: MOV EDX,ESI
// 005f7a36: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005f7a3a: FMUL double ptr [0x00658415]
//   XREF to: 00658415 (READ)
// 005f7a40: FLD ST0
// 005f7a42: FCOS
// 005f7a44: FXCH
// 005f7a46: FSIN
// 005f7a48: MOV EDI,ESI
// 005f7a4a: XOR ECX,ECX
// 005f7a4c: MOV ESI,ESP
// 005f7a4e: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005f7a52: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005f7a56: FXCH
// 005f7a58: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005f7a5b: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (WRITE)
// 005f7a5f: MOVSD ES:EDI,ESI
// 005f7a60: MOVSD ES:EDI,ESI
// 005f7a61: MOVSD ES:EDI,ESI
// 005f7a62: MOVSD ES:EDI,ESI
// 005f7a63: MOV EAX,EDX
// 005f7a65: ADD ESP,0x18
// 005f7a68: POP EDI
// 005f7a69: RET
