// Name: shape_design.c_cramTextures_FUN_0046a970
// Address: 0046a970
// Address Range: [[0046a970, 0046abec]]
// Convention: __cdecl
// Signature: void shape_design.c_cramTextures_FUN_0046a970(char * texture_filename, int min_u, int min_v, int max_u, int max_v)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (0047a3e0) at 0047a51b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058de70 (0058de70) at 0058dfe7 [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a458 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_TGA_0061d253
//   undefined4 DAT_0061d254
//   undefined4 DAT_0061d255
//   undefined4 DAT_0061d256
//   TerminatedCString s_Too_many_textures_to_cra_0061d258
//   TerminatedCString s_shape_design_c_0061d27d
//   int g_TextureProcessedCount
//   STextureAtlasEntry[250] g_TextureAtlasEntries
//   undefined4 DAT_01e8d265
//   undefined4 DAT_01e8d266
//   undefined4 DAT_01e8d267
//   undefined4 DAT_01e8d364
//   undefined4 DAT_01e8d365
//   undefined4 DAT_01e8d366
//   undefined4 DAT_01e8d367
//   undefined4 DAT_01e8d4a4
//   undefined4 DAT_01e8d4a8
//   undefined4 DAT_01e8d4ac
//   undefined4 DAT_01e8d4b0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl
shape_design_c_cramTextures_FUN_0046a970
          (char *texture_filename,int min_u,int min_v,int max_u,int max_v)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  STextureAtlasEntry *pSVar5;
  char local_1e4 [200];
  char local_11c [260];
  char *local_18;
  int local_14;
  
  pcVar4 = local_11c;
  pcVar3 = texture_filename;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar4 = local_11c;
  do {
    local_18 = pcVar4;
    if (*pcVar4 == '.') goto LAB_0046a9c2;
    if (*pcVar4 == '\0') break;
    local_18 = pcVar4 + 1;
    if (*local_18 == '.') goto LAB_0046a9c2;
    pcVar4 = pcVar4 + 2;
  } while (*local_18 != '\0');
  local_18 = (char *)0x0;
LAB_0046a9c2:
  if (local_18 == (char *)0x0) {
    pcVar4 = local_11c;
    do {
      local_18 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_0046a9eb;
      if (*pcVar4 == '\0') break;
      local_18 = pcVar4 + 1;
      if (*local_18 == '\0') goto LAB_0046a9eb;
      pcVar4 = pcVar4 + 2;
    } while (*local_18 != '\0');
    local_18 = (char *)0x0;
LAB_0046a9eb:
  }
  pcVar3 = ".TGA";
  pcVar4 = local_18;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  for (local_14 = 0; local_14 < g_TextureProcessedCount; local_14 = local_14 + 1) {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                      (g_TextureAtlasEntries[local_14].tga_filename,local_11c);
    if (iVar2 == 0) {
      if (min_u < g_TextureAtlasEntries[local_14].min_u) {
        g_TextureAtlasEntries[local_14].min_u = min_u;
      }
      if (g_TextureAtlasEntries[local_14].max_u < max_u) {
        g_TextureAtlasEntries[local_14].max_u = max_u;
      }
      if (min_v < g_TextureAtlasEntries[local_14].min_v) {
        g_TextureAtlasEntries[local_14].min_v = min_v;
      }
      if (max_v <= g_TextureAtlasEntries[local_14].max_v) {
        return;
      }
      g_TextureAtlasEntries[local_14].max_v = max_v;
      return;
    }
  }
  if (0xf9 < g_TextureProcessedCount) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_1e4,"Too many textures to cram, max is %d",0xfa);
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x26f8;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_1e4);
  }
  pcVar4 = local_11c;
  pSVar5 = g_TextureAtlasEntries + g_TextureProcessedCount;
  do {
    cVar1 = *pcVar4;
    pSVar5->tga_filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pSVar5->tga_filename[1] = cVar1;
    pSVar5 = (STextureAtlasEntry *)(pSVar5->tga_filename + 2);
  } while (cVar1 != '\0');
  pcVar4 = g_TextureAtlasEntries[g_TextureProcessedCount].original_filename;
  do {
    cVar1 = *texture_filename;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_filename[1];
    texture_filename = texture_filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  g_TextureAtlasEntries[g_TextureProcessedCount].min_u = min_u;
  g_TextureAtlasEntries[g_TextureProcessedCount].min_v = min_v;
  g_TextureAtlasEntries[g_TextureProcessedCount].max_u = max_u;
  g_TextureAtlasEntries[g_TextureProcessedCount].max_v = max_v;
  g_TextureProcessedCount = g_TextureProcessedCount + 1;
  return;
}


