// Name: shape_design.c_combineTextureMaps_FUN_00469ee0
// Address: 00469ee0
// Address Range: [[00469ee0, 0046a17c]]
// Convention: __cdecl
// Signature: void shape_design.c_combineTextureMaps_FUN_00469ee0(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f772 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_response_file_0061d106
//   TerminatedCString s_shape_design_c_0061d11c
//   TerminatedCString s_rt_0061d12e
//   TerminatedCString s_shape_design_c_0061d131
//   TerminatedCString s_Bad_name_0061d143
//   TerminatedCString s_s_0061d14c
//   TerminatedCString s_f_f_0061d150
//   TerminatedCString s_d_0061d157
//   TerminatedCString s_s_0061d15b
//   TerminatedCString s_f_f_f_f_0061d15f
//   double g_ColorNormalizationFactor = 0.00392156862745098
//   double g_ColorScaleFactor = 255
//   TerminatedCString s_shape_design_c_0061d17e
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e9915
//   undefined4 DAT_016e9916
//   undefined4 DAT_016e9917
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a48
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_string.c_strcmp_FUN_005fef20
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_combineTextureMaps_FUN_00469ee0(void)

{
  float fVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_e4 [80];
  char local_94 [80];
  int local_44;
  FILE *local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar7 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_94,0x46,0,0,"Enter response file :");
  iVar4 = -1;
  pcVar5 = local_94;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  } while (cVar2 != '\0');
  if (iVar4 != -2) {
    local_40 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (local_94,(char *)0x0,"rt","..\\shape\\design.c",0x25a1);
    if (local_40 == (FILE *)0x0) {
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 0x25a2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Bad name");
    }
    crt_stdio_c_fscanf_FUN_005fe7c0(local_40,"%s\n");
    crt_stdio_c_fscanf_FUN_005fe7c0(local_40,"%f,%f\n");
    crt_stdio_c_fscanf_FUN_005fe7c0(local_40,"%d\n");
    for (local_38 = 0; local_38 < local_44; local_38 = local_38 + 1) {
      crt_stdio_c_fscanf_FUN_005fe7c0(local_40,"%s\n");
      crt_stdio_c_fscanf_FUN_005fe7c0(local_40,"%f,%f,%f,%f\n");
      for (local_34 = 0; local_34 < g_PolygonCount; local_34 = local_34 + 1) {
        iVar4 = crt_string_c_strcmp_FUN_005fef20(g_ModelPolygonData[local_34].texture_name,local_e4)
        ;
        if (iVar4 == 0) {
          pcVar5 = &stack0xfffffecc;
          pcVar6 = g_ModelPolygonData[local_34].texture_name;
          do {
            cVar2 = *pcVar5;
            *pcVar6 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar6[1] = cVar2;
            pcVar6 = pcVar6 + 2;
          } while (cVar2 != '\0');
          for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
            fVar1 = g_ModelPolygonData[local_34].uv_v[local_3c];
            fVar3 = (float)g_ColorNormalizationFactor;
            g_ModelPolygonData[local_34].uv_u[local_3c] =
                 ((local_18 *
                   g_ModelPolygonData[local_34].uv_u[local_3c] * (float)g_ColorNormalizationFactor +
                  local_20) / local_30) * (float)g_ColorScaleFactor;
            g_ModelPolygonData[local_34].uv_v[local_3c] =
                 ((local_14 * fVar1 * fVar3 + local_1c) / local_2c) * (float)g_ColorScaleFactor;
          }
        }
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_40,"..\\shape\\design.c",0x25da);
  }
  return;
}


