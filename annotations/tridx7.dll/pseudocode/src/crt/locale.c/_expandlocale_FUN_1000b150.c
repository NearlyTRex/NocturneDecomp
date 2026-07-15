// Name: crt_locale.c__expandlocale_FUN_1000b150
// Address: 1000b150
// Address Range: [[1000b150, 1000b319]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c__expandlocale_FUN_1000b150(char *locale,char *cat,LC_ID *lc_id,UINT *code_page)

#include "nocturne.h"

int __cdecl _expandlocale(char *locale,char *cat,LC_ID *lc_id,UINT *code_page)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  byte bVar12;
  char local_88 [136];
  
  bVar12 = 0;
  if (locale == (char *)0x0) {
    return 0;
  }
  if ((*locale == 'C') && (locale[1] == '\0')) {
    *cat = 'C';
    cat[1] = '\0';
    if (lc_id != (LC_ID *)0x0) {
      lc_id->wLanguage = 0;
      lc_id->wCountry = 0;
      lc_id->wCodePage = 0;
    }
    if (code_page != (UINT *)0x0) {
      *code_page = 0;
      return (int)cat;
    }
  }
  else {
    pbVar4 = &DAT_10017870;
    pbVar6 = (byte *)locale;
    do {
      bVar2 = *pbVar4;
      bVar11 = bVar2 < *pbVar6;
      if (bVar2 != *pbVar6) {
LAB_1000b1e2:
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_1000b1e7;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar11 = bVar2 < pbVar6[1];
      if (bVar2 != pbVar6[1]) goto LAB_1000b1e2;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_1000b1e7:
    if (iVar5 != 0) {
      pbVar4 = &DAT_100177e8;
      pbVar6 = (byte *)locale;
      do {
        bVar2 = *pbVar4;
        bVar11 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_1000b216:
          iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_1000b21b;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar11 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_1000b216;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_1000b21b:
      if (iVar5 != 0) {
        iVar5 = _lc_strtolc(local_88,locale);
        if (iVar5 != 0) {
          return 0;
        }
        iVar5 = __get_qualified_locale(local_88,&DAT_100177d8,local_88);
        if (iVar5 == 0) {
          return 0;
        }
        DAT_100177e0 = (uint)DAT_100177dc;
        _setlocale_catcopy(&DAT_10017870,local_88);
        if (*locale == '\0') {
          locale = &DAT_10017870;
        }
        uVar7 = 0xffffffff;
        do {
          pcVar9 = locale;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar9 = locale + (uint)bVar12 * -2 + 1;
          cVar1 = *locale;
          locale = pcVar9;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar9 = pcVar9 + -uVar7;
        pcVar10 = &DAT_100177e8;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(uint *)pcVar10 = *(uint *)pcVar9;
          pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
          pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
          pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
        }
      }
    }
    if (lc_id != (LC_ID *)0x0) {
      uVar3 = DAT_100177d8._2_2_;
      lc_id->wLanguage = (ushort)DAT_100177d8;
      lc_id->wCountry = uVar3;
      lc_id->wCodePage = DAT_100177dc;
    }
    if (code_page != (UINT *)0x0) {
      *code_page = DAT_100177e0;
    }
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_10017870;
    do {
      pcVar10 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar10 + -uVar7;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(uint *)cat = *(uint *)pcVar9;
      pcVar9 = pcVar9 + (uint)bVar12 * -8 + 4;
      cat = cat + (uint)bVar12 * -8 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *cat = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
      cat = cat + (uint)bVar12 * -2 + 1;
    }
    cat = &DAT_10017870;
  }
  return (int)cat;
}
