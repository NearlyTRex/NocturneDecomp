// Name: crt_locale.c_setlocale_set_cat_FUN_1000aee0
// Address: 1000aee0
// Address Range: [[1000aee0, 1000b05a]]
// Convention: __cdecl
// Signature: char * __cdecl crt_locale_c_setlocale_set_cat_FUN_1000aee0(int category,char *locale)

#include "nocturne.h"

char * __cdecl setlocale_set_cat(int category,char *locale)

{
  char cVar1;
  byte *block;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  LC_ID local_a0;
  UINT local_98;
  uint local_94;
  UINT local_90;
  uint local_8c;
  ushort local_88;
  char local_84 [132];
  
  bVar8 = 0;
  iVar2 = _expandlocale(locale,local_84,&local_a0,&local_98);
  if (iVar2 == 0) {
    return (char *)0x0;
  }
  uVar4 = 0xffffffff;
  pcVar3 = local_84;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)malloc(~uVar4);
  if (pcVar3 == (char *)0x0) {
    return (char *)0x0;
  }
  block = (byte *)(&DAT_10017794)[category * 3];
  local_94 = *(uint *)(&DAT_10017758 + category * 4);
  iVar2 = category * 6;
  local_8c = *(uint *)(&DAT_10017940 + iVar2);
  local_88 = *(ushort *)(&DAT_10017944 + iVar2);
  local_90 = DAT_10017770;
  uVar4 = 0xffffffff;
  pcVar6 = local_84;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = pcVar3;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)pcVar7 = *(uint *)pcVar6;
    pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  }
  (&DAT_10017794)[category * 3] = pcVar3;
  *(uint *)(&DAT_10017758 + category * 4) = local_a0._0_4_ & 0xffff;
  *(uint *)(&DAT_10017940 + iVar2) = local_a0._0_4_;
  *(ushort *)(&DAT_10017944 + iVar2) = local_a0.wCodePage;
  if (category == 2) {
    DAT_10017770 = local_98;
  }
  iVar2 = (*(code *)(&PTR_LAB_10017798)[category * 3])();
  if (iVar2 != 0) {
    (&DAT_10017794)[category * 3] = block;
    free(pcVar3);
    *(uint *)(&DAT_10017758 + category * 4) = local_94;
    DAT_10017770 = local_90;
    return (char *)0x0;
  }
  if (block != &DAT_10017788) {
    free(block);
  }
  return (char *)(&DAT_10017794)[category * 3];
}
