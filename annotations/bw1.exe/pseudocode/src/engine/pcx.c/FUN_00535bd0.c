// Name: FUN_00535bd0
// Address: 00535bd0
// Address Range: [[00535bd0, 00535d77]]
// Convention: unknown
// Signature: void FUN_00535bd0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00535bd0(char *param_1)

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
    if (*pcVar5 == '.') goto LAB_00535c13;
    if (*pcVar5 == '\0') break;
    pcVar7 = pcVar5 + 1;
    if (*pcVar7 == '.') goto LAB_00535c13;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00535c13:
  if (pcVar7 == (char *)0x0) {
    _DAT_01d1d400 = "..\\engine\\pcx.c";
    _DAT_01d1d404 = 0x98;
    FUN_005030e0("saveScreenRaw32 - No ext found");
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
  iVar2 = FUN_005c157c(local_6c,"wb");
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\engine\\pcx.c";
    _DAT_01d1d404 = 0x9e;
    FUN_005030e0("saveScreenRaw32 - Unable to open output");
  }
  local_14 = 0;
  if (0 < DAT_0061b49c) {
    local_18 = 0;
    do {
      iVar6 = 0;
      puVar3 = *(uint **)(&DAT_01c4354c + local_18);
      if (0 < DAT_0061b498) {
        do {
          uVar4 = (*puVar3 >> (DAT_01c4e9e0 & 0x1f)) * _DAT_01c4e9e4;
          local_1c = (*puVar3 >> (DAT_01c4e9ec & 0x1f)) * _DAT_01c4e9f0 & 0xff;
          FUN_005c2f00(_DAT_01c4e9d8 * (*puVar3 >> (DAT_01c4e9d4 & 0x1f)) & 0xff,iVar2);
          FUN_005c2f00(uVar4 & 0xff,iVar2);
          puVar3 = puVar3 + 1;
          iVar6 = iVar6 + 1;
          FUN_005c2f00(local_1c,iVar2);
        } while (iVar6 < DAT_0061b498);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_0061b49c);
  }
  FUN_005c0d10(iVar2);
  return;
}
