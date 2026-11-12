// Name: engine_pcx.c_saveScreenRaw32_FUN_0050d8b0
// Address: 0050d8b0
// Address Range: [[0050d8b0, 0050da57]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_saveScreenRaw32_FUN_0050d8b0(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pcx_c_saveScreenRaw32_FUN_0050d8b0(char *filename)

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
    if (*pcVar4 == '.') goto LAB_0050d8f3;
    if (*pcVar4 == '\0') break;
    pcVar6 = pcVar4 + 1;
    if (*pcVar6 == '.') goto LAB_0050d8f3;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_0050d8f3:
  if (pcVar6 == (char *)0x0) {
    _DAT_01d71de0 = "..\\engine\\pcx.c";
    _DAT_01d71de4 = 0x98;
    core_main_c_FUN_004e4330("saveScreenRaw32 - No ext found");
  }
  pcVar4 = &DAT_005cba50;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  file = _fopen(local_6c,&DAT_005cba55);
  if (file == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\engine\\pcx.c";
    _DAT_01d71de4 = 0x9e;
    core_main_c_FUN_004e4330("saveScreenRaw32 - Unable to open output");
  }
  local_14 = 0;
  if (0 < DAT_005fba1c) {
    local_18 = 0;
    do {
      iVar5 = 0;
      puVar2 = *(uint **)(&DAT_01c5faec + local_18);
      if (0 < DAT_005fba18) {
        do {
          uVar3 = (*puVar2 >> (DAT_01c6af80 & 0x1f)) * _DAT_01c6af84;
          local_1c = (*puVar2 >> (DAT_01c6af8c & 0x1f)) * _DAT_01c6af90 & 0xff;
          _fputc(_DAT_01c6af78 * (*puVar2 >> (DAT_01c6af74 & 0x1f)) & 0xff,file);
          _fputc(uVar3 & 0xff,file);
          puVar2 = puVar2 + 1;
          iVar5 = iVar5 + 1;
          _fputc(local_1c,file);
        } while (iVar5 < DAT_005fba18);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_005fba1c);
  }
  _fclose(file);
  return;
}
