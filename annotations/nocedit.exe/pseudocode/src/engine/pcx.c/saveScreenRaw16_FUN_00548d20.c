// Name: engine_pcx.c_saveScreenRaw16_FUN_00548d20
// Address: 00548d20
// Address Range: [[00548d20, 00548ef1]]
// Convention: __cdecl
// Signature: void engine_pcx.c_saveScreenRaw16_FUN_00548d20(char * filename)

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
