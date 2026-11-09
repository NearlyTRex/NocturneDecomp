// Name: engine_pcx.c_saveScreenRaw16_FUN_005146c0
// Address: 005146c0
// Address Range: [[005146c0, 0051487e]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_saveScreenRaw16_FUN_005146c0(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pcx_c_saveScreenRaw16_FUN_005146c0(char *filename)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  ushort *puVar7;
  char *pcVar8;
  char local_70 [80];
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  pcVar8 = local_70;
  do {
    cVar1 = *filename;
    *pcVar8 = cVar1;
    pcVar6 = local_70;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar6 = local_70;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar6;
    if (*pcVar6 == '.') goto LAB_00514703;
    if (*pcVar6 == '\0') break;
    pcVar8 = pcVar6 + 1;
    if (*pcVar8 == '.') goto LAB_00514703;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_00514703:
  if (pcVar8 == (char *)0x0) {
    _DAT_01d046a0 = "..\\engine\\pcx.c";
    _DAT_01d046a4 = 0x67;
    core_main_c_FUN_004e4500("saveScreenRaw16 - No ext found");
  }
  pcVar6 = &DAT_005e191e;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  iVar3 = _fopen(local_70,&DAT_005e1923);
  if (iVar3 == 0) {
    _DAT_01d046a0 = "..\\engine\\pcx.c";
    _DAT_01d046a4 = 0x6d;
    core_main_c_FUN_004e4500("saveScreenRaw16 - Unable to open output");
  }
  local_14 = 0;
  if (0 < DAT_006141bc) {
    local_18 = 0;
    do {
      iVar4 = 0;
      puVar7 = *(ushort **)(&DAT_01c2a38c + local_18);
      if (0 < DAT_006141b8) {
        do {
          uVar2 = *puVar7;
          local_20 = (uint)(uVar2 >> (DAT_01c35814 & 0x1f)) * _DAT_01c35818 & 0xff;
          local_1c = (uint)(uVar2 >> (DAT_01c35820 & 0x1f)) * _DAT_01c35824 & 0xff;
          uVar5 = (uint)(uVar2 >> (DAT_01c3582c & 0x1f)) * _DAT_01c35830;
          _fputc(local_20,iVar3);
          _fputc(local_1c,iVar3);
          puVar7 = puVar7 + 1;
          iVar4 = iVar4 + 1;
          _fputc(uVar5 & 0xff,iVar3);
        } while (iVar4 < DAT_006141b8);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_006141bc);
  }
  _fclose(iVar3);
  return;
}
