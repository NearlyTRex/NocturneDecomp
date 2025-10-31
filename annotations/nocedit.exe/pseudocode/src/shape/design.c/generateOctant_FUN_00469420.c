// Name: shape_design.c_generateOctant_FUN_00469420
// Address: 00469420
// Address Range: [[00469420, 00469687]]
// Convention: __cdecl
// Signature: int shape_design.c_generateOctant_FUN_00469420(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f72c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_in_size_in_heading_0061cf2e
//   TerminatedCString s_Enter_in_size_in_pitch_0061cf4a
//   double g_AngleConstant90Degrees1 = 90
//   TerminatedCString s_Enter_in_radius_0061cf6e
//   double g_AngleConstant90Degrees2 = 90
//   double g_AngleConstant90Degrees3 = 90
//   int[14] g_OctantRotationAngles
//   undefined4 DAT_0066ef14
//   int g_VertexCount
//   int g_PolygonCount
// Function calls:
//   crt_stdlib.c_atoi_FUN_005ffef0
//   crt_string.c_strtod_FUN_005ff0f3
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_addQuadPolygonOctant_FUN_00469220
//   shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
//   shape_design.c_realignObject_FUN_0045ee70

#include "nocturne.h"

int __cdecl shape_design_c_generateOctant_FUN_00469420(void)

{
  char cVar1;
  float radius;
  float heading_angle;
  float fVar2;
  float fVar3;
  float pitch_angle;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  byte bVar9;
  double dVar10;
  char *in_stack_ffffff80;
  int local_30;
  int local_2c;
  int local_14;
  
  bVar9 = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff74,10,0,0,"Enter in size in heading : ");
  iVar5 = -1;
  iVar4 = 0;
  pcVar8 = &stack0xffffff74;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar5 != -2) {
    iVar5 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff74);
    fVar2 = (float)g_AngleConstant90Degrees1 / (float)iVar5;
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff74,10,0,0xb,"Enter in size in pitch : ");
    iVar6 = -1;
    iVar4 = 0;
    pcVar8 = &stack0xffffff74;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar6 != -2) {
      iVar6 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff74);
      fVar3 = (float)g_AngleConstant90Degrees2 / (float)iVar6;
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xffffff74,10,0,0x16,"Enter in radius : ");
      iVar7 = -1;
      iVar4 = 0;
      pcVar8 = &stack0xffffff74;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar7 != -2) {
        dVar10 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff80);
        radius = (float)dVar10;
        iVar4 = SUB84(dVar10,0);
        for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
          for (local_2c = 0; local_2c <= iVar6; local_2c = local_2c + 1) {
            for (local_30 = 0; iVar4 = g_VertexCount, local_30 < iVar5; local_30 = local_30 + 1) {
              heading_angle = (float)local_30 * fVar2;
              pitch_angle = (float)g_AngleConstant90Degrees3 - (float)local_2c * fVar3;
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle,pitch_angle,radius);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle + fVar2,pitch_angle,radius);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle + fVar2,pitch_angle + fVar3,radius);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle,pitch_angle + fVar3,radius);
              shape_design_c_addQuadPolygonOctant_FUN_00469220(iVar4 + 3,iVar4 + 2,iVar4 + 1,iVar4);
            }
          }
          if (local_14 != 7) {
            shape_design_c_realignObject_FUN_0045ee70
                      (g_OctantRotationAngles[local_14],0,g_OctantRotationAngles[local_14 + 7]);
          }
          iVar4 = local_14;
        }
      }
    }
  }
  return iVar4;
}


