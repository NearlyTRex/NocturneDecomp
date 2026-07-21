// Name: engine_pcx.c_saveScreenRaw32_FUN_004f27e0
// Address: 004f27e0
// Address Range: [[004f27e0, 004f2987]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_saveScreenRaw32_FUN_004f27e0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pcx_c_saveScreenRaw32_FUN_004f27e0(char *param_1)

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
    cVar1 = *param_1;
    *pcVar7 = cVar1;
    pcVar5 = local_6c;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar5 = local_6c;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar5;
    if (*pcVar5 == '.') goto LAB_004f2823;
    if (*pcVar5 == '\0') break;
    pcVar7 = pcVar5 + 1;
    if (*pcVar7 == '.') goto LAB_004f2823;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_004f2823:
  if (pcVar7 == (char *)0x0) {
    _DAT_01cc4800 = "..\\engine\\pcx.c";
    _DAT_01cc4804 = 0x99;
    FUN_004c8440("saveScreenRaw32 - No ext found");
  }
  pcVar5 = &DAT_0058cf83;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar2 = _fopen(local_6c,&DAT_0058cf88);
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\engine\\pcx.c";
    _DAT_01cc4804 = 0x9f;
    FUN_004c8440("saveScreenRaw32 - Unable to open output");
  }
  local_14 = 0;
  if (0 < DAT_005b7620) {
    local_18 = 0;
    do {
      iVar6 = 0;
      puVar3 = *(uint **)(&DAT_01bd2fa0 + local_18);
      if (0 < DAT_005b761c) {
        do {
          uVar4 = (*puVar3 >> (DAT_01c00630 & 0x1f)) * _DAT_01c00634;
          local_1c = (*puVar3 >> (DAT_01c0063c & 0x1f)) * _DAT_01c00640 & 0xff;
          _fputc(_DAT_01c00628 * (*puVar3 >> (DAT_01c00624 & 0x1f)) & 0xff,iVar2);
          _fputc(uVar4 & 0xff,iVar2);
          puVar3 = puVar3 + 1;
          iVar6 = iVar6 + 1;
          _fputc(local_1c,iVar2);
        } while (iVar6 < DAT_005b761c);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_005b7620);
  }
  _fclose(iVar2);
  return;
}
