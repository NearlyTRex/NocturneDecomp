// Name: FUN_1000aee0
// Address: 1000aee0
// Address Range: [[1000aee0, 1000b05a]]
// Convention: unknown
// Signature: undefined4 FUN_1000aee0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_1000aee0(int param_1,uint param_2)

{
  char cVar1;
  byte *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  uint local_a0;
  ushort local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  ushort local_88;
  char local_84 [132];
  
  bVar9 = 0;
  iVar3 = FUN_1000b150(param_2,local_84,&local_a0,&local_98,param_1);
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar4 = local_84;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar4 = (char *)FUN_10008830(~uVar5);
  if (pcVar4 == (char *)0x0) {
    return 0;
  }
  puVar2 = (byte *)(&DAT_10017794)[param_1 * 3];
  local_94 = *(uint *)(&DAT_10017758 + param_1 * 4);
  iVar3 = param_1 * 6;
  local_8c = *(uint *)(&DAT_10017940 + iVar3);
  local_88 = *(ushort *)(&DAT_10017944 + iVar3);
  local_90 = DAT_10017770;
  uVar5 = 0xffffffff;
  pcVar7 = local_84;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + (uint)bVar9 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = pcVar4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(uint *)pcVar8 = *(uint *)pcVar7;
    pcVar7 = pcVar7 + ((uint)bVar9 * -2 + 1) * 4;
    pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
    pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
  }
  (&DAT_10017794)[param_1 * 3] = pcVar4;
  *(uint *)(&DAT_10017758 + param_1 * 4) = local_a0 & 0xffff;
  *(uint *)(&DAT_10017940 + iVar3) = local_a0;
  *(ushort *)(&DAT_10017944 + iVar3) = local_9c;
  if (param_1 == 2) {
    DAT_10017770 = local_98;
  }
  iVar3 = (*(code *)(&PTR_LAB_10017798)[param_1 * 3])();
  if (iVar3 != 0) {
    (&DAT_10017794)[param_1 * 3] = puVar2;
    FUN_10005b30(pcVar4);
    *(uint *)(&DAT_10017758 + param_1 * 4) = local_94;
    DAT_10017770 = local_90;
    return 0;
  }
  if (puVar2 != &DAT_10017788) {
    FUN_10005b30(puVar2);
  }
  return (&DAT_10017794)[param_1 * 3];
}
