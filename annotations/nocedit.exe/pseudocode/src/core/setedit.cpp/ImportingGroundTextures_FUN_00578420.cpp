// Name: core_setedit.cpp_ImportingGroundTextures_FUN_00578420
// Address: 00578420
// Address Range: [[00578420, 00578624]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_ImportingGroundTextures_FUN_00578420()
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005796ed [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 00578648 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Importing_texture_ground_0064688c
//   TerminatedCString s_core_setedit_cpp_006468ba
//   TerminatedCString s_rt_006468ce
//   TerminatedCString s_s_006468d1
//   TerminatedCString s_d_006468db
//   TerminatedCString s_core_setedit_cpp_006468de
//   TerminatedCString s_Error_parsing_s_line_d_s_006468f2
//   TerminatedCString s_core_setedit_cpp_00646911
//   TerminatedCString s_Imported_texture_ground__00646925
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char[256] g_CharacterClassificationTable
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_ground.cpp_getGroundTypeCode_FUN_004eece0
//   core_ground.cpp_getGroundTypeName_FUN_004eed80
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setedit.cpp_DefineTexturesMaybe_FUN_00578290
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void core_setedit_cpp_ImportingGroundTextures_FUN_00578420(void)

{
  FILE *stream;
  char *pcVar1;
  int iVar2;
  char *str1;
  char *type;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  int iVar4;
  undefined4 in_stack_00000004;
  char *in_stack_00000008;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  char *str2;
  char *pcStack_194;
  char acStack_190 [8];
  char acStack_188 [192];
  undefined1 auStack_c8 [4];
  char acStack_c4 [4];
  char acStack_c0 [92];
  undefined1 auStack_64 [92];
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing texture ground type list from %s...");
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (in_stack_00000008,(char *)0x0,"rt","..\\core\\setedit.cpp",0x2c3)
  ;
  if (stream != (FILE *)0x0) {
    iVar4 = 0;
    while (pcVar1 = crt_stdio_c_fgets_FUN_005fefd0((char *)&pcStack_194,200,stream),
          pcVar1 != (char *)0x0) {
      pcVar1 = acStack_190;
      do {
        pcVar3 = pcVar1;
        if (*pcVar1 == '\n') goto LAB_005784ac;
        if (*pcVar1 == '\0') break;
        pcVar3 = pcVar1 + 1;
        if (*pcVar3 == '\n') goto LAB_005784ac;
        pcVar1 = pcVar1 + 2;
      } while (*pcVar3 != '\0');
      pcVar3 = (char *)0x0;
LAB_005784ac:
      iVar4 = iVar4 + 1;
      if (pcVar3 != (char *)0x0) {
        pcVar1 = acStack_190;
        do {
          pcVar3 = pcVar1;
          if (*pcVar1 == '\n') goto LAB_005784e7;
          if (*pcVar1 == '\0') break;
          pcVar3 = pcVar1 + 1;
          if (*pcVar3 == '\n') goto LAB_005784e7;
          pcVar1 = pcVar1 + 2;
        } while (*pcVar3 != '\0');
        pcVar3 = (char *)0x0;
LAB_005784e7:
        *pcVar3 = '\0';
      }
      pcVar1 = acStack_190;
      while ((g_CharacterClassificationTable[(byte)(*pcVar1 + 1)] & 2U) != 0) {
        pcVar1 = pcVar1 + 1;
      }
      if (*pcVar1 != '\0') {
        iVar2 = crt_stdio_c_sscanf_FUN_0060013c(pcVar1,"%[^,], %s",auStack_64,auStack_c8);
        pcVar1 = in_stack_00000008;
        if (iVar2 == 2) {
          pcVar3 = acStack_c4;
          iVar2 = crt_stdio_c_sscanf_FUN_0060013c(pcVar3,"%d",&stack0x00000004);
          pcVar1 = in_stack_00000008;
          if (iVar2 != 1) {
            type = (char *)0x0;
            while( true ) {
              pcStack_194 = acStack_c0;
              str2 = type;
              pcVar1 = core_ground_cpp_getGroundTypeCode_FUN_004eece0((int)type);
              iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar1,pcVar3);
              pcVar1 = type;
              if (iVar2 == 0) break;
              str1 = core_ground_cpp_getGroundTypeName_FUN_004eed80((int)type);
              pcVar3 = (char *)0x5785af;
              iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,str2);
              if ((iVar2 == 0) || (type = type + 1, pcVar1 = in_stack_00000008, 0xd < (int)type))
              break;
            }
          }
        }
        in_stack_00000008 = pcVar1;
        if ((int)in_stack_00000008 < 0) {
          pcStack_194 = acStack_188;
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x2f0;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error parsing %s line %d:\n\"%s\"",in_stack_00000018,iVar4);
        }
        pcStack_194 = in_stack_00000008;
        core_setedit_cpp_DefineTexturesMaybe_FUN_00578290();
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\core\\setedit.cpp",0x2f4);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Imported texture ground type list from %s OK.");
  }
  return;
}