// Assembly code:
// 00469ee0: PUSH EBX
//   Label: shape_design.c_combineTextureMaps_FUN_00469ee0
// 00469ee1: PUSH ESI
// 00469ee2: PUSH EDI
// 00469ee3: PUSH EBP
// 00469ee4: MOV EBP,ESP
// 00469ee6: SUB ESP,0x12c
// 00469eec: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00469ef1: MOV ECX,0x61d106
//   XREF to: 0061d106 (DATA)
// 00469ef6: PUSH ECX
//   XREF to: 0061d106 (DATA)
// 00469ef7: PUSH 0x0
// 00469ef9: PUSH 0x0
// 00469efb: PUSH 0x46
// 00469efd: LEA ECX,[EBP + 0xffffff7c]
//   XREF to: Stack[-0x94] (DATA)
// 00469f03: PUSH ECX
// 00469f04: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00469f09: ADD ESP,0x14
// 00469f0c: LEA EDI,[EBP + 0xffffff7c]
//   XREF to: Stack[-0x94] (DATA)
// 00469f12: SUB ECX,ECX
// 00469f14: DEC ECX
// 00469f15: XOR EAX,EAX
// 00469f17: SCASB.REPNE ES:EDI
// 00469f19: NOT ECX
// 00469f1b: DEC ECX
// 00469f1c: TEST ECX,ECX
// 00469f1e: JNZ 0x00469f25
//   XREF to: 00469f25 (CONDITIONAL_JUMP)
// 00469f20: JMP 0x0046a176
//   XREF to: 0046a176 (UNCONDITIONAL_JUMP)
// 00469f25: PUSH 0x25a1
//   Label: LAB_00469f25
// 00469f2a: MOV EAX,0x61d11c
//   XREF to: 0061d11c (DATA)
// 00469f2f: PUSH EAX
//   XREF to: 0061d11c (DATA)
// 00469f30: MOV EAX,0x61d12e
//   XREF to: 0061d12e (DATA)
// 00469f35: PUSH EAX
//   XREF to: 0061d12e (DATA)
// 00469f36: PUSH 0x0
// 00469f38: LEA EAX,[EBP + 0xffffff7c]
//   XREF to: Stack[-0x94] (DATA)
// 00469f3e: PUSH EAX
// 00469f3f: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00469f44: ADD ESP,0x14
// 00469f47: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00469f4a: CMP dword ptr [EBP + -0x30],0x0
//   XREF to: Stack[-0x40] (READ)
// 00469f4e: JNZ 0x00469f72
//   XREF to: 00469f72 (CONDITIONAL_JUMP)
// 00469f50: MOV dword ptr [0x02f0ca48],0x61d131
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061d131 (DATA)
// 00469f5a: MOV dword ptr [0x02f0ca4c],0x25a2
//   XREF to: 02f0ca4c (WRITE)
// 00469f64: MOV EAX,0x61d143
//   XREF to: 0061d143 (PARAM)
// 00469f69: PUSH EAX
//   XREF to: 0061d143 (DATA)
// 00469f6a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00469f6f: ADD ESP,0x4
// 00469f72: LEA EAX,[EBP + 0xfffffedc]
//   Label: LAB_00469f72
//   XREF to: Stack[-0x134] (DATA)
// 00469f78: PUSH EAX
// 00469f79: MOV EAX,0x61d14c
//   XREF to: 0061d14c (DATA)
// 00469f7e: PUSH EAX
//   XREF to: 0061d14c (DATA)
// 00469f7f: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00469f82: PUSH EAX
// 00469f83: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00469f88: ADD ESP,0xc
// 00469f8b: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 00469f8e: PUSH EAX
// 00469f8f: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 00469f92: PUSH EAX
// 00469f93: MOV EAX,0x61d150
//   XREF to: 0061d150 (DATA)
// 00469f98: PUSH EAX
//   XREF to: 0061d150 (DATA)
// 00469f99: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00469f9c: PUSH EAX
// 00469f9d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00469fa2: ADD ESP,0x10
// 00469fa5: LEA EAX,[EBP + -0x34]
//   XREF to: Stack[-0x44] (DATA)
// 00469fa8: PUSH EAX
// 00469fa9: MOV EAX,0x61d157
//   XREF to: 0061d157 (DATA)
// 00469fae: PUSH EAX
//   XREF to: 0061d157 (DATA)
// 00469faf: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00469fb2: PUSH EAX
// 00469fb3: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00469fb8: ADD ESP,0xc
// 00469fbb: MOV dword ptr [EBP + -0x28],0x0
//   XREF to: Stack[-0x38] (WRITE)
// 00469fc2: JMP 0x00469fca
//   XREF to: 00469fca (UNCONDITIONAL_JUMP)
// 00469fc4: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_00469fc4
//   XREF to: Stack[-0x38] (READ)
// 00469fc7: INC dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ_WRITE)
// 00469fca: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_00469fca
//   XREF to: Stack[-0x38] (READ)
// 00469fcd: CMP EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 00469fd0: JGE 0x0046a15f
//   XREF to: 0046a15f (CONDITIONAL_JUMP)
// 00469fd6: LEA EAX,[EBP + 0xffffff2c]
//   XREF to: Stack[-0xe4] (DATA)
// 00469fdc: PUSH EAX
// 00469fdd: MOV EAX,0x61d15b
//   XREF to: 0061d15b (DATA)
// 00469fe2: PUSH EAX
//   XREF to: 0061d15b (DATA)
// 00469fe3: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00469fe6: PUSH EAX
// 00469fe7: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00469fec: ADD ESP,0xc
// 00469fef: LEA EAX,[EBP + -0x4]
//   XREF to: Stack[-0x14] (DATA)
// 00469ff2: PUSH EAX
// 00469ff3: LEA EAX,[EBP + -0x8]
//   XREF to: Stack[-0x18] (DATA)
// 00469ff6: PUSH EAX
// 00469ff7: LEA EAX,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 00469ffa: PUSH EAX
// 00469ffb: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 00469ffe: PUSH EAX
// 00469fff: MOV EAX,0x61d15f
//   XREF to: 0061d15f (DATA)
// 0046a004: PUSH EAX
//   XREF to: 0061d15f (DATA)
// 0046a005: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046a008: PUSH EAX
// 0046a009: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0046a00e: ADD ESP,0x18
// 0046a011: MOV dword ptr [EBP + -0x24],0x0
//   XREF to: Stack[-0x34] (WRITE)
// 0046a018: JMP 0x0046a020
//   XREF to: 0046a020 (UNCONDITIONAL_JUMP)
// 0046a01a: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_0046a01a
//   XREF to: Stack[-0x34] (READ)
// 0046a01d: INC dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ_WRITE)
// 0046a020: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_0046a020
//   XREF to: Stack[-0x34] (READ)
// 0046a023: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0046a029: JGE 0x0046a15a
//   XREF to: 0046a15a (CONDITIONAL_JUMP)
// 0046a02f: LEA EAX,[EBP + 0xffffff2c]
//   XREF to: Stack[-0xe4] (DATA)
// 0046a035: PUSH EAX
// 0046a036: IMUL EAX,dword ptr [EBP + -0x24],0x184
//   XREF to: Stack[-0x34] (READ)
// 0046a03d: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 0046a042: ADD EAX,EDX
// 0046a044: ADD EAX,0x4
// 0046a047: PUSH EAX
// 0046a048: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0046a04d: ADD ESP,0x8
// 0046a050: TEST EAX,EAX
// 0046a052: JNZ 0x0046a155
//   XREF to: 0046a155 (CONDITIONAL_JUMP)
// 0046a058: LEA ESI,[EBP + 0xfffffedc]
//   XREF to: Stack[-0x134] (DATA)
// 0046a05e: IMUL EDI,dword ptr [EBP + -0x24],0x184
//   XREF to: Stack[-0x34] (READ)
// 0046a065: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046a06a: ADD EDI,EAX
// 0046a06c: ADD EDI,0x4
// 0046a06f: PUSH EDI
// 0046a070: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a070
//   XREF to: Stack[-0x134] (DATA)
// 0046a072: MOV byte ptr [EDI],AL
//   XREF to: 016e9914 (DATA)
//   XREF to: 016e9916 (DATA)
// 0046a074: CMP AL,0x0
// 0046a076: JZ 0x0046a088
//   XREF to: 0046a088 (CONDITIONAL_JUMP)
// 0046a078: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x133] (READ)
// 0046a07b: ADD ESI,0x2
// 0046a07e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 016e9915 (DATA)
//   XREF to: 016e9917 (DATA)
// 0046a081: ADD EDI,0x2
// 0046a084: CMP AL,0x0
// 0046a086: JNZ 0x0046a070
//   XREF to: 0046a070 (CONDITIONAL_JUMP)
// 0046a088: POP EDI
//   Label: LAB_0046a088
// 0046a089: MOV dword ptr [EBP + -0x2c],0x0
//   XREF to: Stack[-0x3c] (WRITE)
// 0046a090: JMP 0x0046a098
//   XREF to: 0046a098 (UNCONDITIONAL_JUMP)
// 0046a092: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_0046a092
//   XREF to: Stack[-0x3c] (READ)
// 0046a095: INC dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 0046a098: CMP dword ptr [EBP + -0x2c],0x4
//   Label: LAB_0046a098
//   XREF to: Stack[-0x3c] (READ)
// 0046a09c: JGE 0x0046a155
//   XREF to: 0046a155 (CONDITIONAL_JUMP)
// 0046a0a2: IMUL EDX,dword ptr [EBP + -0x24],0x184
//   XREF to: Stack[-0x34] (READ)
// 0046a0a9: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046a0ac: SHL EAX,0x2
// 0046a0af: ADD EAX,EDX
// 0046a0b1: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046a0b7: FMUL double ptr [0x0061d16e]
//   XREF to: 0061d16e (READ)
// 0046a0bd: FSTP float ptr [EBP + 0xfffffed4]
//   XREF to: Stack[-0x13c] (WRITE)
// 0046a0c3: IMUL EDX,dword ptr [EBP + -0x24],0x184
//   XREF to: Stack[-0x34] (READ)
// 0046a0ca: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046a0cd: SHL EAX,0x2
// 0046a0d0: ADD EAX,EDX
// 0046a0d2: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046a0d8: FMUL double ptr [0x0061d16e]
//   XREF to: 0061d16e (READ)
// 0046a0de: FSTP float ptr [EBP + 0xfffffed8]
//   XREF to: Stack[-0x138] (WRITE)
// 0046a0e4: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046a0e7: FMUL float ptr [EBP + 0xfffffed4]
//   XREF to: Stack[-0x13c] (READ)
// 0046a0ed: FADD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046a0f0: FDIV float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046a0f3: FSTP float ptr [EBP + 0xfffffed4]
//   XREF to: Stack[-0x13c] (WRITE)
// 0046a0f9: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046a0fc: FMUL float ptr [EBP + 0xfffffed8]
//   XREF to: Stack[-0x138] (READ)
// 0046a102: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046a105: FDIV float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046a108: FSTP float ptr [EBP + 0xfffffed8]
//   XREF to: Stack[-0x138] (WRITE)
// 0046a10e: FLD float ptr [EBP + 0xfffffed4]
//   XREF to: Stack[-0x13c] (READ)
// 0046a114: FMUL double ptr [0x0061d176]
//   XREF to: 0061d176 (READ)
// 0046a11a: IMUL EDX,dword ptr [EBP + -0x24],0x184
//   XREF to: Stack[-0x34] (READ)
// 0046a121: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046a124: SHL EAX,0x2
// 0046a127: ADD EAX,EDX
// 0046a129: FSTP float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046a12f: FLD float ptr [EBP + 0xfffffed8]
//   XREF to: Stack[-0x138] (READ)
// 0046a135: FMUL double ptr [0x0061d176]
//   XREF to: 0061d176 (READ)
// 0046a13b: IMUL EDX,dword ptr [EBP + -0x24],0x184
//   XREF to: Stack[-0x34] (READ)
// 0046a142: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046a145: SHL EAX,0x2
// 0046a148: ADD EAX,EDX
// 0046a14a: FSTP float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046a150: JMP 0x0046a092
//   XREF to: 0046a092 (UNCONDITIONAL_JUMP)
// 0046a155: JMP 0x0046a01a
//   Label: LAB_0046a155
//   XREF to: 0046a01a (UNCONDITIONAL_JUMP)
// 0046a15a: JMP 0x00469fc4
//   Label: LAB_0046a15a
//   XREF to: 00469fc4 (UNCONDITIONAL_JUMP)
// 0046a15f: PUSH 0x25da
//   Label: LAB_0046a15f
// 0046a164: MOV EAX,0x61d17e
//   XREF to: 0061d17e (DATA)
// 0046a169: PUSH EAX
//   XREF to: 0061d17e (DATA)
// 0046a16a: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046a16d: PUSH EAX
// 0046a16e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0046a173: ADD ESP,0xc
// 0046a176: MOV ESP,EBP
//   Label: LAB_0046a176
// 0046a178: POP EBP
// 0046a179: POP EDI
// 0046a17a: POP ESI
// 0046a17b: POP EBX
// 0046a17c: RET
