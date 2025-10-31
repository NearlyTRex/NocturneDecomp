// Name: shape_design.c_generateShell_FUN_00468f20
// Address: 00468f20
// Address Range: [[00468f20, 0046913b]]
// Convention: __cdecl
// Signature: void shape_design.c_generateShell_FUN_00468f20(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f722 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_in_size_in_heading_0061ce96
//   TerminatedCString s_Enter_in_size_in_pitch_0061ceb2
//   double g_HalfCircleDegrees_1 = 180
//   TerminatedCString s_Enter_in_radius_0061ced6
//   double g_HalfCircleDegrees_2 = 180
//   double g_RightAngleDegrees = 90
//   int g_VertexCount
//   int g_PolygonCount
// Function calls:
//   crt_stdlib.c_atoi_FUN_005ffef0
//   crt_string.c_strtod_FUN_005ff0f3
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20
//   shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40

#include "nocturne.h"

void __cdecl shape_design_c_generateShell_FUN_00468f20(void)

{
  char cVar1;
  float radius;
  float latitude_degrees;
  float fVar2;
  float fVar3;
  float longitude_degrees;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  byte bVar8;
  double dVar9;
  char *in_stack_ffffff84;
  int local_2c;
  int local_28;
  
  bVar8 = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff78,10,0,0,"Enter in size in heading : ");
  iVar4 = -1;
  pcVar7 = &stack0xffffff78;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    iVar4 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff78);
    fVar2 = (float)g_HalfCircleDegrees_1 / (float)iVar4;
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff78,10,0,0xb,"Enter in size in pitch : ");
    iVar5 = -1;
    pcVar7 = &stack0xffffff78;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      iVar5 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff78);
      fVar3 = (float)g_HalfCircleDegrees_2 / (float)iVar5;
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xffffff78,10,0,0x16,"Enter in radius : ");
      iVar6 = -1;
      pcVar7 = &stack0xffffff78;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar6 != -2) {
        dVar9 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff84);
        radius = (float)dVar9;
        for (local_28 = 0; local_28 <= iVar5; local_28 = local_28 + 1) {
          for (local_2c = 0; iVar6 = g_VertexCount, local_2c < iVar4; local_2c = local_2c + 1) {
            latitude_degrees = (float)local_2c * fVar2;
            longitude_degrees = (float)g_RightAngleDegrees - (float)local_28 * fVar3;
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees,longitude_degrees,radius);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees + fVar2,longitude_degrees,radius);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees + fVar2,longitude_degrees + fVar3,radius);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees,longitude_degrees + fVar3,radius);
            shape_design_c_addQuadPolygonHalfSphere_FUN_00468d20
                      (iVar6 + 3,iVar6 + 2,iVar6 + 1,iVar6);
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00468f20: PUSH EBX
//   Label: shape_design.c_generateShell_FUN_00468f20
// 00468f21: PUSH ESI
// 00468f22: PUSH EDI
// 00468f23: PUSH EBP
// 00468f24: MOV EBP,ESP
// 00468f26: SUB ESP,0x80
// 00468f2c: MOV dword ptr [0x016e990c],0x0
//   XREF to: 016e990c (WRITE)
// 00468f36: MOV dword ptr [0x01626408],0x0
//   XREF to: 01626408 (WRITE)
// 00468f40: MOV ECX,0x61ce96
//   XREF to: 0061ce96 (DATA)
// 00468f45: PUSH ECX
//   XREF to: 0061ce96 (DATA)
// 00468f46: PUSH 0x0
// 00468f48: PUSH 0x0
// 00468f4a: PUSH 0xa
// 00468f4c: LEA ECX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 00468f4f: PUSH ECX
// 00468f50: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00468f55: ADD ESP,0x14
// 00468f58: LEA EDI,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 00468f5b: SUB ECX,ECX
// 00468f5d: DEC ECX
// 00468f5e: XOR EAX,EAX
// 00468f60: SCASB.REPNE ES:EDI
// 00468f62: NOT ECX
// 00468f64: DEC ECX
// 00468f65: TEST ECX,ECX
// 00468f67: JNZ 0x00468f6e
//   XREF to: 00468f6e (CONDITIONAL_JUMP)
// 00468f69: JMP 0x00469135
//   XREF to: 00469135 (UNCONDITIONAL_JUMP)
// 00468f6e: LEA EAX,[EBP + -0x78]
//   Label: LAB_00468f6e
//   XREF to: Stack[-0x88] (DATA)
// 00468f71: PUSH EAX
// 00468f72: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 00468f77: ADD ESP,0x4
// 00468f7a: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00468f7d: FILD dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00468f80: FDIVR double ptr [0x0061cece]
//   XREF to: 0061cece (READ)
// 00468f86: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00468f89: MOV EAX,0x61ceb2
//   XREF to: 0061ceb2 (DATA)
// 00468f8e: PUSH EAX
//   XREF to: 0061ceb2 (DATA)
// 00468f8f: PUSH 0xb
// 00468f91: PUSH 0x0
// 00468f93: PUSH 0xa
// 00468f95: LEA EAX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 00468f98: PUSH EAX
// 00468f99: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00468f9e: ADD ESP,0x14
// 00468fa1: LEA EDI,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 00468fa4: SUB ECX,ECX
// 00468fa6: DEC ECX
// 00468fa7: XOR EAX,EAX
// 00468fa9: SCASB.REPNE ES:EDI
// 00468fab: NOT ECX
// 00468fad: DEC ECX
// 00468fae: TEST ECX,ECX
// 00468fb0: JNZ 0x00468fb7
//   XREF to: 00468fb7 (CONDITIONAL_JUMP)
// 00468fb2: JMP 0x00469135
//   XREF to: 00469135 (UNCONDITIONAL_JUMP)
// 00468fb7: LEA EAX,[EBP + -0x78]
//   Label: LAB_00468fb7
//   XREF to: Stack[-0x88] (DATA)
// 00468fba: PUSH EAX
// 00468fbb: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 00468fc0: ADD ESP,0x4
// 00468fc3: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00468fc6: FILD dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00468fc9: FDIVR double ptr [0x0061ceee]
//   XREF to: 0061ceee (READ)
// 00468fcf: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 00468fd2: MOV EAX,0x61ced6
//   XREF to: 0061ced6 (DATA)
// 00468fd7: PUSH EAX
//   XREF to: 0061ced6 (DATA)
// 00468fd8: PUSH 0x16
// 00468fda: PUSH 0x0
// 00468fdc: PUSH 0xa
// 00468fde: LEA EAX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 00468fe1: PUSH EAX
// 00468fe2: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00468fe7: ADD ESP,0x14
// 00468fea: LEA EDI,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 00468fed: SUB ECX,ECX
// 00468fef: DEC ECX
// 00468ff0: XOR EAX,EAX
// 00468ff2: SCASB.REPNE ES:EDI
// 00468ff4: NOT ECX
// 00468ff6: DEC ECX
// 00468ff7: TEST ECX,ECX
// 00468ff9: JNZ 0x00469000
//   XREF to: 00469000 (CONDITIONAL_JUMP)
// 00468ffb: JMP 0x00469135
//   XREF to: 00469135 (UNCONDITIONAL_JUMP)
// 00469000: LEA EAX,[EBP + -0x78]
//   Label: LAB_00469000
//   XREF to: Stack[-0x88] (DATA)
// 00469003: PUSH EAX
// 00469004: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 00469009: MOV dword ptr [EBP + -0x80],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0046900c: MOV dword ptr [EBP + -0x7c],EDX
//   XREF to: Stack[-0x8c] (WRITE)
// 0046900f: FLD double ptr [EBP + -0x80]
//   XREF to: Stack[-0x90] (READ)
// 00469012: ADD ESP,0x4
// 00469015: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00469018: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 0046901f: JMP 0x00469027
//   XREF to: 00469027 (UNCONDITIONAL_JUMP)
// 00469021: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_00469021
//   XREF to: Stack[-0x28] (READ)
// 00469024: INC dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ_WRITE)
// 00469027: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_00469027
//   XREF to: Stack[-0x28] (READ)
// 0046902a: CMP EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046902d: JG 0x00469135
//   XREF to: 00469135 (CONDITIONAL_JUMP)
// 00469033: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 0046903a: JMP 0x00469042
//   XREF to: 00469042 (UNCONDITIONAL_JUMP)
// 0046903c: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0046903c
//   XREF to: Stack[-0x2c] (READ)
// 0046903f: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00469042: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00469042
//   XREF to: Stack[-0x2c] (READ)
// 00469045: CMP EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00469048: JGE 0x00469130
//   XREF to: 00469130 (CONDITIONAL_JUMP)
// 0046904e: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00469053: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00469056: FILD dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00469059: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046905c: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0046905f: FILD dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00469062: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469065: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00469068: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046906b: FSUBR double ptr [0x0061cef6]
//   XREF to: 0061cef6 (READ)
// 00469071: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00469074: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00469077: SUB ESP,0x4
// 0046907a: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 0046907d: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00469080: SUB ESP,0x4
// 00469083: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00469086: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00469089: SUB ESP,0x4
// 0046908c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 0046908f: CALL shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
//   XREF to: 00468c40 (UNCONDITIONAL_CALL)
// 00469094: ADD ESP,0xc
// 00469097: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046909a: SUB ESP,0x4
// 0046909d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 004690a0: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004690a3: SUB ESP,0x4
// 004690a6: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004690a9: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004690ac: FADD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004690af: SUB ESP,0x4
// 004690b2: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 004690b5: CALL shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
//   XREF to: 00468c40 (UNCONDITIONAL_CALL)
// 004690ba: ADD ESP,0xc
// 004690bd: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004690c0: SUB ESP,0x4
// 004690c3: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 004690c6: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004690c9: FADD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004690cc: SUB ESP,0x4
// 004690cf: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004690d2: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004690d5: FADD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004690d8: SUB ESP,0x4
// 004690db: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 004690de: CALL shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
//   XREF to: 00468c40 (UNCONDITIONAL_CALL)
// 004690e3: ADD ESP,0xc
// 004690e6: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004690e9: SUB ESP,0x4
// 004690ec: FSTP float ptr [ESP]
//   XREF to: Stack[-0x94] (DATA)
// 004690ef: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004690f2: FADD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004690f5: SUB ESP,0x4
// 004690f8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004690fb: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 004690fe: SUB ESP,0x4
// 00469101: FSTP float ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00469104: CALL shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
//   XREF to: 00468c40 (UNCONDITIONAL_CALL)
// 00469109: ADD ESP,0xc
// 0046910c: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046910f: PUSH EAX
// 00469110: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00469113: INC EAX
// 00469114: PUSH EAX
// 00469115: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00469118: ADD EAX,0x2
// 0046911b: PUSH EAX
// 0046911c: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046911f: ADD EAX,0x3
// 00469122: PUSH EAX
// 00469123: CALL shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20
//   XREF to: 00468d20 (UNCONDITIONAL_CALL)
// 00469128: ADD ESP,0x10
// 0046912b: JMP 0x0046903c
//   XREF to: 0046903c (UNCONDITIONAL_JUMP)
// 00469130: JMP 0x00469021
//   Label: LAB_00469130
//   XREF to: 00469021 (UNCONDITIONAL_JUMP)
// 00469135: MOV ESP,EBP
//   Label: LAB_00469135
// 00469137: POP EBP
// 00469138: POP EDI
// 00469139: POP ESI
// 0046913a: POP EBX
// 0046913b: RET
