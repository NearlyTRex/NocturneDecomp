// Name: engine_pcx.c_saveScreenRaw16_FUN_00548d20
// Address: 00548d20
// Address Range: [[00548d20, 00548ef1]]
// Convention: __cdecl
// Signature: void engine_pcx.c_saveScreenRaw16_FUN_00548d20(char * filename)
// Cross-references:
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 (005490c0) at 00549280 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pcx_c_0063eaee
//   TerminatedCString s_saveScreenRaw16_No_ext_f_0063eafe
//   TerminatedCString s_RAW_0063eb1d
//   undefined4 DAT_0063eb1e
//   undefined4 DAT_0063eb1f
//   undefined4 DAT_0063eb20
//   TerminatedCString s_engine_pcx_c_0063eb22
//   TerminatedCString s_wb_0063eb32
//   TerminatedCString s_engine_pcx_c_0063eb35
//   TerminatedCString s_saveScreenRaw16_Unable_t_0063eb45
//   TerminatedCString s_engine_pcx_c_0063eb6d
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

void __cdecl engine_pcx_c_saveScreenRaw16_FUN_00548d20(char *filename)

{
  char cVar1;
  FILE *file;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint uVar3;
  char *pcVar4;
  ushort *puVar5;
  char *pcVar6;
  int character;
  int iVar7;
  
  pcVar6 = &stack0xffffff90;
  do {
    cVar1 = *filename;
    *pcVar6 = cVar1;
    pcVar4 = &stack0xffffff90;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
    pcVar4 = &stack0xffffff90;
  } while (cVar1 != '\0');
  do {
    pcVar6 = pcVar4;
    if (*pcVar4 == '.') goto LAB_00548d63;
    if (*pcVar4 == '\0') break;
    pcVar6 = pcVar4 + 1;
    if (*pcVar6 == '.') goto LAB_00548d63;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_00548d63:
  if (pcVar6 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw16 - No ext found");
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
                   (&stack0xffffff94,(char *)0x0,"wb","..\\engine\\pcx.c",0x6c);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0x6d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw16 - Unable to open output");
  }
  iVar7 = 0;
  if (0 < g_WindowHeight) {
    character = 0;
    do {
      iVar2 = 0;
      puVar5 = *(ushort **)((int)g_ScreenBufferArray + character);
      if (0 < g_WindowWidth) {
        do {
          uVar3 = (uint)(*puVar5 >> ((byte)g_BlueBitPosition & 0x1f)) * g_BlueScaleFactor;
          crt_stdio_c_fputc_FUN_006007a0
                    ((uint)(*puVar5 >> ((byte)g_RedBitPosition & 0x1f)) * g_RedScaleFactor & 0xff,
                     file);
          crt_stdio_c_fputc_FUN_006007a0(character,file);
          puVar5 = puVar5 + 1;
          iVar2 = iVar2 + 1;
          crt_stdio_c_fputc_FUN_006007a0(uVar3 & 0xff,file);
        } while (iVar2 < g_WindowWidth);
      }
      character = character + 4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < g_WindowHeight);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pcx.c",0x84);
  return;
}


// Assembly code:
// 00548d20: PUSH EBX
//   Label: engine_pcx.c_saveScreenRaw16_FUN_00548d20
// 00548d21: PUSH ESI
// 00548d22: PUSH EDI
// 00548d23: PUSH EBP
// 00548d24: SUB ESP,0x60
// 00548d27: MOV ESI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 00548d2b: MOV EDI,ESP
// 00548d2d: MOV DL,0x2e
// 00548d2f: PUSH EDI
// 00548d30: MOV AL,byte ptr [ESI]
//   Label: LAB_00548d30
// 00548d32: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x70] (DATA)
// 00548d34: CMP AL,0x0
// 00548d36: JZ 0x00548d48
//   XREF to: 00548d48 (CONDITIONAL_JUMP)
// 00548d38: MOV AL,byte ptr [ESI + 0x1]
// 00548d3b: ADD ESI,0x2
// 00548d3e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6f] (WRITE)
// 00548d41: ADD EDI,0x2
// 00548d44: CMP AL,0x0
// 00548d46: JNZ 0x00548d30
//   XREF to: 00548d30 (CONDITIONAL_JUMP)
// 00548d48: POP EDI
//   Label: LAB_00548d48
// 00548d49: MOV ESI,ESP
// 00548d4b: MOV AL,byte ptr [ESI]
//   Label: LAB_00548d4b
//   XREF to: Stack[-0x70] (DATA)
// 00548d4d: CMP AL,DL
// 00548d4f: JZ 0x00548d63
//   XREF to: 00548d63 (CONDITIONAL_JUMP)
// 00548d51: CMP AL,0x0
// 00548d53: JZ 0x00548d61
//   XREF to: 00548d61 (CONDITIONAL_JUMP)
// 00548d55: INC ESI
// 00548d56: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x6f] (DATA)
// 00548d58: CMP AL,DL
// 00548d5a: JZ 0x00548d63
//   XREF to: 00548d63 (CONDITIONAL_JUMP)
// 00548d5c: INC ESI
// 00548d5d: CMP AL,0x0
// 00548d5f: JNZ 0x00548d4b
//   XREF to: 00548d4b (CONDITIONAL_JUMP)
// 00548d61: SUB ESI,ESI
//   Label: LAB_00548d61
// 00548d63: MOV EDI,ESI
//   Label: LAB_00548d63
// 00548d65: TEST ESI,ESI
// 00548d67: JZ 0x00548eca
//   XREF to: 00548eca (CONDITIONAL_JUMP)
// 00548d6d: MOV ESI,0x63eb1d
//   Label: LAB_00548d6d
//   XREF to: 0063eb1d (DATA)
// 00548d72: PUSH EDI
// 00548d73: MOV AL,byte ptr [ESI]
//   Label: LAB_00548d73
//   XREF to: 0063eb1d (READ)
//   XREF to: 0063eb1f (READ)
// 00548d75: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x6d] (DATA)
// 00548d77: CMP AL,0x0
// 00548d79: JZ 0x00548d8b
//   XREF to: 00548d8b (CONDITIONAL_JUMP)
// 00548d7b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063eb1e (READ)
//   XREF to: 0063eb20 (READ)
// 00548d7e: ADD ESI,0x2
// 00548d81: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6d] (WRITE)
// 00548d84: ADD EDI,0x2
// 00548d87: CMP AL,0x0
// 00548d89: JNZ 0x00548d73
//   XREF to: 00548d73 (CONDITIONAL_JUMP)
// 00548d8b: POP EDI
//   Label: LAB_00548d8b
// 00548d8c: PUSH 0x6c
// 00548d8e: PUSH 0x63eb22
//   XREF to: 0063eb22 (DATA)
// 00548d93: PUSH 0x63eb32
//   XREF to: 0063eb32 (DATA)
// 00548d98: PUSH 0x0
// 00548d9a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x70] (DATA)
// 00548d9e: PUSH EAX
// 00548d9f: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00548da4: ADD ESP,0x14
// 00548da7: MOV EDI,EAX
// 00548da9: TEST EAX,EAX
// 00548dab: JNZ 0x00548dd0
//   XREF to: 00548dd0 (CONDITIONAL_JUMP)
// 00548dad: MOV EBX,0x63eb35
//   XREF to: 0063eb35 (PARAM)
// 00548db2: MOV ESI,0x6d
// 00548db7: PUSH 0x63eb45
//   XREF to: 0063eb45 (DATA)
// 00548dbc: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00548dc2: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00548dc8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00548dcd: ADD ESP,0x4
// 00548dd0: XOR EBP,EBP
//   Label: LAB_00548dd0
// 00548dd2: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00548dd7: MOV dword ptr [ESP + 0x5c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00548ddb: TEST EAX,EAX
// 00548ddd: JLE 0x00548eaf
//   XREF to: 00548eaf (CONDITIONAL_JUMP)
// 00548de3: MOV dword ptr [ESP + 0x58],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 00548de7: MOV ESI,dword ptr [ESP + 0x58]
//   Label: LAB_00548de7
//   XREF to: Stack[-0x18] (READ)
// 00548deb: MOV EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00548df1: XOR EBX,EBX
// 00548df3: MOV ESI,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00548df9: TEST EBP,EBP
// 00548dfb: JLE 0x00548e8d
//   XREF to: 00548e8d (CONDITIONAL_JUMP)
// 00548e01: XOR EAX,EAX
//   Label: LAB_00548e01
// 00548e03: MOV AX,word ptr [ESI]
// 00548e06: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00548e0c: MOV EDX,EAX
// 00548e0e: SHR EDX,CL
// 00548e10: IMUL EDX,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 00548e17: AND EDX,0xff
// 00548e1d: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00548e23: MOV dword ptr [ESP + 0x50],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00548e27: MOV EDX,EAX
// 00548e29: MOV EBP,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 00548e2f: SHR EDX,CL
// 00548e31: IMUL EDX,EBP
// 00548e34: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00548e3a: AND EDX,0xff
// 00548e40: MOV EBP,EAX
// 00548e42: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00548e46: SHR EBP,CL
// 00548e48: IMUL EBP,dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 00548e4f: PUSH EDI
// 00548e50: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x20] (READ)
// 00548e54: PUSH ECX
// 00548e55: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00548e5a: ADD ESP,0x8
// 00548e5d: PUSH EDI
// 00548e5e: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x1c] (READ)
// 00548e62: PUSH EAX
// 00548e63: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00548e68: ADD ESP,0x8
// 00548e6b: PUSH EDI
// 00548e6c: AND EBP,0xff
// 00548e72: PUSH EBP
// 00548e73: ADD ESI,0x2
// 00548e76: INC EBX
// 00548e77: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00548e7c: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00548e82: ADD ESP,0x8
// 00548e85: CMP EBX,EDX
// 00548e87: JL 0x00548e01
//   XREF to: 00548e01 (CONDITIONAL_JUMP)
// 00548e8d: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_00548e8d
//   XREF to: Stack[-0x18] (READ)
// 00548e91: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 00548e95: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00548e9b: ADD EDX,0x4
// 00548e9e: INC ECX
// 00548e9f: MOV dword ptr [ESP + 0x58],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00548ea3: MOV dword ptr [ESP + 0x5c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00548ea7: CMP ECX,EBX
// 00548ea9: JL 0x00548de7
//   XREF to: 00548de7 (CONDITIONAL_JUMP)
// 00548eaf: PUSH 0x84
//   Label: LAB_00548eaf
// 00548eb4: PUSH 0x63eb6d
//   XREF to: 0063eb6d (DATA)
// 00548eb9: PUSH EDI
// 00548eba: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00548ebf: ADD ESP,0xc
// 00548ec2: ADD ESP,0x60
// 00548ec5: POP EBP
// 00548ec6: POP EDI
// 00548ec7: POP ESI
// 00548ec8: POP EBX
// 00548ec9: RET
// 00548eca: MOV EDX,0x63eaee
//   Label: LAB_00548eca
//   XREF to: 0063eaee (PARAM)
// 00548ecf: MOV ECX,0x67
// 00548ed4: PUSH 0x63eafe
//   XREF to: 0063eafe (DATA)
// 00548ed9: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00548edf: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00548ee5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00548eea: ADD ESP,0x4
// 00548eed: JMP 0x00548d6d
//   XREF to: 00548d6d (UNCONDITIONAL_JUMP)
