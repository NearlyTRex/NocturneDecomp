// Name: core_xform.cpp_matrixToQuaternion_FUN_005f7420
// Address: 005f7420
// Address Range: [[005f7420, 005f75d5]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CQuaternion4f * quat_out, CMatrix3x3f * matrix_ptr)
// Cross-references:
//   core_course.cpp_CCourse_importMatrices_FUN_00442ea0 (00442ea0) at 00443006 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054ea00 (0054ea00) at 0054ef87 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00595af4 [UNCONDITIONAL_CALL]
//   core_xform.cpp_eulerToQuaternionIndirect_FUN_005f7b70 (005f7b70) at 005f7ba2 [UNCONDITIONAL_CALL]
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20 (005f7b20) at 005f7b52 [UNCONDITIONAL_CALL]
//   core_xform.cpp_lerpMatrix3x4_FUN_005f7140 (005f7140) at 005f71ac [UNCONDITIONAL_CALL]
// Globals:
//   double g_QuaternionMatrixConversionHalf = 0.5

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_matrixToQuaternion_FUN_005f7420(CQuaternion4f *quat_out,CMatrix3x3f *matrix_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CQuaternion4f *unaff_ESI;
  float local_48;
  float local_44;
  
  fVar1 = quat_out->w + quat_out[1].x;
  fVar2 = fVar1 + quat_out[2].y;
  if (0.0 < fVar2) {
    local_48 = SQRT(fVar2 + 1.0);
    fVar1 = (float)g_QuaternionMatrixConversionHalf / local_48;
    local_48 = local_48 * (float)g_QuaternionMatrixConversionHalf;
    local_44 = (quat_out[2].x - quat_out[1].y) * fVar1;
    fVar2 = (quat_out->y - quat_out[2].w) * fVar1;
    fVar1 = (quat_out[1].w - quat_out->x) * fVar1;
LAB_005f74ae:
    unaff_ESI->w = local_48;
    unaff_ESI->x = local_44;
    unaff_ESI->y = fVar2;
    unaff_ESI->z = fVar1;
    return unaff_ESI;
  }
  if (quat_out->w <= quat_out[1].x) {
    if (quat_out[2].y < quat_out[1].x) {
      fVar5 = SQRT((quat_out[1].x - (quat_out[2].y + quat_out->w)) + 1.0);
      fVar7 = (float)g_QuaternionMatrixConversionHalf;
      fVar6 = fVar7 / fVar5;
      fVar1 = quat_out->x;
      fVar2 = quat_out[2].x;
      fVar3 = quat_out[1].y;
      fVar4 = quat_out[1].w;
      unaff_ESI->w = (quat_out->y - quat_out[2].w) * fVar6;
      unaff_ESI->x = (fVar1 + fVar4) * fVar6;
      unaff_ESI->y = fVar5 * fVar7;
      unaff_ESI->z = (fVar2 + fVar3) * fVar6;
      return unaff_ESI;
    }
  }
  else if (quat_out[2].y < quat_out->w) {
    local_44 = SQRT((quat_out->w - (quat_out[1].x + quat_out[2].y)) + 1.0);
    fVar1 = (float)g_QuaternionMatrixConversionHalf / local_44;
    local_44 = local_44 * (float)g_QuaternionMatrixConversionHalf;
    local_48 = (quat_out[2].x - quat_out[1].y) * fVar1;
    fVar2 = (quat_out[1].w + quat_out->x) * fVar1;
    fVar1 = (quat_out[2].w + quat_out->y) * fVar1;
    goto LAB_005f74ae;
  }
  fVar5 = SQRT((quat_out[2].y - fVar1) + 1.0);
  fVar7 = (float)g_QuaternionMatrixConversionHalf;
  fVar6 = fVar7 / fVar5;
  fVar1 = quat_out[1].y;
  fVar2 = quat_out->y;
  fVar3 = quat_out[2].w;
  fVar4 = quat_out[2].x;
  unaff_ESI->w = (quat_out[1].w - quat_out->x) * fVar6;
  unaff_ESI->x = (fVar2 + fVar3) * fVar6;
  unaff_ESI->y = (fVar1 + fVar4) * fVar6;
  unaff_ESI->z = fVar5 * fVar7;
  return unaff_ESI;
}


