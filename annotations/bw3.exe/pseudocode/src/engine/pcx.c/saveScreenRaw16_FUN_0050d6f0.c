// Name: engine_pcx.c_saveScreenRaw16_FUN_0050d6f0
// Address: 0050d6f0
// Address Range: [[0050d6f0, 0050d8ae]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_saveScreenRaw16_FUN_0050d6f0(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pcx_c_saveScreenRaw16_FUN_0050d6f0(char *filename)

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
    if (*pcVar5 == '.') goto LAB_0050d733;
    if (*pcVar5 == '\0') break;
    pcVar7 = pcVar5 + 1;
    if (*pcVar7 == '.') goto LAB_0050d733;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_0050d733:
  if (pcVar7 == (char *)0x0) {
    _DAT_01d71de0 = "..\\engine\\pcx.c";
    _DAT_01d71de4 = 0x67;
    core_main_c_FUN_004e4330("saveScreenRaw16 - No ext found");
  }
  pcVar5 = &DAT_005cb9e1;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  file = _fopen(local_70,&DAT_005cb9e6);
  if (file == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\engine\\pcx.c";
    _DAT_01d71de4 = 0x6d;
    core_main_c_FUN_004e4330("saveScreenRaw16 - Unable to open output");
  }
  local_14 = 0;
  if (0 < DAT_005fba1c) {
    local_18 = 0;
    do {
      iVar3 = 0;
      puVar6 = *(ushort **)(&DAT_01c5faec + local_18);
      if (0 < DAT_005fba18) {
        do {
          uVar2 = *puVar6;
          local_20 = (uint)(uVar2 >> (DAT_01c6af74 & 0x1f)) * _DAT_01c6af78 & 0xff;
          local_1c = (uint)(uVar2 >> (DAT_01c6af80 & 0x1f)) * _DAT_01c6af84 & 0xff;
          uVar4 = (uint)(uVar2 >> (DAT_01c6af8c & 0x1f)) * _DAT_01c6af90;
          _fputc(local_20,file);
          _fputc(local_1c,file);
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + 1;
          _fputc(uVar4 & 0xff,file);
        } while (iVar3 < DAT_005fba18);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_005fba1c);
  }
  _fclose(file);
  return;
}
