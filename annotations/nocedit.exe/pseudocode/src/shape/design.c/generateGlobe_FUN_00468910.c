// Name: shape_design.c_generateGlobe_FUN_00468910
// Address: 00468910
// Address Range: [[00468910, 00468c3b]]
// Convention: __cdecl
// Signature: void shape_design.c_generateGlobe_FUN_00468910(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f718 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_in_size_in_heading_0061cdf6
//   TerminatedCString s_Enter_in_size_in_pitch_0061ce12
//   double g_FullCircleDegrees = 360
//   TerminatedCString s_Enter_in_radius_0061ce36
//   double g_HalfCircleDegrees = 180
//   double g_RightAngleDegrees_1 = 90
//   double g_RightAngleDegrees_2 = 90
//   int g_VertexCount
//   int g_PolygonCount
// Function calls:
//   crt_stdlib.c_atoi_FUN_005ffef0
//   crt_string.c_strtod_FUN_005ff0f3
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_addQuadPolygon_FUN_004687c0
//   shape_design.c_addVertexFromSphericalCoords_FUN_004686e0

#include "nocturne.h"

void __cdecl shape_design_c_generateGlobe_FUN_00468910(void)

{
  char cVar1;
  float radius;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  char *pcVar9;
  byte bVar10;
  double dVar11;
  char *in_stack_ffffff84;
  int local_2c;
  int local_28;
  
  bVar10 = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff78,10,0,0,"Enter in size in heading : ");
  iVar6 = -1;
  pcVar9 = &stack0xffffff78;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar6 != -2) {
    iVar6 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff78);
    fVar3 = (float)g_FullCircleDegrees / (float)iVar6;
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff78,10,0,0xb,"Enter in size in pitch : ");
    iVar7 = -1;
    pcVar9 = &stack0xffffff78;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar7 != -2) {
      iVar7 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff78);
      fVar4 = (float)g_HalfCircleDegrees / (float)iVar7;
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xffffff78,10,0,0x16,"Enter in radius : ");
      iVar8 = -1;
      pcVar9 = &stack0xffffff78;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar8 != -2) {
        dVar11 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff84);
        radius = (float)dVar11;
        for (local_28 = 0; local_28 <= iVar7; local_28 = local_28 + 1) {
          for (local_2c = 0; iVar8 = g_VertexCount, local_2c < iVar6 / 2; local_2c = local_2c + 1) {
            fVar2 = (float)local_2c * fVar3;
            fVar5 = (float)g_RightAngleDegrees_1 - (float)local_28 * fVar4;
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2,fVar5,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2 + fVar3,fVar5,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0
                      (fVar2 + fVar3,fVar5 + fVar4,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2,fVar5 + fVar4,radius);
            shape_design_c_addQuadPolygon_FUN_004687c0(iVar8 + 3,iVar8 + 2,iVar8 + 1,iVar8);
          }
          for (local_2c = iVar6 / 2; iVar8 = g_VertexCount, local_2c < iVar6;
              local_2c = local_2c + 1) {
            fVar2 = (float)local_2c * fVar3;
            fVar5 = (float)g_RightAngleDegrees_2 - (float)local_28 * fVar4;
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2,fVar5,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2 + fVar3,fVar5,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0
                      (fVar2 + fVar3,fVar5 + fVar4,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2,fVar5 + fVar4,radius);
            shape_design_c_addQuadPolygon_FUN_004687c0(iVar8 + 3,iVar8 + 2,iVar8 + 1,iVar8);
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00468910: PUSH EBX
//   Label: shape_design.c_generateGlobe_FUN_00468910
// 00468911: PUSH ESI
// 00468912: PUSH EDI
// 00468913: PUSH EBP
// 00468914: MOV EBP,ESP
// 00468916: SUB ESP,0x80
// 0046891c: MOV dword ptr [0x016e990c],0x0
//   XREF to: 016e990c (WRITE)
// 00468926: MOV dword ptr [0x01626408],0x0
//   XREF to: 01626408 (WRITE)
// 00468930: MOV ECX,0x61cdf6
//   XREF to: 0061cdf6 (DATA)
// 00468935: PUSH ECX
//   XREF to: 0061cdf6 (DATA)
// 00468936: PUSH 0x0
// 00468938: PUSH 0x0
// 0046893a: PUSH 0xa
// 0046893c: LEA ECX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 0046893f: PUSH ECX
// 00468940: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00468945: ADD ESP,0x14
// 00468948: LEA EDI,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 0046894b: SUB ECX,ECX
// 0046894d: DEC ECX
// 0046894e: XOR EAX,EAX
// 00468950: SCASB.REPNE ES:EDI
// 00468952: NOT ECX
// 00468954: DEC ECX
// 00468955: TEST ECX,ECX
// 00468957: JNZ 0x0046895e
//   XREF to: 0046895e (CONDITIONAL_JUMP)
// 00468959: JMP 0x00468c35
//   XREF to: 00468c35 (UNCONDITIONAL_JUMP)
// 0046895e: LEA EAX,[EBP + -0x78]
//   Label: LAB_0046895e
//   XREF to: Stack[-0x88] (DATA)
// 00468961: PUSH EAX
// 00468962: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 00468967: ADD ESP,0x4
// 0046896a: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0046896d: FILD dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00468970: FDIVR double ptr [0x0061ce2e]
//   XREF to: 0061ce2e (READ)
// 00468976: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00468979: MOV EAX,0x61ce12
//   XREF to: 0061ce12 (DATA)
// 0046897e: PUSH EAX
//   XREF to: 0061ce12 (DATA)
// 0046897f: PUSH 0xb
// 00468981: PUSH 0x0
// 00468983: PUSH 0xa
// 00468985: LEA EAX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 00468988: PUSH EAX
// 00468989: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0046898e: ADD ESP,0x14
// 00468991: LEA EDI,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 00468994: SUB ECX,ECX
// 00468996: DEC ECX
// 00468997: XOR EAX,EAX
// 00468999: SCASB.REPNE ES:EDI
// 0046899b: NOT ECX
// 0046899d: DEC ECX
// 0046899e: TEST ECX,ECX
// 004689a0: JNZ 0x004689a7
//   XREF to: 004689a7 (CONDITIONAL_JUMP)
// 004689a2: JMP 0x00468c35
//   XREF to: 00468c35 (UNCONDITIONAL_JUMP)
// 004689a7: LEA EAX,[EBP + -0x78]
//   Label: LAB_004689a7
//   XREF to: Stack[-0x88] (DATA)
// 004689aa: PUSH EAX
// 004689ab: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 004689b0: ADD ESP,0x4
// 004689b3: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004689b6: FILD dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004689b9: FDIVR double ptr [0x0061ce4e]
//   XREF to: 0061ce4e (READ)
// 004689bf: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 004689c2: MOV EAX,0x61ce36
//   XREF to: 0061ce36 (DATA)
// 004689c7: PUSH EAX
//   XREF to: 0061ce36 (DATA)
// 004689c8: PUSH 0x16
// 004689ca: PUSH 0x0
// 004689cc: PUSH 0xa
// 004689ce: LEA EAX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 004689d1: PUSH EAX
// 004689d2: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 004689d7: ADD ESP,0x14
// 004689da: LEA EDI,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 004689dd: SUB ECX,ECX
// 004689df: DEC ECX
// 004689e0: XOR EAX,EAX
// 004689e2: SCASB.REPNE ES:EDI
// 004689e4: NOT ECX
// 004689e6: DEC ECX
// 004689e7: TEST ECX,ECX
// 004689e9: JNZ 0x004689f0
//   XREF to: 004689f0 (CONDITIONAL_JUMP)
// 004689eb: JMP 0x00468c35
//   XREF to: 00468c35 (UNCONDITIONAL_JUMP)
// 004689f0: LEA EAX,[EBP + -0x78]
//   Label: LAB_004689f0
//   XREF to: Stack[-0x88] (DATA)
// 004689f3: PUSH EAX
// 004689f4: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 004689f9: MOV dword ptr [EBP + -0x80],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 004689fc: MOV dword ptr [EBP + -0x7c],EDX
//   XREF to: Stack[-0x8c] (WRITE)
// 004689ff: FLD double ptr [EBP + -0x80]
//   XREF to: Stack[-0x90] (READ)
// 00468a02: ADD ESP,0x4
// 00468a05: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00468a08: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 00468a0f: JMP 0x00468a17
//   XREF to: 00468a17 (UNCONDITIONAL_JUMP)
// 00468a11: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_00468a11
//   XREF to: Stack[-0x28] (READ)
// 00468a14: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 00468a17: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_00468a17
//   XREF to: Stack[-0x28] (READ)
// 00468a1a: CMP EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00468a1d: JG 0x00468c35
//   XREF to: 00468c35 (CONDITIONAL_JUMP)
// 00468a23: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 00468a2a: JMP 0x00468a32
//   XREF to: 00468a32 (UNCONDITIONAL_JUMP)
// 00468a2c: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00468a2c
//   XREF to: Stack[-0x2c] (READ)
// 00468a2f: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00468a32: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00468a32
//   XREF to: Stack[-0x34] (READ)
// 00468a35: MOV EDX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00468a38: SAR EDX,0x1f
// 00468a3b: SUB EAX,EDX
// 00468a3d: SAR EAX,0x1
// 00468a3f: CMP EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00468a42: JLE 0x00468b2a
//   XREF to: 00468b2a (CONDITIONAL_JUMP)
// 00468a48: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00468a4d: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00468a50: FILD dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00468a53: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468a56: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00468a59: FILD dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00468a5c: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468a5f: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00468a62: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468a65: FSUBR double ptr [0x0061ce56]
//   XREF to: 0061ce56 (READ)
// 00468a6b: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00468a6e: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468a71: SUB ESP,0x4
// 00468a74: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 00468a77: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468a7a: SUB ESP,0x4
// 00468a7d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00468a80: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468a83: SUB ESP,0x4
// 00468a86: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00468a89: CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
//   XREF to: 004686e0 (UNCONDITIONAL_CALL)
// 00468a8e: ADD ESP,0xc
// 00468a91: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468a94: SUB ESP,0x4
// 00468a97: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 00468a9a: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468a9d: SUB ESP,0x4
// 00468aa0: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00468aa3: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468aa6: FADD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468aa9: SUB ESP,0x4
// 00468aac: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00468aaf: CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
//   XREF to: 004686e0 (UNCONDITIONAL_CALL)
// 00468ab4: ADD ESP,0xc
// 00468ab7: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468aba: SUB ESP,0x4
// 00468abd: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 00468ac0: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468ac3: FADD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468ac6: SUB ESP,0x4
// 00468ac9: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00468acc: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468acf: FADD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468ad2: SUB ESP,0x4
// 00468ad5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00468ad8: CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
//   XREF to: 004686e0 (UNCONDITIONAL_CALL)
// 00468add: ADD ESP,0xc
// 00468ae0: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468ae3: SUB ESP,0x4
// 00468ae6: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 00468ae9: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468aec: FADD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468aef: SUB ESP,0x4
// 00468af2: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00468af5: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468af8: SUB ESP,0x4
// 00468afb: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00468afe: CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
//   XREF to: 004686e0 (UNCONDITIONAL_CALL)
// 00468b03: ADD ESP,0xc
// 00468b06: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00468b09: PUSH EAX
// 00468b0a: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00468b0d: INC EAX
// 00468b0e: PUSH EAX
// 00468b0f: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00468b12: ADD EAX,0x2
// 00468b15: PUSH EAX
// 00468b16: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00468b19: ADD EAX,0x3
// 00468b1c: PUSH EAX
// 00468b1d: CALL shape_design.c_addQuadPolygon_FUN_004687c0
//   XREF to: 004687c0 (UNCONDITIONAL_CALL)
// 00468b22: ADD ESP,0x10
// 00468b25: JMP 0x00468a2c
//   XREF to: 00468a2c (UNCONDITIONAL_JUMP)
// 00468b2a: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00468b2a
//   XREF to: Stack[-0x34] (READ)
// 00468b2d: MOV EDX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00468b30: SAR EDX,0x1f
// 00468b33: SUB EAX,EDX
// 00468b35: SAR EAX,0x1
// 00468b37: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00468b3a: JMP 0x00468b42
//   XREF to: 00468b42 (UNCONDITIONAL_JUMP)
// 00468b3c: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00468b3c
//   XREF to: Stack[-0x2c] (READ)
// 00468b3f: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00468b42: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00468b42
//   XREF to: Stack[-0x2c] (READ)
// 00468b45: CMP EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00468b48: JGE 0x00468c30
//   XREF to: 00468c30 (CONDITIONAL_JUMP)
// 00468b4e: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00468b53: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00468b56: FILD dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00468b59: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468b5c: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00468b5f: FILD dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00468b62: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468b65: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00468b68: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468b6b: FSUBR double ptr [0x0061ce5e]
//   XREF to: 0061ce5e (READ)
// 00468b71: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00468b74: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468b77: SUB ESP,0x4
// 00468b7a: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 00468b7d: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468b80: SUB ESP,0x4
// 00468b83: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00468b86: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468b89: SUB ESP,0x4
// 00468b8c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00468b8f: CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
//   XREF to: 004686e0 (UNCONDITIONAL_CALL)
// 00468b94: ADD ESP,0xc
// 00468b97: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468b9a: SUB ESP,0x4
// 00468b9d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 00468ba0: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468ba3: SUB ESP,0x4
// 00468ba6: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00468ba9: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468bac: FADD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468baf: SUB ESP,0x4
// 00468bb2: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00468bb5: CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
//   XREF to: 004686e0 (UNCONDITIONAL_CALL)
// 00468bba: ADD ESP,0xc
// 00468bbd: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468bc0: SUB ESP,0x4
// 00468bc3: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 00468bc6: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468bc9: FADD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468bcc: SUB ESP,0x4
// 00468bcf: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00468bd2: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468bd5: FADD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468bd8: SUB ESP,0x4
// 00468bdb: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00468bde: CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
//   XREF to: 004686e0 (UNCONDITIONAL_CALL)
// 00468be3: ADD ESP,0xc
// 00468be6: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468be9: SUB ESP,0x4
// 00468bec: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 00468bef: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468bf2: FADD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468bf5: SUB ESP,0x4
// 00468bf8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00468bfb: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468bfe: SUB ESP,0x4
// 00468c01: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00468c04: CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
//   XREF to: 004686e0 (UNCONDITIONAL_CALL)
// 00468c09: ADD ESP,0xc
// 00468c0c: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00468c0f: PUSH EAX
// 00468c10: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00468c13: INC EAX
// 00468c14: PUSH EAX
// 00468c15: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00468c18: ADD EAX,0x2
// 00468c1b: PUSH EAX
// 00468c1c: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00468c1f: ADD EAX,0x3
// 00468c22: PUSH EAX
// 00468c23: CALL shape_design.c_addQuadPolygon_FUN_004687c0
//   XREF to: 004687c0 (UNCONDITIONAL_CALL)
// 00468c28: ADD ESP,0x10
// 00468c2b: JMP 0x00468b3c
//   XREF to: 00468b3c (UNCONDITIONAL_JUMP)
// 00468c30: JMP 0x00468a11
//   Label: LAB_00468c30
//   XREF to: 00468a11 (UNCONDITIONAL_JUMP)
// 00468c35: MOV ESP,EBP
//   Label: LAB_00468c35
// 00468c37: POP EBP
// 00468c38: POP EDI
// 00468c39: POP ESI
// 00468c3a: POP EBX
// 00468c3b: RET
