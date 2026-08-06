// Name: engine_pcx.c_saveScreenRaw32_FUN_004f27e0
// Address: 004f27e0
// Address Range: [[004f27e0, 004f2987]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_saveScreenRaw32_FUN_004f27e0(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pcx_c_saveScreenRaw32_FUN_004f27e0(char *filename)

{
  char cVar1;
  _FILE *file;
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
    if (*pcVar4 == '.') goto LAB_004f2823;
    if (*pcVar4 == '\0') break;
    pcVar6 = pcVar4 + 1;
    if (*pcVar6 == '.') goto LAB_004f2823;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004f2823:
  if (pcVar6 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 153;
    core_main_c_displayErrorAndQuit_FUN_004c8440("saveScreenRaw32 - No ext found");
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
  file = _fopen(local_6c,"wb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 159;
    core_main_c_displayErrorAndQuit_FUN_004c8440("saveScreenRaw32 - Unable to open output");
  }
  local_14 = 0;
  if (0 < g_WindowHeight) {
    local_18 = 0;
    do {
      iVar5 = 0;
      puVar2 = *(uint **)(&DAT_01bd2fa0 + local_18);
      if (0 < g_WindowWidth) {
        do {
          uVar3 = (*puVar2 >> (DAT_01c00630 & 0x1f)) * _DAT_01c00634;
          local_1c = (*puVar2 >> (DAT_01c0063c & 0x1f)) * _DAT_01c00640 & 0xff;
          _fputc(_DAT_01c00628 * (*puVar2 >> (DAT_01c00624 & 0x1f)) & 0xff,file);
          _fputc(uVar3 & 0xff,file);
          puVar2 = puVar2 + 1;
          iVar5 = iVar5 + 1;
          _fputc(local_1c,file);
        } while (iVar5 < g_WindowWidth);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < g_WindowHeight);
  }
  _fclose(file);
  return;
}
