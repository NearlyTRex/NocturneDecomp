// Name: engine_pcx.c_saveScreenRaw16_FUN_004f2620
// Address: 004f2620
// Address Range: [[004f2620, 004f27de]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_saveScreenRaw16_FUN_004f2620(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pcx_c_saveScreenRaw16_FUN_004f2620(char *filename)

{
  char cVar1;
  ushort uVar2;
  _FILE *file;
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
    if (*pcVar5 == '.') goto LAB_004f2663;
    if (*pcVar5 == '\0') break;
    pcVar7 = pcVar5 + 1;
    if (*pcVar7 == '.') goto LAB_004f2663;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_004f2663:
  if (pcVar7 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 104;
    core_main_c_displayErrorAndQuit_FUN_004c8440("saveScreenRaw16 - No ext found");
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
  file = _fopen(local_70,"wb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 110;
    core_main_c_displayErrorAndQuit_FUN_004c8440("saveScreenRaw16 - Unable to open output");
  }
  local_14 = 0;
  if (0 < g_WindowHeight) {
    local_18 = 0;
    do {
      iVar3 = 0;
      puVar6 = *(ushort **)(&DAT_01bd2fa0 + local_18);
      if (0 < g_WindowWidth) {
        do {
          uVar2 = *puVar6;
          local_20 = (uint)(uVar2 >> (DAT_01c00624 & 0x1f)) * _DAT_01c00628 & 0xff;
          local_1c = (uint)(uVar2 >> (DAT_01c00630 & 0x1f)) * _DAT_01c00634 & 0xff;
          uVar4 = (uint)(uVar2 >> (DAT_01c0063c & 0x1f)) * _DAT_01c00640;
          _fputc(local_20,file);
          _fputc(local_1c,file);
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + 1;
          _fputc(uVar4 & 0xff,file);
        } while (iVar3 < g_WindowWidth);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < g_WindowHeight);
  }
  _fclose(file);
  return;
}