// Assembly code:
// 0046a970: PUSH EBX
//   Label: shape_design.c_cramTextures_FUN_0046a970
// 0046a971: PUSH ESI
// 0046a972: PUSH EDI
// 0046a973: PUSH EBP
// 0046a974: MOV EBP,ESP
// 0046a976: SUB ESP,0x1d4
// 0046a97c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046a97f: LEA EDI,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0046a985: PUSH EDI
// 0046a986: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a986
// 0046a988: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x11c] (DATA)
// 0046a98a: CMP AL,0x0
// 0046a98c: JZ 0x0046a99e
//   XREF to: 0046a99e (CONDITIONAL_JUMP)
// 0046a98e: MOV AL,byte ptr [ESI + 0x1]
// 0046a991: ADD ESI,0x2
// 0046a994: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x11b] (WRITE)
// 0046a997: ADD EDI,0x2
// 0046a99a: CMP AL,0x0
// 0046a99c: JNZ 0x0046a986
//   XREF to: 0046a986 (CONDITIONAL_JUMP)
// 0046a99e: POP EDI
//   Label: LAB_0046a99e
// 0046a99f: MOV EDX,0x2e
// 0046a9a4: LEA ESI,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0046a9aa: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a9aa
//   XREF to: Stack[-0x11c] (DATA)
// 0046a9ac: CMP AL,DL
// 0046a9ae: JZ 0x0046a9c2
//   XREF to: 0046a9c2 (CONDITIONAL_JUMP)
// 0046a9b0: CMP AL,0x0
// 0046a9b2: JZ 0x0046a9c0
//   XREF to: 0046a9c0 (CONDITIONAL_JUMP)
// 0046a9b4: INC ESI
// 0046a9b5: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x11b] (DATA)
// 0046a9b7: CMP AL,DL
// 0046a9b9: JZ 0x0046a9c2
//   XREF to: 0046a9c2 (CONDITIONAL_JUMP)
// 0046a9bb: INC ESI
// 0046a9bc: CMP AL,0x0
// 0046a9be: JNZ 0x0046a9aa
//   XREF to: 0046a9aa (CONDITIONAL_JUMP)
// 0046a9c0: SUB ESI,ESI
//   Label: LAB_0046a9c0
// 0046a9c2: MOV dword ptr [EBP + -0x8],ESI
//   Label: LAB_0046a9c2
//   XREF to: Stack[-0x18] (WRITE)
// 0046a9c5: CMP dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (READ)
// 0046a9c9: JNZ 0x0046a9ee
//   XREF to: 0046a9ee (CONDITIONAL_JUMP)
// 0046a9cb: XOR EDX,EDX
// 0046a9cd: LEA ESI,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0046a9d3: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a9d3
//   XREF to: Stack[-0x11c] (DATA)
// 0046a9d5: CMP AL,DL
// 0046a9d7: JZ 0x0046a9eb
//   XREF to: 0046a9eb (CONDITIONAL_JUMP)
// 0046a9d9: CMP AL,0x0
// 0046a9db: JZ 0x0046a9e9
//   XREF to: 0046a9e9 (CONDITIONAL_JUMP)
// 0046a9dd: INC ESI
// 0046a9de: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x11b] (DATA)
// 0046a9e0: CMP AL,DL
// 0046a9e2: JZ 0x0046a9eb
//   XREF to: 0046a9eb (CONDITIONAL_JUMP)
// 0046a9e4: INC ESI
// 0046a9e5: CMP AL,0x0
// 0046a9e7: JNZ 0x0046a9d3
//   XREF to: 0046a9d3 (CONDITIONAL_JUMP)
// 0046a9e9: SUB ESI,ESI
//   Label: LAB_0046a9e9
// 0046a9eb: MOV dword ptr [EBP + -0x8],ESI
//   Label: LAB_0046a9eb
//   XREF to: Stack[-0x18] (WRITE)
// 0046a9ee: MOV ESI,0x61d253
//   Label: LAB_0046a9ee
//   XREF to: 0061d253 (DATA)
// 0046a9f3: MOV EDI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046a9f6: PUSH EDI
// 0046a9f7: MOV AL,byte ptr [ESI]
//   Label: LAB_0046a9f7
//   XREF to: 0061d253 (READ)
//   XREF to: 0061d255 (READ)
// 0046a9f9: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x11b] (DATA)
// 0046a9fb: CMP AL,0x0
// 0046a9fd: JZ 0x0046aa0f
//   XREF to: 0046aa0f (CONDITIONAL_JUMP)
// 0046a9ff: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061d254 (READ)
//   XREF to: 0061d256 (READ)
// 0046aa02: ADD ESI,0x2
// 0046aa05: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x119] (WRITE)
// 0046aa08: ADD EDI,0x2
// 0046aa0b: CMP AL,0x0
// 0046aa0d: JNZ 0x0046a9f7
//   XREF to: 0046a9f7 (CONDITIONAL_JUMP)
// 0046aa0f: POP EDI
//   Label: LAB_0046aa0f
// 0046aa10: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046aa17: JMP 0x0046aa1f
//   XREF to: 0046aa1f (UNCONDITIONAL_JUMP)
// 0046aa19: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046aa19
//   XREF to: Stack[-0x14] (READ)
// 0046aa1c: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046aa1f: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046aa1f
//   XREF to: Stack[-0x14] (READ)
// 0046aa22: CMP EAX,dword ptr [0x01e8d260]
//   XREF to: 01e8d260 (READ)
// 0046aa28: JGE 0x0046aae6
//   XREF to: 0046aae6 (CONDITIONAL_JUMP)
// 0046aa2e: LEA EAX,[EBP + 0xfffffef4]
//   XREF to: Stack[-0x11c] (DATA)
// 0046aa34: PUSH EAX
// 0046aa35: IMUL EAX,dword ptr [EBP + -0x4],0x250
//   XREF to: Stack[-0x14] (READ)
// 0046aa3c: MOV EDX,0x1e8d264
//   XREF to: 01e8d264 (DATA)
// 0046aa41: ADD EAX,EDX
// 0046aa43: PUSH EAX
// 0046aa44: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0046aa49: ADD ESP,0x8
// 0046aa4c: TEST EAX,EAX
// 0046aa4e: JNZ 0x0046aae1
//   XREF to: 0046aae1 (CONDITIONAL_JUMP)
// 0046aa54: IMUL EDX,dword ptr [EBP + -0x4],0x250
//   XREF to: Stack[-0x14] (READ)
// 0046aa5b: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046aa5e: CMP EAX,dword ptr [EDX + 0x1e8d4a4]
//   XREF to: 01e8d4a4 (DATA)
// 0046aa64: JGE 0x0046aa76
//   XREF to: 0046aa76 (CONDITIONAL_JUMP)
// 0046aa66: IMUL EDX,dword ptr [EBP + -0x4],0x250
//   XREF to: Stack[-0x14] (READ)
// 0046aa6d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046aa70: MOV dword ptr [EDX + 0x1e8d4a4],EAX
//   XREF to: 01e8d4a4 (DATA)
// 0046aa76: IMUL EDX,dword ptr [EBP + -0x4],0x250
//   Label: LAB_0046aa76
//   XREF to: Stack[-0x14] (READ)
// 0046aa7d: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0046aa80: CMP EAX,dword ptr [EDX + 0x1e8d4ac]
//   XREF to: 01e8d4ac (DATA)
// 0046aa86: JLE 0x0046aa98
//   XREF to: 0046aa98 (CONDITIONAL_JUMP)
// 0046aa88: IMUL EDX,dword ptr [EBP + -0x4],0x250
//   XREF to: Stack[-0x14] (READ)
// 0046aa8f: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0046aa92: MOV dword ptr [EDX + 0x1e8d4ac],EAX
//   XREF to: 01e8d4ac (DATA)
// 0046aa98: IMUL EDX,dword ptr [EBP + -0x4],0x250
//   Label: LAB_0046aa98
//   XREF to: Stack[-0x14] (READ)
// 0046aa9f: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046aaa2: CMP EAX,dword ptr [EDX + 0x1e8d4a8]
//   XREF to: 01e8d4a8 (DATA)
// 0046aaa8: JGE 0x0046aaba
//   XREF to: 0046aaba (CONDITIONAL_JUMP)
// 0046aaaa: IMUL EDX,dword ptr [EBP + -0x4],0x250
//   XREF to: Stack[-0x14] (READ)
// 0046aab1: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046aab4: MOV dword ptr [EDX + 0x1e8d4a8],EAX
//   XREF to: 01e8d4a8 (DATA)
// 0046aaba: IMUL EDX,dword ptr [EBP + -0x4],0x250
//   Label: LAB_0046aaba
//   XREF to: Stack[-0x14] (READ)
// 0046aac1: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046aac4: CMP EAX,dword ptr [EDX + 0x1e8d4b0]
//   XREF to: 01e8d4b0 (DATA)
// 0046aaca: JLE 0x0046aadc
//   XREF to: 0046aadc (CONDITIONAL_JUMP)
// 0046aacc: IMUL EDX,dword ptr [EBP + -0x4],0x250
//   XREF to: Stack[-0x14] (READ)
// 0046aad3: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046aad6: MOV dword ptr [EDX + 0x1e8d4b0],EAX
//   XREF to: 01e8d4b0 (DATA)
// 0046aadc: JMP 0x0046abe6
//   Label: LAB_0046aadc
//   XREF to: 0046abe6 (UNCONDITIONAL_JUMP)
// 0046aae1: JMP 0x0046aa19
//   Label: LAB_0046aae1
//   XREF to: 0046aa19 (UNCONDITIONAL_JUMP)
// 0046aae6: CMP dword ptr [0x01e8d260],0xfa
//   Label: LAB_0046aae6
//   XREF to: 01e8d260 (READ)
// 0046aaf0: JL 0x0046ab2f
//   XREF to: 0046ab2f (CONDITIONAL_JUMP)
// 0046aaf2: PUSH 0xfa
// 0046aaf7: MOV EAX,0x61d258
//   XREF to: 0061d258 (DATA)
// 0046aafc: PUSH EAX
//   XREF to: 0061d258 (DATA)
// 0046aafd: LEA EAX,[EBP + 0xfffffe2c]
//   XREF to: Stack[-0x1e4] (DATA)
// 0046ab03: PUSH EAX
// 0046ab04: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0046ab09: ADD ESP,0xc
// 0046ab0c: MOV dword ptr [0x02f0ca48],0x61d27d
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061d27d (DATA)
// 0046ab16: MOV dword ptr [0x02f0ca4c],0x26f8
//   XREF to: 02f0ca4c (WRITE)
// 0046ab20: LEA EAX,[EBP + 0xfffffe2c]
//   XREF to: Stack[-0x1e4] (DATA)
// 0046ab26: PUSH EAX
// 0046ab27: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0046ab2c: ADD ESP,0x4
// 0046ab2f: LEA ESI,[EBP + 0xfffffef4]
//   Label: LAB_0046ab2f
//   XREF to: Stack[-0x11c] (DATA)
// 0046ab35: IMUL EDI,dword ptr [0x01e8d260],0x250
//   XREF to: 01e8d260 (READ)
// 0046ab3f: MOV EAX,0x1e8d264
//   XREF to: 01e8d264 (DATA)
// 0046ab44: ADD EDI,EAX
// 0046ab46: PUSH EDI
// 0046ab47: MOV AL,byte ptr [ESI]
//   Label: LAB_0046ab47
//   XREF to: Stack[-0x11c] (DATA)
// 0046ab49: MOV byte ptr [EDI],AL
//   XREF to: 01e8d264 (DATA)
//   XREF to: 01e8d266 (DATA)
// 0046ab4b: CMP AL,0x0
// 0046ab4d: JZ 0x0046ab5f
//   XREF to: 0046ab5f (CONDITIONAL_JUMP)
// 0046ab4f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x11b] (READ)
// 0046ab52: ADD ESI,0x2
// 0046ab55: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 01e8d265 (DATA)
//   XREF to: 01e8d267 (DATA)
// 0046ab58: ADD EDI,0x2
// 0046ab5b: CMP AL,0x0
// 0046ab5d: JNZ 0x0046ab47
//   XREF to: 0046ab47 (CONDITIONAL_JUMP)
// 0046ab5f: POP EDI
//   Label: LAB_0046ab5f
// 0046ab60: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046ab63: IMUL EAX,dword ptr [0x01e8d260],0x250
//   XREF to: 01e8d260 (READ)
// 0046ab6d: MOV EDI,0x1e8d264
//   XREF to: 01e8d264 (DATA)
// 0046ab72: ADD EAX,EDI
// 0046ab74: LEA EDI,[EAX + 0x100]
// 0046ab7a: PUSH EDI
// 0046ab7b: MOV AL,byte ptr [ESI]
//   Label: LAB_0046ab7b
// 0046ab7d: MOV byte ptr [EDI],AL
//   XREF to: 01e8d364 (DATA)
//   XREF to: 01e8d366 (DATA)
// 0046ab7f: CMP AL,0x0
// 0046ab81: JZ 0x0046ab93
//   XREF to: 0046ab93 (CONDITIONAL_JUMP)
// 0046ab83: MOV AL,byte ptr [ESI + 0x1]
// 0046ab86: ADD ESI,0x2
// 0046ab89: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 01e8d365 (DATA)
//   XREF to: 01e8d367 (DATA)
// 0046ab8c: ADD EDI,0x2
// 0046ab8f: CMP AL,0x0
// 0046ab91: JNZ 0x0046ab7b
//   XREF to: 0046ab7b (CONDITIONAL_JUMP)
// 0046ab93: POP EDI
//   Label: LAB_0046ab93
// 0046ab94: IMUL ESI,dword ptr [0x01e8d260],0x250
//   XREF to: 01e8d260 (READ)
// 0046ab9e: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046aba1: MOV dword ptr [ESI + 0x1e8d4a4],EAX
//   XREF to: 01e8d4a4 (DATA)
// 0046aba7: IMUL ESI,dword ptr [0x01e8d260],0x250
//   XREF to: 01e8d260 (READ)
// 0046abb1: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046abb4: MOV dword ptr [ESI + 0x1e8d4a8],EAX
//   XREF to: 01e8d4a8 (DATA)
// 0046abba: IMUL ESI,dword ptr [0x01e8d260],0x250
//   XREF to: 01e8d260 (READ)
// 0046abc4: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0046abc7: MOV dword ptr [ESI + 0x1e8d4ac],EAX
//   XREF to: 01e8d4ac (DATA)
// 0046abcd: IMUL ESI,dword ptr [0x01e8d260],0x250
//   XREF to: 01e8d260 (READ)
// 0046abd7: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046abda: MOV dword ptr [ESI + 0x1e8d4b0],EAX
//   XREF to: 01e8d4b0 (DATA)
// 0046abe0: INC dword ptr [0x01e8d260]
//   XREF to: 01e8d260 (READ_WRITE)
// 0046abe6: MOV ESP,EBP
//   Label: LAB_0046abe6
// 0046abe8: POP EBP
// 0046abe9: POP EDI
// 0046abea: POP ESI
// 0046abeb: POP EBX
// 0046abec: RET