// Assembly code:
// 005f7420: PUSH EDI
//   Label: core_xform.cpp_matrixToQuaternion_FUN_005f7420
// 005f7421: PUSH EBP
// 005f7422: MOV EBP,ESP
// 005f7424: SUB ESP,0x44
// 005f7427: AND ESP,0xfffffff8
// 005f742a: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005f742d: MOV ECX,ESI
// 005f742f: FLD float ptr [EDX]
// 005f7431: FADD float ptr [EDX + 0x14]
// 005f7434: FST float ptr [ESP + 0x40]
//   XREF to: Stack[-0x10] (WRITE)
// 005f7438: FADD float ptr [EDX + 0x28]
// 005f743b: FLDZ
// 005f743d: FXCH
// 005f743f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 005f7442: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 005f7445: FNSTSW AX
// 005f7447: SAHF
// 005f7448: JC 0x005f74c7
//   XREF to: 005f74c7 (CONDITIONAL_JUMP)
// 005f744a: FLD float ptr [EDX]
// 005f744c: FCOMP float ptr [EDX + 0x14]
// 005f744f: FNSTSW AX
// 005f7451: SAHF
// 005f7452: JBE 0x005f756a
//   XREF to: 005f756a (CONDITIONAL_JUMP)
// 005f7458: FLD float ptr [EDX]
// 005f745a: FCOMP float ptr [EDX + 0x28]
// 005f745d: FNSTSW AX
// 005f745f: SAHF
// 005f7460: JBE 0x005f750a
//   XREF to: 005f750a (CONDITIONAL_JUMP)
// 005f7466: FLD float ptr [EDX + 0x14]
// 005f7469: FADD float ptr [EDX + 0x28]
// 005f746c: FSUBR float ptr [EDX]
// 005f746e: FLD1
// 005f7470: FADDP
// 005f7472: FSQRT
// 005f7474: FLD double ptr [0x006583e5]
//   XREF to: 006583e5 (READ)
// 005f747a: FLD ST0
// 005f747c: FDIV ST0,ST2
// 005f747e: FLD ST2
// 005f7480: FMULP ST2
// 005f7482: FLD float ptr [EDX + 0x24]
// 005f7485: FSUB float ptr [EDX + 0x18]
// 005f7488: FXCH
// 005f748a: FSTP ST3
// 005f748c: FMUL ST2
// 005f748e: FLD float ptr [EDX + 0x20]
// 005f7491: FLD float ptr [EDX + 0x10]
// 005f7494: FADD float ptr [EDX + 0x4]
// 005f7497: FXCH
// 005f7499: FADD float ptr [EDX + 0x8]
// 005f749c: FXCH
// 005f749e: FMUL ST4
// 005f74a0: FXCH
// 005f74a2: FMULP ST4
// 005f74a4: FXCH ST2
// 005f74a6: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (WRITE)
// 005f74aa: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 005f74ae: FSTP float ptr [ESP + 0x10]
//   Label: LAB_005f74ae
//   XREF to: Stack[-0x40] (WRITE)
// 005f74b2: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (WRITE)
// 005f74b6: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x48] (DATA)
// 005f74ba: MOV EDI,ECX
// 005f74bc: MOVSD ES:EDI,ESI
// 005f74bd: MOVSD ES:EDI,ESI
// 005f74be: MOVSD ES:EDI,ESI
// 005f74bf: MOVSD ES:EDI,ESI
// 005f74c0: MOV EAX,ECX
// 005f74c2: MOV ESP,EBP
// 005f74c4: POP EBP
// 005f74c5: POP EDI
// 005f74c6: RET
// 005f74c7: FLD1
//   Label: LAB_005f74c7
// 005f74c9: FADD double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 005f74cc: FSQRT
// 005f74ce: FLD double ptr [0x006583e5]
//   XREF to: 006583e5 (READ)
// 005f74d4: FLD ST0
// 005f74d6: FDIV ST0,ST2
// 005f74d8: FLD ST2
// 005f74da: FMULP ST2
// 005f74dc: FLD float ptr [EDX + 0x24]
// 005f74df: FSUB float ptr [EDX + 0x18]
// 005f74e2: FXCH
// 005f74e4: FSTP ST3
// 005f74e6: FMUL ST2
// 005f74e8: FLD float ptr [EDX + 0x10]
// 005f74eb: FLD float ptr [EDX + 0x8]
// 005f74ee: FSUB float ptr [EDX + 0x20]
// 005f74f1: FXCH
// 005f74f3: FSUB float ptr [EDX + 0x4]
// 005f74f6: FXCH
// 005f74f8: FMUL ST4
// 005f74fa: FXCH
// 005f74fc: FMULP ST4
// 005f74fe: FXCH ST2
// 005f7500: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 005f7504: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (WRITE)
// 005f7508: JMP 0x005f74ae
//   XREF to: 005f74ae (UNCONDITIONAL_JUMP)
// 005f750a: FLD float ptr [EDX + 0x28]
//   Label: LAB_005f750a
// 005f750d: FSUB float ptr [ESP + 0x40]
//   XREF to: Stack[-0x10] (READ)
// 005f7511: FLD1
// 005f7513: FADDP
// 005f7515: FSQRT
// 005f7517: FLD double ptr [0x006583e5]
//   XREF to: 006583e5 (READ)
// 005f751d: FLD ST0
// 005f751f: FDIV ST0,ST2
// 005f7521: FLD ST2
// 005f7523: FMULP ST2
// 005f7525: FLD float ptr [EDX + 0x10]
// 005f7528: FSUB float ptr [EDX + 0x4]
// 005f752b: FXCH
// 005f752d: FSTP ST3
// 005f752f: FMUL ST2
// 005f7531: FLD float ptr [EDX + 0x18]
// 005f7534: FLD float ptr [EDX + 0x8]
// 005f7537: FADD float ptr [EDX + 0x20]
// 005f753a: FXCH
// 005f753c: FADD float ptr [EDX + 0x24]
// 005f753f: FXCH
// 005f7541: FMUL ST4
// 005f7543: FXCH
// 005f7545: FMULP ST4
// 005f7547: FXCH ST2
// 005f7549: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (WRITE)
// 005f754d: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 005f7551: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (WRITE)
// 005f7555: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (WRITE)
// 005f7559: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x48] (DATA)
// 005f755d: MOV EDI,ECX
// 005f755f: MOVSD ES:EDI,ESI
// 005f7560: MOVSD ES:EDI,ESI
// 005f7561: MOVSD ES:EDI,ESI
// 005f7562: MOVSD ES:EDI,ESI
// 005f7563: MOV EAX,ECX
// 005f7565: MOV ESP,EBP
// 005f7567: POP EBP
// 005f7568: POP EDI
// 005f7569: RET
// 005f756a: FLD float ptr [EDX + 0x14]
//   Label: LAB_005f756a
// 005f756d: FCOMP float ptr [EDX + 0x28]
// 005f7570: FNSTSW AX
// 005f7572: SAHF
// 005f7573: JBE 0x005f750a
//   XREF to: 005f750a (CONDITIONAL_JUMP)
// 005f7575: FLD float ptr [EDX + 0x28]
// 005f7578: FADD float ptr [EDX]
// 005f757a: FSUBR float ptr [EDX + 0x14]
// 005f757d: FLD1
// 005f757f: FADDP
// 005f7581: FSQRT
// 005f7583: FLD double ptr [0x006583e5]
//   XREF to: 006583e5 (READ)
// 005f7589: FLD ST0
// 005f758b: FDIV ST0,ST2
// 005f758d: FLD ST2
// 005f758f: FMULP ST2
// 005f7591: FLD float ptr [EDX + 0x8]
// 005f7594: FSUB float ptr [EDX + 0x20]
// 005f7597: FXCH
// 005f7599: FSTP ST3
// 005f759b: FMUL ST2
// 005f759d: FLD float ptr [EDX + 0x4]
// 005f75a0: FLD float ptr [EDX + 0x24]
// 005f75a3: FADD float ptr [EDX + 0x18]
// 005f75a6: FXCH
// 005f75a8: FADD float ptr [EDX + 0x10]
// 005f75ab: FXCH
// 005f75ad: FMUL ST4
// 005f75af: FXCH
// 005f75b1: FMULP ST4
// 005f75b3: FXCH ST2
// 005f75b5: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (WRITE)
// 005f75b9: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (WRITE)
// 005f75bd: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (WRITE)
// 005f75c1: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (WRITE)
// 005f75c5: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x48] (DATA)
// 005f75c9: MOV EDI,ECX
// 005f75cb: MOVSD ES:EDI,ESI
// 005f75cc: MOVSD ES:EDI,ESI
// 005f75cd: MOVSD ES:EDI,ESI
// 005f75ce: MOVSD ES:EDI,ESI
// 005f75cf: MOV EAX,ECX
// 005f75d1: MOV ESP,EBP
// 005f75d3: POP EBP
// 005f75d4: POP EDI
// 005f75d5: RET
