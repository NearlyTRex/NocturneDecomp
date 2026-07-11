// Name: FUN_004f2620
// Address: 004f2620
// Address Range: [[004f2620, 004f27de]]
// Convention: unknown
// Signature: void FUN_004f2620(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f2620(char *param_1)

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
    cVar1 = *param_1;
    *pcVar8 = cVar1;
    pcVar6 = local_70;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar6 = local_70;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar6;
    if (*pcVar6 == '.') goto LAB_004f2663;
    if (*pcVar6 == '\0') break;
    pcVar8 = pcVar6 + 1;
    if (*pcVar8 == '.') goto LAB_004f2663;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_004f2663:
  if (pcVar8 == (char *)0x0) {
    _DAT_01cc4800 = "..\\engine\\pcx.c";
    _DAT_01cc4804 = 0x68;
    FUN_004c8440("saveScreenRaw16 - No ext found");
  }
  pcVar6 = &DAT_0058cf14;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  iVar3 = FUN_0056568c(local_70,&DAT_0058cf19);
  if (iVar3 == 0) {
    _DAT_01cc4800 = "..\\engine\\pcx.c";
    _DAT_01cc4804 = 0x6e;
    FUN_004c8440("saveScreenRaw16 - Unable to open output");
  }
  local_14 = 0;
  if (0 < DAT_005b7620) {
    local_18 = 0;
    do {
      iVar4 = 0;
      puVar7 = *(ushort **)(&DAT_01bd2fa0 + local_18);
      if (0 < DAT_005b761c) {
        do {
          uVar2 = *puVar7;
          local_20 = (uint)(uVar2 >> (DAT_01c00624 & 0x1f)) * _DAT_01c00628 & 0xff;
          local_1c = (uint)(uVar2 >> (DAT_01c00630 & 0x1f)) * _DAT_01c00634 & 0xff;
          uVar5 = (uint)(uVar2 >> (DAT_01c0063c & 0x1f)) * _DAT_01c00640;
          FUN_00566cc0(local_20,iVar3);
          FUN_00566cc0(local_1c,iVar3);
          puVar7 = puVar7 + 1;
          iVar4 = iVar4 + 1;
          FUN_00566cc0(uVar5 & 0xff,iVar3);
        } while (iVar4 < DAT_005b761c);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_005b7620);
  }
  FUN_00563380(iVar3);
  return;
}
