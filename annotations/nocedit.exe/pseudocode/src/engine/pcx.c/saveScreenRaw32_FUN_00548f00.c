// Name: engine_pcx.c_saveScreenRaw32_FUN_00548f00
// Address: 00548f00
// Address Range: [[00548f00, 005490bd]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_saveScreenRaw32_FUN_00548f00(char *filename)

#include "nocturne.h"

void __cdecl engine_pcx_c_saveScreenRaw32_FUN_00548f00(char *filename)

{
  char cVar2;
  _FILE *file;
  uint uVar4;
  uint *puVar2;
  uint uVar3;
  char *pcVar5;
  char *pcVar7;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char local_6c [80];
  uint local_1c;
  int local_18;
  int local_14;
  char cVar1;
  
  pcVar6 = local_6c;
  do {
    cVar1 = *filename;
    *pcVar6 = cVar1;
    pcVar5 = local_6c;
    if (cVar1 == '\0') break;
    cVar2 = filename[1];
    filename = filename + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
    pcVar5 = local_6c;
  } while (cVar2 != '\0');
  do {
    pcVar7 = pcVar5;
    if (*pcVar5 == '.') goto LAB_00548f43;
    if (*pcVar5 == '\0') break;
    pcVar7 = pcVar5 + 1;
    if (*pcVar7 == '.') goto LAB_00548f43;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00548f43:
  if (pcVar7 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 152;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveScreenRaw32 - No ext found");
  }
  pcVar4 = ".RAW";
  do {
    cVar2 = *pcVar4;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (local_6c,(char *)0x0,"wb","..\\engine\\pcx.c",157);
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 158;
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
          uVar3 = (*puVar2 >> (g_GreenBitPosition.bytes[0] & 0x1f)) * g_GreenScaleFactor;
          uVar4 = (*puVar2 >> (g_BlueBitPosition.bytes[0] & 0x1f)) * g_BlueScaleFactor;
          _fputc(g_RedScaleFactor * (*puVar2 >> (g_RedBitPosition.bytes[0] & 0x1f)) & 0xff,file)
          ;
          _fputc(uVar3 & 0xff,file);
          puVar2 = puVar2 + 1;
          iVar5 = iVar5 + 1;
          _fputc(uVar4 & 0xff,file);
        } while (iVar5 < g_WindowWidth);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < g_WindowHeight);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pcx.c",181);
  return;
}
