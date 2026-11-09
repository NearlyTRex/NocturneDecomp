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
  int iVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char local_6c [80];
  uint local_1c;
  int local_18;
  int local_14;
  
  pcVar7 = local_6c;
  do {
    cVar1 = *filename;
    *pcVar7 = cVar1;
    pcVar5 = local_6c;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar5 = local_6c;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar5;
    if (*pcVar5 == '.') goto LAB_0050d8f3;
    if (*pcVar5 == '\0') break;
    pcVar7 = pcVar5 + 1;
    if (*pcVar7 == '.') goto LAB_0050d8f3;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_0050d8f3:
  if (pcVar7 == (char *)0x0) {
    _DAT_01d71de0 = "..\\engine\\pcx.c";
    _DAT_01d71de4 = 0x98;
    core_main_c_FUN_004e4330("saveScreenRaw32 - No ext found");
  }
  pcVar5 = &DAT_005cba50;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar2 = _fopen(local_6c,&DAT_005cba55);
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\engine\\pcx.c";
    _DAT_01d71de4 = 0x9e;
    core_main_c_FUN_004e4330("saveScreenRaw32 - Unable to open output");
  }
  local_14 = 0;
  if (0 < DAT_005fba1c) {
    local_18 = 0;
    do {
      iVar6 = 0;
      puVar3 = *(uint **)(&DAT_01c5faec + local_18);
      if (0 < DAT_005fba18) {
        do {
          uVar4 = (*puVar3 >> (DAT_01c6af80 & 0x1f)) * _DAT_01c6af84;
          local_1c = (*puVar3 >> (DAT_01c6af8c & 0x1f)) * _DAT_01c6af90 & 0xff;
          _fputc(_DAT_01c6af78 * (*puVar3 >> (DAT_01c6af74 & 0x1f)) & 0xff,iVar2);
          _fputc(uVar4 & 0xff,iVar2);
          puVar3 = puVar3 + 1;
          iVar6 = iVar6 + 1;
          _fputc(local_1c,iVar2);
        } while (iVar6 < DAT_005fba18);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_005fba1c);
  }
  _fclose(iVar2);
  return;
}
