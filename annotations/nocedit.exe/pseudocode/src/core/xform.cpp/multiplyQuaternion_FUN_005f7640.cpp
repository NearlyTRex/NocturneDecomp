// Name: core_xform.cpp_multiplyQuaternion_FUN_005f7640
// Address: 005f7640
// Address Range: [[005f7640, 005f76f1]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0 (0042dcd0) at 0042dd48 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443405 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d5162 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005584a0 (005584a0) at 005585e7 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20 (0059ff20) at 005a0059 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0 (0059fdd0) at 0059feb9 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 (0059eb50) at 0059f1a5 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260 (0059f260) at 0059f6a5 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 (0059e0a0) at 0059e908 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c02b0 (005c02b0) at 005c0530 [UNCONDITIONAL_CALL]
//   core_xform.cpp_multiplyQuaternionInPlace_FUN_005f7700 (005f7700) at 005f7716 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_multiplyQuaternion_FUN_005f7640
          (CQuaternion4f *result_out,CQuaternion4f *quat1_ptr,CQuaternion4f *quat2_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  CQuaternion4f *unaff_ESI;
  
  fVar1 = quat1_ptr->w;
  fVar2 = result_out->x;
  fVar3 = quat1_ptr->w;
  fVar4 = result_out->y;
  fVar5 = quat1_ptr->w;
  fVar6 = result_out->z;
  fVar7 = result_out->w;
  fVar8 = quat1_ptr->x;
  fVar9 = result_out->w;
  fVar10 = quat1_ptr->y;
  fVar11 = result_out->w;
  fVar12 = quat1_ptr->z;
  fVar13 = quat1_ptr->y;
  fVar14 = result_out->z;
  fVar15 = quat1_ptr->z;
  fVar16 = result_out->x;
  fVar17 = quat1_ptr->z;
  fVar18 = result_out->y;
  fVar19 = quat1_ptr->x;
  fVar20 = result_out->y;
  fVar21 = quat1_ptr->x;
  fVar22 = result_out->z;
  fVar23 = quat1_ptr->y;
  fVar24 = result_out->x;
  unaff_ESI->w = quat1_ptr->w * result_out->w -
                 (quat1_ptr->z * result_out->z +
                 quat1_ptr->y * result_out->y + quat1_ptr->x * result_out->x);
  unaff_ESI->x = (fVar13 * fVar14 + fVar7 * fVar8 + fVar1 * fVar2) - fVar17 * fVar18;
  unaff_ESI->y = (fVar15 * fVar16 + fVar9 * fVar10 + fVar3 * fVar4) - fVar21 * fVar22;
  unaff_ESI->z = (fVar19 * fVar20 + fVar11 * fVar12 + fVar5 * fVar6) - fVar23 * fVar24;
  return unaff_ESI;
}


// Assembly code:
// 005f7640: PUSH EDI
//   Label: core_xform.cpp_multiplyQuaternion_FUN_005f7640
// 005f7641: SUB ESP,0x10
// 005f7644: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005f7648: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005f764c: MOV ECX,ESI
// 005f764e: FLD float ptr [EDX + 0x4]
// 005f7651: FMUL float ptr [EAX + 0x4]
// 005f7654: FLD float ptr [EDX]
// 005f7656: FMUL float ptr [EAX + 0x4]
// 005f7659: FLD float ptr [EDX]
// 005f765b: FMUL float ptr [EAX + 0x8]
// 005f765e: FLD float ptr [EDX]
// 005f7660: FMUL float ptr [EAX + 0xc]
// 005f7663: FLD float ptr [EDX + 0x8]
// 005f7666: FMUL float ptr [EAX + 0x8]
// 005f7669: FLD float ptr [EAX]
// 005f766b: FXCH
// 005f766d: FADDP ST5,ST0
// 005f766f: FMUL float ptr [EDX + 0x4]
// 005f7672: FLD float ptr [EDX + 0xc]
// 005f7675: FMUL float ptr [EAX + 0xc]
// 005f7678: FLD float ptr [EAX]
// 005f767a: FMUL float ptr [EDX + 0x8]
// 005f767d: FXCH
// 005f767f: FADDP ST6,ST0
// 005f7681: FLD float ptr [EAX]
// 005f7683: FXCH ST2
// 005f7685: FADDP ST5,ST0
// 005f7687: FXCH
// 005f7689: FMUL float ptr [EDX + 0xc]
// 005f768c: FLD float ptr [EDX + 0x8]
// 005f768f: FMUL float ptr [EAX + 0xc]
// 005f7692: FXCH ST2
// 005f7694: FADDP ST4,ST0
// 005f7696: FXCH
// 005f7698: FADDP ST4,ST0
// 005f769a: FLD float ptr [EDX]
// 005f769c: FMUL float ptr [EAX]
// 005f769e: FLD float ptr [EDX + 0xc]
// 005f76a1: FMUL float ptr [EAX + 0x4]
// 005f76a4: FXCH ST2
// 005f76a6: FADDP ST3,ST0
// 005f76a8: FXCH
// 005f76aa: FADDP ST3,ST0
// 005f76ac: FLD float ptr [EDX + 0xc]
// 005f76af: FMUL float ptr [EAX + 0x8]
// 005f76b2: FLD float ptr [EDX + 0x4]
// 005f76b5: FMUL float ptr [EAX + 0x8]
// 005f76b8: FADDP ST3,ST0
// 005f76ba: FXCH
// 005f76bc: FSUBRP ST5,ST0
// 005f76be: FLD float ptr [EDX + 0x4]
// 005f76c1: FMUL float ptr [EAX + 0xc]
// 005f76c4: FLD float ptr [EDX + 0x8]
// 005f76c7: FMUL float ptr [EAX + 0x4]
// 005f76ca: MOV EDI,ESI
// 005f76cc: MOV ESI,ESP
// 005f76ce: FXCH ST2
// 005f76d0: FSUBP ST5,ST0
// 005f76d2: FSUBP ST3,ST0
// 005f76d4: FSUBP
// 005f76d6: FXCH ST2
// 005f76d8: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (WRITE)
// 005f76dc: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 005f76e0: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (WRITE)
// 005f76e4: FSTP float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005f76e7: MOVSD ES:EDI,ESI
// 005f76e8: MOVSD ES:EDI,ESI
// 005f76e9: MOVSD ES:EDI,ESI
// 005f76ea: MOVSD ES:EDI,ESI
// 005f76eb: MOV EAX,ECX
// 005f76ed: ADD ESP,0x10
// 005f76f0: POP EDI
// 005f76f1: RET
