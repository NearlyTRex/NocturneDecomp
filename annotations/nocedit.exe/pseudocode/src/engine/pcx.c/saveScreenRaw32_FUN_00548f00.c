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
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char local_6c [80];
  uint local_1c;
  int local_18;
  int local_14;
  
  pcVar6 = local_6c;
  do {
    cVar1 = *filename;
    *pcVar6 = cVar1;
    pcVar4 = local_6c;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
    pcVar4 = local_6c;
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
                   (local_6c,(char *)0x0,"wb","..\\engine\\pcx.c",0x9d);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0x9e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw32 - Unable to open output");
  }
  local_14 = 0;
  if (0 < g_WindowHeight) {
    local_18 = 0;
    do {
      iVar5 = 0;
      puVar2 = *(uint **)((int)g_ScreenBufferArray + local_18);
      if (0 < g_WindowWidth) {
        do {
          uVar3 = (*puVar2 >> ((byte)g_GreenBitPosition & 0x1f)) * g_GreenScaleFactor;
          local_1c = (*puVar2 >> ((byte)g_BlueBitPosition & 0x1f)) * g_BlueScaleFactor & 0xff;
          crt_stdio_c_fputc_FUN_006007a0
                    (g_RedScaleFactor * (*puVar2 >> ((byte)g_RedBitPosition & 0x1f)) & 0xff,file);
          crt_stdio_c_fputc_FUN_006007a0(uVar3 & 0xff,file);
          puVar2 = puVar2 + 1;
          iVar5 = iVar5 + 1;
          crt_stdio_c_fputc_FUN_006007a0(local_1c,file);
        } while (iVar5 < g_WindowWidth);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < g_WindowHeight);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pcx.c",0xb5);
  return;
}
