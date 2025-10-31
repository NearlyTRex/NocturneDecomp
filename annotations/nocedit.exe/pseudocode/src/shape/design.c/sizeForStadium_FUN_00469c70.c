// Name: shape_design.c_sizeForStadium_FUN_00469c70
// Address: 00469c70
// Address Range: [[00469c70, 00469edd]]
// Convention: __cdecl
// Signature: void shape_design.c_sizeForStadium_FUN_00469c70(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f768 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_in_X_point_0061d0ad
//   TerminatedCString s_Enter_in_Z_point_0061d0c1
//   TerminatedCString s_Enter_in_X_size_0061d0d5
//   TerminatedCString s_Enter_in_Z_size_0061d0e8
//   double g_YAxisScaleModifier = 0.5
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   crt_stdlib.c_atoi_FUN_005ffef0
//   crt_string.c_strtod_FUN_005ff0f3
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_sizeForStadium_FUN_00469c70(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  char *in_stack_ffffff28;
  char *in_stack_ffffff30;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  
  bVar9 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(&stack0xffffff18,0x14,0,0,"Enter in X point : ")
  ;
  iVar5 = -1;
  pcVar8 = &stack0xffffff18;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar5 != -2) {
    iVar5 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff18);
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff18,0x14,0,0xb,"Enter in Z point : ");
    iVar6 = -1;
    pcVar8 = &stack0xffffff18;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar6 != -2) {
      iVar6 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff18);
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xffffff18,0x14,0,0x16,"Enter in X size : ");
      iVar7 = -1;
      pcVar8 = &stack0xffffff18;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar7 != -2) {
        dVar10 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff28);
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (&stack0xffffff18,0x14,0,0x21,"Enter in Z size : ");
        iVar7 = -1;
        pcVar8 = &stack0xffffff18;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar7 != -2) {
          dVar11 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff30);
          local_44 = 999999.9;
          local_40 = -999999.9;
          local_3c = 999999.9;
          local_38 = -999999.9;
          for (local_48 = 0; local_48 < g_VertexCount; local_48 = local_48 + 1) {
            fVar2 = g_LoadedVertices[local_48].vertex.x;
            if (local_40 < fVar2) {
              local_40 = fVar2;
            }
            if (fVar2 < local_44) {
              local_44 = fVar2;
            }
            fVar2 = g_LoadedVertices[local_48].vertex.z;
            if (local_38 < fVar2) {
              local_38 = fVar2;
            }
            if (fVar2 < local_3c) {
              local_3c = fVar2;
            }
          }
          fVar2 = (float)dVar10 / g_LoadedVertices[iVar5].vertex.x;
          fVar3 = (float)dVar11 / g_LoadedVertices[iVar6].vertex.z;
          fVar4 = (float)g_YAxisScaleModifier;
          for (local_48 = 0; local_48 < g_VertexCount; local_48 = local_48 + 1) {
            g_LoadedVertices[local_48].vertex.x = g_LoadedVertices[local_48].vertex.x * fVar2;
            g_LoadedVertices[local_48].vertex.y =
                 g_LoadedVertices[local_48].vertex.y * (fVar2 + fVar3) * fVar4;
            g_LoadedVertices[local_48].vertex.z = g_LoadedVertices[local_48].vertex.z * fVar3;
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00469c70: PUSH EBX
//   Label: shape_design.c_sizeForStadium_FUN_00469c70
// 00469c71: PUSH ESI
// 00469c72: PUSH EDI
// 00469c73: PUSH EBP
// 00469c74: MOV EBP,ESP
// 00469c76: SUB ESP,0xe0
// 00469c7c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00469c81: MOV ECX,0x61d0ad
//   XREF to: 0061d0ad (DATA)
// 00469c86: PUSH ECX
//   XREF to: 0061d0ad (DATA)
// 00469c87: PUSH 0x0
// 00469c89: PUSH 0x0
// 00469c8b: PUSH 0x14
// 00469c8d: LEA ECX,[EBP + 0xffffff28]
//   XREF to: Stack[-0xe8] (DATA)
// 00469c93: PUSH ECX
// 00469c94: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00469c99: ADD ESP,0x14
// 00469c9c: LEA EDI,[EBP + 0xffffff28]
//   XREF to: Stack[-0xe8] (DATA)
// 00469ca2: SUB ECX,ECX
// 00469ca4: DEC ECX
// 00469ca5: XOR EAX,EAX
// 00469ca7: SCASB.REPNE ES:EDI
// 00469ca9: NOT ECX
// 00469cab: DEC ECX
// 00469cac: TEST ECX,ECX
// 00469cae: JNZ 0x00469cb5
//   XREF to: 00469cb5 (CONDITIONAL_JUMP)
// 00469cb0: JMP 0x00469ed7
//   XREF to: 00469ed7 (UNCONDITIONAL_JUMP)
// 00469cb5: LEA EAX,[EBP + 0xffffff28]
//   Label: LAB_00469cb5
//   XREF to: Stack[-0xe8] (DATA)
// 00469cbb: PUSH EAX
// 00469cbc: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 00469cc1: ADD ESP,0x4
// 00469cc4: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00469cc7: MOV EAX,0x61d0c1
//   XREF to: 0061d0c1 (DATA)
// 00469ccc: PUSH EAX
//   XREF to: 0061d0c1 (DATA)
// 00469ccd: PUSH 0xb
// 00469ccf: PUSH 0x0
// 00469cd1: PUSH 0x14
// 00469cd3: LEA EAX,[EBP + 0xffffff28]
//   XREF to: Stack[-0xe8] (DATA)
// 00469cd9: PUSH EAX
// 00469cda: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00469cdf: ADD ESP,0x14
// 00469ce2: LEA EDI,[EBP + 0xffffff28]
//   XREF to: Stack[-0xe8] (DATA)
// 00469ce8: SUB ECX,ECX
// 00469cea: DEC ECX
// 00469ceb: XOR EAX,EAX
// 00469ced: SCASB.REPNE ES:EDI
// 00469cef: NOT ECX
// 00469cf1: DEC ECX
// 00469cf2: TEST ECX,ECX
// 00469cf4: JNZ 0x00469cfb
//   XREF to: 00469cfb (CONDITIONAL_JUMP)
// 00469cf6: JMP 0x00469ed7
//   XREF to: 00469ed7 (UNCONDITIONAL_JUMP)
// 00469cfb: LEA EAX,[EBP + 0xffffff28]
//   Label: LAB_00469cfb
//   XREF to: Stack[-0xe8] (DATA)
// 00469d01: PUSH EAX
// 00469d02: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 00469d07: ADD ESP,0x4
// 00469d0a: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00469d0d: MOV EAX,0x61d0d5
//   XREF to: 0061d0d5 (DATA)
// 00469d12: PUSH EAX
//   XREF to: 0061d0d5 (DATA)
// 00469d13: PUSH 0x16
// 00469d15: PUSH 0x0
// 00469d17: PUSH 0x14
// 00469d19: LEA EAX,[EBP + 0xffffff28]
//   XREF to: Stack[-0xe8] (DATA)
// 00469d1f: PUSH EAX
// 00469d20: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00469d25: ADD ESP,0x14
// 00469d28: LEA EDI,[EBP + 0xffffff28]
//   XREF to: Stack[-0xe8] (DATA)
// 00469d2e: SUB ECX,ECX
// 00469d30: DEC ECX
// 00469d31: XOR EAX,EAX
// 00469d33: SCASB.REPNE ES:EDI
// 00469d35: NOT ECX
// 00469d37: DEC ECX
// 00469d38: TEST ECX,ECX
// 00469d3a: JNZ 0x00469d41
//   XREF to: 00469d41 (CONDITIONAL_JUMP)
// 00469d3c: JMP 0x00469ed7
//   XREF to: 00469ed7 (UNCONDITIONAL_JUMP)
// 00469d41: LEA ECX,[EBP + 0xffffff28]
//   Label: LAB_00469d41
//   XREF to: Stack[-0xe8] (DATA)
// 00469d47: PUSH ECX
// 00469d48: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 00469d4d: MOV dword ptr [EBP + 0xffffff20],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 00469d53: MOV dword ptr [EBP + 0xffffff24],EDX
//   XREF to: Stack[-0xec] (WRITE)
// 00469d59: FLD double ptr [EBP + 0xffffff20]
//   XREF to: Stack[-0xf0] (READ)
// 00469d5f: ADD ESP,0x4
// 00469d62: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00469d65: MOV ECX,0x61d0e8
//   XREF to: 0061d0e8 (DATA)
// 00469d6a: PUSH ECX
//   XREF to: 0061d0e8 (DATA)
// 00469d6b: PUSH 0x21
// 00469d6d: PUSH 0x0
// 00469d6f: PUSH 0x14
// 00469d71: LEA ECX,[EBP + 0xffffff28]
//   XREF to: Stack[-0xe8] (DATA)
// 00469d77: PUSH ECX
// 00469d78: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00469d7d: ADD ESP,0x14
// 00469d80: LEA EDI,[EBP + 0xffffff28]
//   XREF to: Stack[-0xe8] (DATA)
// 00469d86: SUB ECX,ECX
// 00469d88: DEC ECX
// 00469d89: XOR EAX,EAX
// 00469d8b: SCASB.REPNE ES:EDI
// 00469d8d: NOT ECX
// 00469d8f: DEC ECX
// 00469d90: TEST ECX,ECX
// 00469d92: JNZ 0x00469d99
//   XREF to: 00469d99 (CONDITIONAL_JUMP)
// 00469d94: JMP 0x00469ed7
//   XREF to: 00469ed7 (UNCONDITIONAL_JUMP)
// 00469d99: LEA EAX,[EBP + 0xffffff28]
//   Label: LAB_00469d99
//   XREF to: Stack[-0xe8] (DATA)
// 00469d9f: PUSH EAX
// 00469da0: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 00469da5: MOV dword ptr [EBP + 0xffffff20],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 00469dab: MOV dword ptr [EBP + 0xffffff24],EDX
//   XREF to: Stack[-0xec] (WRITE)
// 00469db1: FLD double ptr [EBP + 0xffffff20]
//   XREF to: Stack[-0xf0] (READ)
// 00469db7: ADD ESP,0x4
// 00469dba: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 00469dbd: MOV dword ptr [EBP + -0x34],0x497423fe
//   XREF to: Stack[-0x44] (WRITE)
// 00469dc4: MOV dword ptr [EBP + -0x30],0xc97423fe
//   XREF to: Stack[-0x40] (WRITE)
// 00469dcb: MOV dword ptr [EBP + -0x2c],0x497423fe
//   XREF to: Stack[-0x3c] (WRITE)
// 00469dd2: MOV dword ptr [EBP + -0x28],0xc97423fe
//   XREF to: Stack[-0x38] (WRITE)
// 00469dd9: MOV dword ptr [EBP + -0x38],0x0
//   XREF to: Stack[-0x48] (WRITE)
// 00469de0: JMP 0x00469de8
//   XREF to: 00469de8 (UNCONDITIONAL_JUMP)
// 00469de2: MOV EAX,dword ptr [EBP + -0x38]
//   Label: LAB_00469de2
//   XREF to: Stack[-0x48] (READ)
// 00469de5: INC dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ_WRITE)
// 00469de8: MOV EAX,dword ptr [EBP + -0x38]
//   Label: LAB_00469de8
//   XREF to: Stack[-0x48] (READ)
// 00469deb: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00469df1: JGE 0x00469e53
//   XREF to: 00469e53 (CONDITIONAL_JUMP)
// 00469df3: IMUL EAX,dword ptr [EBP + -0x38],0x14
//   XREF to: Stack[-0x48] (READ)
// 00469df7: MOV EAX,dword ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00469dfd: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00469e00: FLD float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00469e03: FCOMP float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00469e06: FNSTSW AX
// 00469e08: SAHF
// 00469e09: JBE 0x00469e11
//   XREF to: 00469e11 (CONDITIONAL_JUMP)
// 00469e0b: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00469e0e: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00469e11: FLD float ptr [EBP + -0x24]
//   Label: LAB_00469e11
//   XREF to: Stack[-0x34] (READ)
// 00469e14: FCOMP float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 00469e17: FNSTSW AX
// 00469e19: SAHF
// 00469e1a: JNC 0x00469e22
//   XREF to: 00469e22 (CONDITIONAL_JUMP)
// 00469e1c: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 00469e1f: MOV dword ptr [EBP + -0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00469e22: IMUL EAX,dword ptr [EBP + -0x38],0x14
//   Label: LAB_00469e22
//   XREF to: Stack[-0x48] (READ)
// 00469e26: MOV EAX,dword ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00469e2c: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00469e2f: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00469e32: FCOMP float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 00469e35: FNSTSW AX
// 00469e37: SAHF
// 00469e38: JBE 0x00469e40
//   XREF to: 00469e40 (CONDITIONAL_JUMP)
// 00469e3a: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00469e3d: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00469e40: FLD float ptr [EBP + -0x20]
//   Label: LAB_00469e40
//   XREF to: Stack[-0x30] (READ)
// 00469e43: FCOMP float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00469e46: FNSTSW AX
// 00469e48: SAHF
// 00469e49: JNC 0x00469e51
//   XREF to: 00469e51 (CONDITIONAL_JUMP)
// 00469e4b: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00469e4e: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00469e51: JMP 0x00469de2
//   Label: LAB_00469e51
//   XREF to: 00469de2 (UNCONDITIONAL_JUMP)
// 00469e53: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   Label: LAB_00469e53
//   XREF to: Stack[-0x20] (READ)
// 00469e57: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00469e5a: FDIV float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00469e60: FSTP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 00469e63: IMUL EAX,dword ptr [EBP + -0xc],0x14
//   XREF to: Stack[-0x1c] (READ)
// 00469e67: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469e6a: FDIV float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00469e70: FSTP float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 00469e73: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00469e76: FADD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00469e79: FMUL double ptr [0x0061d0fe]
//   XREF to: 0061d0fe (READ)
// 00469e7f: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00469e82: MOV dword ptr [EBP + -0x38],0x0
//   XREF to: Stack[-0x48] (WRITE)
// 00469e89: JMP 0x00469e91
//   XREF to: 00469e91 (UNCONDITIONAL_JUMP)
// 00469e8b: MOV EAX,dword ptr [EBP + -0x38]
//   Label: LAB_00469e8b
//   XREF to: Stack[-0x48] (READ)
// 00469e8e: INC dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ_WRITE)
// 00469e91: MOV EAX,dword ptr [EBP + -0x38]
//   Label: LAB_00469e91
//   XREF to: Stack[-0x48] (READ)
// 00469e94: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00469e9a: JGE 0x00469ed7
//   XREF to: 00469ed7 (CONDITIONAL_JUMP)
// 00469e9c: IMUL EAX,dword ptr [EBP + -0x38],0x14
//   XREF to: Stack[-0x48] (READ)
// 00469ea0: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00469ea6: FMUL float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00469ea9: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00469eaf: IMUL EAX,dword ptr [EBP + -0x38],0x14
//   XREF to: Stack[-0x48] (READ)
// 00469eb3: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00469eb9: FMUL float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00469ebc: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00469ec2: IMUL EAX,dword ptr [EBP + -0x38],0x14
//   XREF to: Stack[-0x48] (READ)
// 00469ec6: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00469ecc: FMUL float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00469ecf: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00469ed5: JMP 0x00469e8b
//   XREF to: 00469e8b (UNCONDITIONAL_JUMP)
// 00469ed7: MOV ESP,EBP
//   Label: LAB_00469ed7
// 00469ed9: POP EBP
// 00469eda: POP EDI
// 00469edb: POP ESI
// 00469edc: POP EBX
// 00469edd: RET