// Assembly code:
// 00578420: PUSH EBX
//   Label: core_setedit.cpp_ImportingGroundTextures_FUN_00578420
// 00578421: PUSH EBP
// 00578422: SUB ESP,0x194
// 00578428: MOV EDX,dword ptr [ESP + 0x1a0]
//   XREF to: Stack[0x4] (READ)
// 0057842f: PUSH EDX
// 00578430: PUSH 0x64688c
//   XREF to: 0064688c (DATA)
// 00578435: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057843b: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0057843c: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00578441: ADD ESP,0xc
// 00578444: PUSH 0x2c3
// 00578449: PUSH 0x6468ba
//   XREF to: 006468ba (DATA)
// 0057844e: PUSH 0x6468ce
//   XREF to: 006468ce (DATA)
// 00578453: PUSH 0x0
// 00578455: MOV EBX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[0x4] (READ)
// 0057845c: PUSH EBX
// 0057845d: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00578462: ADD ESP,0x14
// 00578465: MOV EBP,EAX
// 00578467: TEST EAX,EAX
// 00578469: JZ 0x0057861c
//   XREF to: 0057861c (CONDITIONAL_JUMP)
// 0057846f: PUSH EDI
// 00578470: PUSH ESI
// 00578471: XOR EDI,EDI
// 00578473: PUSH EBP
//   Label: LAB_00578473
// 00578474: PUSH 0xc8
// 00578479: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x19c] (DATA)
// 0057847d: PUSH EAX
// 0057847e: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00578483: ADD ESP,0xc
// 00578486: TEST EAX,EAX
// 00578488: JZ 0x005785eb
//   XREF to: 005785eb (CONDITIONAL_JUMP)
// 0057848e: MOV DL,0xa
// 00578490: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x19c] (DATA)
// 00578494: MOV AL,byte ptr [ESI]
//   Label: LAB_00578494
//   XREF to: Stack[-0x19c] (DATA)
// 00578496: CMP AL,DL
// 00578498: JZ 0x005784ac
//   XREF to: 005784ac (CONDITIONAL_JUMP)
// 0057849a: CMP AL,0x0
// 0057849c: JZ 0x005784aa
//   XREF to: 005784aa (CONDITIONAL_JUMP)
// 0057849e: INC ESI
// 0057849f: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x19b] (DATA)
// 005784a1: CMP AL,DL
// 005784a3: JZ 0x005784ac
//   XREF to: 005784ac (CONDITIONAL_JUMP)
// 005784a5: INC ESI
// 005784a6: CMP AL,0x0
// 005784a8: JNZ 0x00578494
//   XREF to: 00578494 (CONDITIONAL_JUMP)
// 005784aa: SUB ESI,ESI
//   Label: LAB_005784aa
// 005784ac: INC EDI
//   Label: LAB_005784ac
// 005784ad: TEST ESI,ESI
// 005784af: JNZ 0x005784cb
//   XREF to: 005784cb (CONDITIONAL_JUMP)
// 005784b1: LEA EAX,[ESP + 0x8]
//   Label: LAB_005784b1
//   XREF to: Stack[-0x19c] (DATA)
// 005784b5: MOV BL,byte ptr [EAX]
//   Label: LAB_005784b5
//   XREF to: Stack[-0x19c] (DATA)
// 005784b7: INC BL
// 005784b9: AND EBX,0xff
// 005784bf: TEST byte ptr [EBX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005784c6: JZ 0x005784ec
//   XREF to: 005784ec (CONDITIONAL_JUMP)
// 005784c8: INC EAX
// 005784c9: JMP 0x005784b5
//   XREF to: 005784b5 (UNCONDITIONAL_JUMP)
// 005784cb: LEA ESI,[ESP + 0x8]
//   Label: LAB_005784cb
//   XREF to: Stack[-0x19c] (DATA)
// 005784cf: MOV AL,byte ptr [ESI]
//   Label: LAB_005784cf
//   XREF to: Stack[-0x19c] (DATA)
// 005784d1: CMP AL,DL
// 005784d3: JZ 0x005784e7
//   XREF to: 005784e7 (CONDITIONAL_JUMP)
// 005784d5: CMP AL,0x0
// 005784d7: JZ 0x005784e5
//   XREF to: 005784e5 (CONDITIONAL_JUMP)
// 005784d9: INC ESI
// 005784da: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x19b] (DATA)
// 005784dc: CMP AL,DL
// 005784de: JZ 0x005784e7
//   XREF to: 005784e7 (CONDITIONAL_JUMP)
// 005784e0: INC ESI
// 005784e1: CMP AL,0x0
// 005784e3: JNZ 0x005784cf
//   XREF to: 005784cf (CONDITIONAL_JUMP)
// 005784e5: SUB ESI,ESI
//   Label: LAB_005784e5
// 005784e7: MOV byte ptr [ESI],0x0
//   Label: LAB_005784e7
//   XREF to: Stack[-0x19b] (DATA)
// 005784ea: JMP 0x005784b1
//   XREF to: 005784b1 (UNCONDITIONAL_JUMP)
// 005784ec: CMP byte ptr [EAX],0x0
//   Label: LAB_005784ec
//   XREF to: Stack[-0x19c] (DATA)
// 005784ef: JZ 0x00578473
//   XREF to: 00578473 (CONDITIONAL_JUMP)
// 005784f1: LEA EBX,[ESP + 0xd0]
//   XREF to: Stack[-0xd4] (DATA)
// 005784f8: PUSH EBX
// 005784f9: LEA EBX,[ESP + 0x138]
//   XREF to: Stack[-0x70] (DATA)
// 00578500: PUSH EBX
// 00578501: PUSH 0x6468d1
//   XREF to: 006468d1 (DATA)
// 00578506: MOV EDX,0xffffffff
// 0057850b: PUSH EAX
// 0057850c: MOV dword ptr [ESP + 0x1a8],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 00578513: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00578518: ADD ESP,0x10
// 0057851b: CMP EAX,0x2
// 0057851e: JNZ 0x00578569
//   XREF to: 00578569 (CONDITIONAL_JUMP)
// 00578520: LEA EAX,[ESP + 0x198]
//   XREF to: Stack[-0xc] (DATA)
// 00578527: PUSH EAX
// 00578528: PUSH 0x6468db
//   XREF to: 006468db (DATA)
// 0057852d: LEA EAX,[ESP + 0xd8]
//   XREF to: Stack[-0xd4] (DATA)
// 00578534: PUSH EAX
// 00578535: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0057853a: ADD ESP,0xc
// 0057853d: CMP EAX,0x1
// 00578540: JZ 0x00578569
//   XREF to: 00578569 (CONDITIONAL_JUMP)
// 00578542: XOR EBX,EBX
// 00578544: LEA EAX,[ESP + 0xd0]
//   Label: LAB_00578544
//   XREF to: Stack[-0xd4] (DATA)
// 0057854b: PUSH EAX
// 0057854c: PUSH EBX
// 0057854d: CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0
//   XREF to: 004eece0 (UNCONDITIONAL_CALL)
// 00578552: ADD ESP,0x4
// 00578555: PUSH EAX
// 00578556: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0057855b: ADD ESP,0x8
// 0057855e: TEST EAX,EAX
// 00578560: JNZ 0x00578598
//   XREF to: 00578598 (CONDITIONAL_JUMP)
// 00578562: MOV dword ptr [ESP + 0x198],EBX
//   Label: LAB_00578562
//   XREF to: Stack[-0xc] (WRITE)
// 00578569: CMP dword ptr [ESP + 0x198],0x0
//   Label: LAB_00578569
//   XREF to: Stack[-0xc] (READ)
// 00578571: JL 0x005785b8
//   XREF to: 005785b8 (CONDITIONAL_JUMP)
// 00578573: MOV EDX,dword ptr [ESP + 0x198]
//   Label: LAB_00578573
//   XREF to: Stack[-0xc] (READ)
// 0057857a: PUSH EDX
// 0057857b: LEA EAX,[ESP + 0x138]
//   XREF to: Stack[-0x70] (DATA)
// 00578582: PUSH EAX
// 00578583: CALL core_setedit.cpp_DefineTexturesMaybe_FUN_00578290
//   XREF to: 00578290 (UNCONDITIONAL_CALL)
// 00578588: ADD ESP,0x8
// 0057858b: JMP 0x00578473
//   XREF to: 00578473 (UNCONDITIONAL_JUMP)
// 00578590: INC EBX
//   Label: LAB_00578590
// 00578591: CMP EBX,0xd
// 00578594: JLE 0x00578544
//   XREF to: 00578544 (CONDITIONAL_JUMP)
// 00578596: JMP 0x00578569
//   XREF to: 00578569 (UNCONDITIONAL_JUMP)
// 00578598: LEA EAX,[ESP + 0xd0]
//   Label: LAB_00578598
//   XREF to: Stack[-0xd4] (DATA)
// 0057859f: PUSH EAX
// 005785a0: PUSH EBX
// 005785a1: CALL core_ground.cpp_getGroundTypeName_FUN_004eed80
//   XREF to: 004eed80 (UNCONDITIONAL_CALL)
// 005785a6: ADD ESP,0x4
// 005785a9: PUSH EAX
// 005785aa: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005785af: ADD ESP,0x8
// 005785b2: TEST EAX,EAX
// 005785b4: JNZ 0x00578590
//   XREF to: 00578590 (CONDITIONAL_JUMP)
// 005785b6: JMP 0x00578562
//   XREF to: 00578562 (UNCONDITIONAL_JUMP)
// 005785b8: LEA EAX,[ESP + 0x8]
//   Label: LAB_005785b8
//   XREF to: Stack[-0x19c] (DATA)
// 005785bc: PUSH EAX
// 005785bd: PUSH EDI
// 005785be: MOV EAX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[0x4] (READ)
// 005785c5: PUSH EAX
// 005785c6: MOV EBX,0x6468de
//   XREF to: 006468de (PARAM)
// 005785cb: MOV ESI,0x2f0
// 005785d0: PUSH 0x6468f2
//   XREF to: 006468f2 (DATA)
// 005785d5: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005785db: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005785e1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005785e6: ADD ESP,0x10
// 005785e9: JMP 0x00578573
//   XREF to: 00578573 (UNCONDITIONAL_JUMP)
// 005785eb: PUSH 0x2f4
//   Label: LAB_005785eb
// 005785f0: PUSH 0x646911
//   XREF to: 00646911 (DATA)
// 005785f5: PUSH EBP
// 005785f6: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005785fb: ADD ESP,0xc
// 005785fe: MOV ESI,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[0x4] (READ)
// 00578605: PUSH ESI
// 00578606: PUSH 0x646925
//   XREF to: 00646925 (DATA)
// 0057860b: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00578611: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00578612: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00578617: ADD ESP,0xc
// 0057861a: POP ESI
// 0057861b: POP EDI
// 0057861c: ADD ESP,0x194
//   Label: LAB_0057861c
// 00578622: POP EBP
// 00578623: POP EBX
// 00578624: RET