// Assembly code:
// 00469420: PUSH EBX
//   Label: shape_design.c_generateOctant_FUN_00469420
// 00469421: PUSH ESI
// 00469422: PUSH EDI
// 00469423: PUSH EBP
// 00469424: MOV EBP,ESP
// 00469426: SUB ESP,0x84
// 0046942c: MOV dword ptr [0x016e990c],0x0
//   XREF to: 016e990c (WRITE)
// 00469436: MOV dword ptr [0x01626408],0x0
//   XREF to: 01626408 (WRITE)
// 00469440: MOV ECX,0x61cf2e
//   XREF to: 0061cf2e (DATA)
// 00469445: PUSH ECX
//   XREF to: 0061cf2e (DATA)
// 00469446: PUSH 0x0
// 00469448: PUSH 0x0
// 0046944a: PUSH 0xa
// 0046944c: LEA ECX,[EBP + -0x7c]
//   XREF to: Stack[-0x8c] (DATA)
// 0046944f: PUSH ECX
// 00469450: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00469455: ADD ESP,0x14
// 00469458: LEA EDI,[EBP + -0x7c]
//   XREF to: Stack[-0x8c] (DATA)
// 0046945b: SUB ECX,ECX
// 0046945d: DEC ECX
// 0046945e: XOR EAX,EAX
// 00469460: SCASB.REPNE ES:EDI
// 00469462: NOT ECX
// 00469464: DEC ECX
// 00469465: TEST ECX,ECX
// 00469467: JNZ 0x0046946e
//   XREF to: 0046946e (CONDITIONAL_JUMP)
// 00469469: JMP 0x00469681
//   XREF to: 00469681 (UNCONDITIONAL_JUMP)
// 0046946e: LEA EAX,[EBP + -0x7c]
//   Label: LAB_0046946e
//   XREF to: Stack[-0x8c] (DATA)
// 00469471: PUSH EAX
// 00469472: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 00469477: ADD ESP,0x4
// 0046947a: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0046947d: FILD dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00469480: FDIVR double ptr [0x0061cf66]
//   XREF to: 0061cf66 (READ)
// 00469486: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00469489: MOV EAX,0x61cf4a
//   XREF to: 0061cf4a (DATA)
// 0046948e: PUSH EAX
//   XREF to: 0061cf4a (DATA)
// 0046948f: PUSH 0xb
// 00469491: PUSH 0x0
// 00469493: PUSH 0xa
// 00469495: LEA EAX,[EBP + -0x7c]
//   XREF to: Stack[-0x8c] (DATA)
// 00469498: PUSH EAX
// 00469499: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0046949e: ADD ESP,0x14
// 004694a1: LEA EDI,[EBP + -0x7c]
//   XREF to: Stack[-0x8c] (DATA)
// 004694a4: SUB ECX,ECX
// 004694a6: DEC ECX
// 004694a7: XOR EAX,EAX
// 004694a9: SCASB.REPNE ES:EDI
// 004694ab: NOT ECX
// 004694ad: DEC ECX
// 004694ae: TEST ECX,ECX
// 004694b0: JNZ 0x004694b7
//   XREF to: 004694b7 (CONDITIONAL_JUMP)
// 004694b2: JMP 0x00469681
//   XREF to: 00469681 (UNCONDITIONAL_JUMP)
// 004694b7: LEA EAX,[EBP + -0x7c]
//   Label: LAB_004694b7
//   XREF to: Stack[-0x8c] (DATA)
// 004694ba: PUSH EAX
// 004694bb: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 004694c0: ADD ESP,0x4
// 004694c3: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004694c6: FILD dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 004694c9: FDIVR double ptr [0x0061cf86]
//   XREF to: 0061cf86 (READ)
// 004694cf: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 004694d2: MOV EAX,0x61cf6e
//   XREF to: 0061cf6e (DATA)
// 004694d7: PUSH EAX
//   XREF to: 0061cf6e (DATA)
// 004694d8: PUSH 0x16
// 004694da: PUSH 0x0
// 004694dc: PUSH 0xa
// 004694de: LEA EAX,[EBP + -0x7c]
//   XREF to: Stack[-0x8c] (DATA)
// 004694e1: PUSH EAX
// 004694e2: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 004694e7: ADD ESP,0x14
// 004694ea: LEA EDI,[EBP + -0x7c]
//   XREF to: Stack[-0x8c] (DATA)
// 004694ed: SUB ECX,ECX
// 004694ef: DEC ECX
// 004694f0: XOR EAX,EAX
// 004694f2: SCASB.REPNE ES:EDI
// 004694f4: NOT ECX
// 004694f6: DEC ECX
// 004694f7: TEST ECX,ECX
// 004694f9: JNZ 0x00469500
//   XREF to: 00469500 (CONDITIONAL_JUMP)
// 004694fb: JMP 0x00469681
//   XREF to: 00469681 (UNCONDITIONAL_JUMP)
// 00469500: LEA EAX,[EBP + -0x7c]
//   Label: LAB_00469500
//   XREF to: Stack[-0x8c] (DATA)
// 00469503: PUSH EAX
// 00469504: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 00469509: MOV dword ptr [EBP + 0xffffff7c],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 0046950f: MOV dword ptr [EBP + -0x80],EDX
//   XREF to: Stack[-0x90] (WRITE)
// 00469512: FLD double ptr [EBP + 0xffffff7c]
//   XREF to: Stack[-0x94] (READ)
// 00469518: ADD ESP,0x4
// 0046951b: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0046951e: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 00469525: JMP 0x0046952d
//   XREF to: 0046952d (UNCONDITIONAL_JUMP)
// 00469527: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_00469527
//   XREF to: Stack[-0x14] (READ)
// 0046952a: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046952d: CMP dword ptr [EBP + -0x4],0x8
//   Label: LAB_0046952d
//   XREF to: Stack[-0x14] (READ)
// 00469531: JGE 0x00469681
//   XREF to: 00469681 (CONDITIONAL_JUMP)
// 00469537: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 0046953e: JMP 0x00469546
//   XREF to: 00469546 (UNCONDITIONAL_JUMP)
// 00469540: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00469540
//   XREF to: Stack[-0x2c] (READ)
// 00469543: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00469546: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00469546
//   XREF to: Stack[-0x2c] (READ)
// 00469549: CMP EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046954c: JG 0x00469654
//   XREF to: 00469654 (CONDITIONAL_JUMP)
// 00469552: MOV dword ptr [EBP + -0x20],0x0
//   XREF to: Stack[-0x30] (WRITE)
// 00469559: JMP 0x00469561
//   XREF to: 00469561 (UNCONDITIONAL_JUMP)
// 0046955b: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_0046955b
//   XREF to: Stack[-0x30] (READ)
// 0046955e: INC dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ_WRITE)
// 00469561: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_00469561
//   XREF to: Stack[-0x30] (READ)
// 00469564: CMP EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00469567: JGE 0x0046964f
//   XREF to: 0046964f (CONDITIONAL_JUMP)
// 0046956d: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00469572: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00469575: FILD dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00469578: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046957b: FSTP float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0046957e: FILD dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00469581: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00469584: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00469587: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046958a: FSUBR double ptr [0x0061cf8e]
//   XREF to: 0061cf8e (READ)
// 00469590: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00469593: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00469596: SUB ESP,0x4
// 00469599: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0046959c: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046959f: SUB ESP,0x4
// 004695a2: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 004695a5: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004695a8: SUB ESP,0x4
// 004695ab: FSTP float ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 004695ae: CALL shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
//   XREF to: 00469140 (UNCONDITIONAL_CALL)
// 004695b3: ADD ESP,0xc
// 004695b6: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004695b9: SUB ESP,0x4
// 004695bc: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004695bf: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004695c2: SUB ESP,0x4
// 004695c5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 004695c8: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004695cb: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004695ce: SUB ESP,0x4
// 004695d1: FSTP float ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 004695d4: CALL shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
//   XREF to: 00469140 (UNCONDITIONAL_CALL)
// 004695d9: ADD ESP,0xc
// 004695dc: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004695df: SUB ESP,0x4
// 004695e2: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004695e5: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004695e8: FADD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004695eb: SUB ESP,0x4
// 004695ee: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 004695f1: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004695f4: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004695f7: SUB ESP,0x4
// 004695fa: FSTP float ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 004695fd: CALL shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
//   XREF to: 00469140 (UNCONDITIONAL_CALL)
// 00469602: ADD ESP,0xc
// 00469605: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00469608: SUB ESP,0x4
// 0046960b: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0046960e: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00469611: FADD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00469614: SUB ESP,0x4
// 00469617: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 0046961a: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046961d: SUB ESP,0x4
// 00469620: FSTP float ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 00469623: CALL shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
//   XREF to: 00469140 (UNCONDITIONAL_CALL)
// 00469628: ADD ESP,0xc
// 0046962b: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046962e: PUSH EAX
// 0046962f: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00469632: INC EAX
// 00469633: PUSH EAX
// 00469634: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00469637: ADD EAX,0x2
// 0046963a: PUSH EAX
// 0046963b: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046963e: ADD EAX,0x3
// 00469641: PUSH EAX
// 00469642: CALL shape_design.c_addQuadPolygonOctant_FUN_00469220
//   XREF to: 00469220 (UNCONDITIONAL_CALL)
// 00469647: ADD ESP,0x10
// 0046964a: JMP 0x0046955b
//   XREF to: 0046955b (UNCONDITIONAL_JUMP)
// 0046964f: JMP 0x00469540
//   Label: LAB_0046964f
//   XREF to: 00469540 (UNCONDITIONAL_JUMP)
// 00469654: CMP dword ptr [EBP + -0x4],0x7
//   Label: LAB_00469654
//   XREF to: Stack[-0x14] (READ)
// 00469658: JZ 0x0046967c
//   XREF to: 0046967c (CONDITIONAL_JUMP)
// 0046965a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046965d: SHL EAX,0x2
// 00469660: PUSH dword ptr [EAX + 0x66ef14]
//   XREF to: 0066ef14 (DATA)
// 00469666: PUSH 0x0
// 00469668: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046966b: SHL EAX,0x2
// 0046966e: PUSH dword ptr [EAX + 0x66eef8]
//   XREF to: 0066eef8 (DATA)
// 00469674: CALL shape_design.c_realignObject_FUN_0045ee70
//   XREF to: 0045ee70 (UNCONDITIONAL_CALL)
// 00469679: ADD ESP,0xc
// 0046967c: JMP 0x00469527
//   Label: LAB_0046967c
//   XREF to: 00469527 (UNCONDITIONAL_JUMP)
// 00469681: MOV ESP,EBP
//   Label: LAB_00469681
// 00469683: POP EBP
// 00469684: POP EDI
// 00469685: POP ESI
// 00469686: POP EBX
// 00469687: RET
