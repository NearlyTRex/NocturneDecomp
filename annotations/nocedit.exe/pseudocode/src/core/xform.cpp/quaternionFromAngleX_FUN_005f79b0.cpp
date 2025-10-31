// Name: core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
// Address: 005f79b0
// Address Range: [[005f79b0, 005f79e9]]
// Convention: __cdecl
// Signature: void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians)
// Cross-references:
//   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0 (0042dcd0) at 0042dd08 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d4f12 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8810 (004f8810) at 004f88f4 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 00526a06 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005584a0 (005584a0) at 005585ca [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_0059fdd0 (0059fdd0) at 0059fe70 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bef28 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005c0007 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c02b0 (005c02b0) at 005c0431 [UNCONDITIONAL_CALL]
// Globals:
//   double g_QuaternionHalfAngleFactor1 = 0.5

#include "nocturne.h"

void __cdecl
core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f *quat_ptr,float angle_radians)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)(float)quat_ptr * (float10)g_QuaternionHalfAngleFactor1);
  fVar2 = (float10)fsin((float10)(float)quat_ptr * (float10)g_QuaternionHalfAngleFactor1);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = (float)fVar2;
  unaff_ESI[2] = 0.0;
  unaff_ESI[3] = 0.0;
  return;
}


// Assembly code:
// 005f79b0: PUSH EDI
//   Label: core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
// 005f79b1: SUB ESP,0x18
// 005f79b4: MOV EDX,ESI
// 005f79b6: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005f79ba: FMUL double ptr [0x00658405]
//   XREF to: 00658405 (READ)
// 005f79c0: FLD ST0
// 005f79c2: FCOS
// 005f79c4: FXCH
// 005f79c6: FSIN
// 005f79c8: MOV EDI,ESI
// 005f79ca: XOR ECX,ECX
// 005f79cc: MOV ESI,ESP
// 005f79ce: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005f79d2: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 005f79d6: FXCH
// 005f79d8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005f79db: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 005f79df: MOVSD ES:EDI,ESI
// 005f79e0: MOVSD ES:EDI,ESI
// 005f79e1: MOVSD ES:EDI,ESI
// 005f79e2: MOVSD ES:EDI,ESI
// 005f79e3: MOV EAX,EDX
// 005f79e5: ADD ESP,0x18
// 005f79e8: POP EDI
// 005f79e9: RET
