// Name: core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
// Address: 005f79f0
// Address Range: [[005f79f0, 005f7a29]]
// Convention: __cdecl
// Signature: void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
// Cross-references:
//   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0 (0042dcd0) at 0042dd2b [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d5250 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 00526a4b [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005584a0 (005584a0) at 00558562 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_0059fdd0 (0059fdd0) at 0059fe94 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005be760 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bf720 (005bf720) at 005bf7ad [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005c0131 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c02b0 (005c02b0) at 005c0407 [UNCONDITIONAL_CALL]
// Globals:
//   double g_QuaternionHalfAngleFactor2 = 0.5

#include "nocturne.h"

void __cdecl
core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f *quat_ptr,float angle_radians)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)(float)quat_ptr * (float10)g_QuaternionHalfAngleFactor2);
  fVar2 = (float10)fsin((float10)(float)quat_ptr * (float10)g_QuaternionHalfAngleFactor2);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = 0.0;
  unaff_ESI[2] = (float)fVar2;
  unaff_ESI[3] = 0.0;
  return;
}


// Assembly code:
// 005f79f0: PUSH EDI
//   Label: core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
// 005f79f1: SUB ESP,0x18
// 005f79f4: MOV EDX,ESI
// 005f79f6: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005f79fa: FMUL double ptr [0x0065840d]
//   XREF to: 0065840d (READ)
// 005f7a00: FLD ST0
// 005f7a02: FCOS
// 005f7a04: FXCH
// 005f7a06: FSIN
// 005f7a08: MOV EDI,ESI
// 005f7a0a: XOR ECX,ECX
// 005f7a0c: MOV ESI,ESP
// 005f7a0e: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005f7a12: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 005f7a16: FXCH
// 005f7a18: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005f7a1b: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 005f7a1f: MOVSD ES:EDI,ESI
// 005f7a20: MOVSD ES:EDI,ESI
// 005f7a21: MOVSD ES:EDI,ESI
// 005f7a22: MOVSD ES:EDI,ESI
// 005f7a23: MOV EAX,EDX
// 005f7a25: ADD ESP,0x18
// 005f7a28: POP EDI
// 005f7a29: RET
