// Name: engine_pcx.c_saveScreenRaw32_FUN_00548f00
// Address: 00548f00
// Address Range: [[00548f00, 005490bd]]
// Convention: __cdecl
// Signature: void engine_pcx.c_saveScreenRaw32_FUN_00548f00(char * filename)

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
