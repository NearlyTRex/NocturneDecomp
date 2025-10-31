// Name: engine_pcx.c_saveScreenRaw32_FUN_00548f00
// Address: 00548f00
// Address Range: [[00548f00, 005490bd]]
// Convention: __cdecl
// Signature: void engine_pcx.c_saveScreenRaw32_FUN_00548f00(char * filename)
// Cross-references:
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 (005490c0) at 0054928b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pcx_c_0063eb7d
//   TerminatedCString s_saveScreenRaw32_No_ext_f_0063eb8d
//   TerminatedCString s_RAW_0063ebac
//   undefined4 DAT_0063ebad
//   undefined4 DAT_0063ebae
//   undefined4 DAT_0063ebaf
//   TerminatedCString s_engine_pcx_c_0063ebb1
//   TerminatedCString s_wb_0063ebc1
//   TerminatedCString s_engine_pcx_c_0063ebc4
//   TerminatedCString s_saveScreenRaw32_Unable_t_0063ebd4
//   TerminatedCString s_engine_pcx_c_0063ebfc
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fputc_FUN_006007a0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl engine_pcx_c_saveScreenRaw32_FUN_00548f00(char *filename)

{
  char cVar1;
  FILE *file;
  uint *puVar2;
  BADSPACEBASE *in_ESP;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int character;
  
  pcVar6 = &stack0xffffff94;
  do {
    cVar1 = *filename;
    *pcVar6 = cVar1;
    pcVar4 = &stack0xffffff94;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
    pcVar4 = &stack0xffffff94;
  } while (cVar1 != '\0');
  do {
    pcVar6 = pcVar4;
    if (*pcVar4 == '.') goto LAB_00548f43;
    if (*pcVar4 == '\0') break;
    pcVar6 = pcVar4 + 1;
    if (*pcVar6 == '.') goto LAB_00548f43;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_00548f43:
  if (pcVar6 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0x98;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw32 - No ext found");
  }
  pcVar4 = ".RAW";
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (&stack0xffffff98,(char *)0x0,"wb","..\\engine\\pcx.c",0x9d);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0x9e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw32 - Unable to open output");
  }
  character = 0;
  if (0 < g_WindowHeight) {
    iVar7 = 0;
    do {
      iVar5 = 0;
      puVar2 = *(uint **)((int)g_ScreenBufferArray + iVar7);
      if (0 < g_WindowWidth) {
        do {
          uVar3 = (*puVar2 >> ((byte)g_GreenBitPosition & 0x1f)) * g_GreenScaleFactor;
          crt_stdio_c_fputc_FUN_006007a0
                    (g_RedScaleFactor * (*puVar2 >> ((byte)g_RedBitPosition & 0x1f)) & 0xff,file);
          crt_stdio_c_fputc_FUN_006007a0(uVar3 & 0xff,file);
          puVar2 = puVar2 + 1;
          iVar5 = iVar5 + 1;
          crt_stdio_c_fputc_FUN_006007a0(character,file);
        } while (iVar5 < g_WindowWidth);
      }
      iVar7 = iVar7 + 4;
      character = character + 1;
    } while (character < g_WindowHeight);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pcx.c",0xb5);
  return;
}


// Assembly code:
// 00548f00: PUSH EBX
//   Label: engine_pcx.c_saveScreenRaw32_FUN_00548f00
// 00548f01: PUSH ESI
// 00548f02: PUSH EDI
// 00548f03: PUSH EBP
// 00548f04: SUB ESP,0x5c
// 00548f07: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 00548f0b: MOV EDI,ESP
// 00548f0d: MOV DL,0x2e
// 00548f0f: PUSH EDI
// 00548f10: MOV AL,byte ptr [ESI]
//   Label: LAB_00548f10
// 00548f12: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x6c] (DATA)
// 00548f14: CMP AL,0x0
// 00548f16: JZ 0x00548f28
//   XREF to: 00548f28 (CONDITIONAL_JUMP)
// 00548f18: MOV AL,byte ptr [ESI + 0x1]
// 00548f1b: ADD ESI,0x2
// 00548f1e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6b] (WRITE)
// 00548f21: ADD EDI,0x2
// 00548f24: CMP AL,0x0
// 00548f26: JNZ 0x00548f10
//   XREF to: 00548f10 (CONDITIONAL_JUMP)
// 00548f28: POP EDI
//   Label: LAB_00548f28
// 00548f29: MOV ESI,ESP
// 00548f2b: MOV AL,byte ptr [ESI]
//   Label: LAB_00548f2b
//   XREF to: Stack[-0x6c] (DATA)
// 00548f2d: CMP AL,DL
// 00548f2f: JZ 0x00548f43
//   XREF to: 00548f43 (CONDITIONAL_JUMP)
// 00548f31: CMP AL,0x0
// 00548f33: JZ 0x00548f41
//   XREF to: 00548f41 (CONDITIONAL_JUMP)
// 00548f35: INC ESI
// 00548f36: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x6b] (DATA)
// 00548f38: CMP AL,DL
// 00548f3a: JZ 0x00548f43
//   XREF to: 00548f43 (CONDITIONAL_JUMP)
// 00548f3c: INC ESI
// 00548f3d: CMP AL,0x0
// 00548f3f: JNZ 0x00548f2b
//   XREF to: 00548f2b (CONDITIONAL_JUMP)
// 00548f41: SUB ESI,ESI
//   Label: LAB_00548f41
// 00548f43: MOV EDI,ESI
//   Label: LAB_00548f43
// 00548f45: TEST ESI,ESI
// 00548f47: JZ 0x00549096
//   XREF to: 00549096 (CONDITIONAL_JUMP)
// 00548f4d: MOV ESI,0x63ebac
//   Label: LAB_00548f4d
//   XREF to: 0063ebac (DATA)
// 00548f52: PUSH EDI
// 00548f53: MOV AL,byte ptr [ESI]
//   Label: LAB_00548f53
//   XREF to: 0063ebac (READ)
//   XREF to: 0063ebae (READ)
// 00548f55: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x69] (DATA)
// 00548f57: CMP AL,0x0
// 00548f59: JZ 0x00548f6b
//   XREF to: 00548f6b (CONDITIONAL_JUMP)
// 00548f5b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063ebad (READ)
//   XREF to: 0063ebaf (READ)
// 00548f5e: ADD ESI,0x2
// 00548f61: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x69] (WRITE)
// 00548f64: ADD EDI,0x2
// 00548f67: CMP AL,0x0
// 00548f69: JNZ 0x00548f53
//   XREF to: 00548f53 (CONDITIONAL_JUMP)
// 00548f6b: POP EDI
//   Label: LAB_00548f6b
// 00548f6c: PUSH 0x9d
// 00548f71: PUSH 0x63ebb1
//   XREF to: 0063ebb1 (DATA)
// 00548f76: PUSH 0x63ebc1
//   XREF to: 0063ebc1 (DATA)
// 00548f7b: PUSH 0x0
// 00548f7d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x6c] (DATA)
// 00548f81: PUSH EAX
// 00548f82: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00548f87: ADD ESP,0x14
// 00548f8a: MOV EDI,EAX
// 00548f8c: TEST EAX,EAX
// 00548f8e: JNZ 0x00548fb3
//   XREF to: 00548fb3 (CONDITIONAL_JUMP)
// 00548f90: MOV EBX,0x63ebc4
//   XREF to: 0063ebc4 (PARAM)
// 00548f95: MOV ESI,0x9e
// 00548f9a: PUSH 0x63ebd4
//   XREF to: 0063ebd4 (DATA)
// 00548f9f: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00548fa5: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00548fab: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00548fb0: ADD ESP,0x4
// 00548fb3: XOR EBP,EBP
//   Label: LAB_00548fb3
// 00548fb5: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00548fba: MOV dword ptr [ESP + 0x58],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00548fbe: TEST EAX,EAX
// 00548fc0: JLE 0x0054907b
//   XREF to: 0054907b (CONDITIONAL_JUMP)
// 00548fc6: MOV dword ptr [ESP + 0x54],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 00548fca: MOV EBX,dword ptr [ESP + 0x54]
//   Label: LAB_00548fca
//   XREF to: Stack[-0x18] (READ)
// 00548fce: MOV EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00548fd4: XOR ESI,ESI
// 00548fd6: MOV EBX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00548fdc: TEST EBP,EBP
// 00548fde: JLE 0x00549059
//   XREF to: 00549059 (CONDITIONAL_JUMP)
// 00548fe0: MOV CL,byte ptr [0x02d01f24]
//   Label: LAB_00548fe0
//   XREF to: 02d01f24 (READ)
// 00548fe6: MOV EAX,dword ptr [EBX]
// 00548fe8: MOV EDX,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 00548fee: SHR EAX,CL
// 00548ff0: IMUL EDX,EAX
// 00548ff3: MOV EBP,dword ptr [EBX]
// 00548ff5: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00548ffb: SHR EBP,CL
// 00548ffd: IMUL EBP,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 00549004: MOV EAX,dword ptr [EBX]
// 00549006: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0054900c: SHR EAX,CL
// 0054900e: IMUL EAX,dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 00549015: PUSH EDI
// 00549016: AND EDX,0xff
// 0054901c: AND EAX,0xff
// 00549021: PUSH EDX
// 00549022: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00549026: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0054902b: ADD ESP,0x8
// 0054902e: PUSH EDI
// 0054902f: AND EBP,0xff
// 00549035: PUSH EBP
// 00549036: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0054903b: ADD ESP,0x8
// 0054903e: PUSH EDI
// 0054903f: MOV EBP,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 00549043: PUSH EBP
// 00549044: ADD EBX,0x4
// 00549047: INC ESI
// 00549048: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0054904d: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00549052: ADD ESP,0x8
// 00549055: CMP ESI,EAX
// 00549057: JL 0x00548fe0
//   XREF to: 00548fe0 (CONDITIONAL_JUMP)
// 00549059: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_00549059
//   XREF to: Stack[-0x18] (READ)
// 0054905d: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (READ)
// 00549061: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00549067: ADD EDX,0x4
// 0054906a: INC ECX
// 0054906b: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0054906f: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00549073: CMP ECX,EBX
// 00549075: JL 0x00548fca
//   XREF to: 00548fca (CONDITIONAL_JUMP)
// 0054907b: PUSH 0xb5
//   Label: LAB_0054907b
// 00549080: PUSH 0x63ebfc
//   XREF to: 0063ebfc (DATA)
// 00549085: PUSH EDI
// 00549086: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0054908b: ADD ESP,0xc
// 0054908e: ADD ESP,0x5c
// 00549091: POP EBP
// 00549092: POP EDI
// 00549093: POP ESI
// 00549094: POP EBX
// 00549095: RET
// 00549096: MOV EDX,0x63eb7d
//   Label: LAB_00549096
//   XREF to: 0063eb7d (PARAM)
// 0054909b: MOV ECX,0x98
// 005490a0: PUSH 0x63eb8d
//   XREF to: 0063eb8d (DATA)
// 005490a5: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005490ab: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005490b1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005490b6: ADD ESP,0x4
// 005490b9: JMP 0x00548f4d
//   XREF to: 00548f4d (UNCONDITIONAL_JUMP)
