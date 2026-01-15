// Name: engine_pcx.c_saveScreenRaw16_FUN_00548d20
// Address: 00548d20
// Address Range: [[00548d20, 00548ef1]]
// Convention: __cdecl
// Signature: void engine_pcx.c_saveScreenRaw16_FUN_00548d20(char * filename)

#include "nocturne.h"

void __cdecl engine_pcx_c_saveScreenRaw16_FUN_00548d20(char *filename)

{
  char cVar1;
  ushort uVar2;
  FILE *file;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  ushort *puVar6;
  char *pcVar7;
  char local_70 [80];
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  pcVar7 = local_70;
  do {
    cVar1 = *filename;
    *pcVar7 = cVar1;
    pcVar5 = local_70;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar5 = local_70;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar5;
    if (*pcVar5 == '.') goto LAB_00548d63;
    if (*pcVar5 == '\0') break;
    pcVar7 = pcVar5 + 1;
    if (*pcVar7 == '.') goto LAB_00548d63;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00548d63:
  if (pcVar7 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw16 - No ext found");
  }
  pcVar5 = ".RAW";
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (local_70,(char *)0x0,"wb","..\\engine\\pcx.c",0x6c);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0x6d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw16 - Unable to open output");
  }
  local_14 = 0;
  if (0 < g_WindowHeight) {
    local_18 = 0;
    do {
      iVar3 = 0;
      puVar6 = *(ushort **)((int)g_ScreenBufferArray + local_18);
      if (0 < g_WindowWidth) {
        do {
          uVar2 = *puVar6;
          local_20 = (uint)(uVar2 >> ((byte)g_RedBitPosition & 0x1f)) * g_RedScaleFactor & 0xff;
          local_1c = (uint)(uVar2 >> ((byte)g_GreenBitPosition & 0x1f)) * g_GreenScaleFactor & 0xff;
          uVar4 = (uint)(uVar2 >> ((byte)g_BlueBitPosition & 0x1f)) * g_BlueScaleFactor;
          crt_stdio_c_fputc_FUN_006007a0(local_20,file);
          crt_stdio_c_fputc_FUN_006007a0(local_1c,file);
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + 1;
          crt_stdio_c_fputc_FUN_006007a0(uVar4 & 0xff,file);
        } while (iVar3 < g_WindowWidth);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < g_WindowHeight);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pcx.c",0x84);
  return;
}
