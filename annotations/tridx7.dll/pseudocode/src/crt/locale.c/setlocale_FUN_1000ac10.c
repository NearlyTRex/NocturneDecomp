// Name: crt_locale.c_setlocale_FUN_1000ac10
// Address: 1000ac10
// Address Range: [[1000ac10, 1000aed2]]
// Convention: __cdecl
// Signature: char * __cdecl crt_locale_c_setlocale_FUN_1000ac10(int category,char *locale)

#include "nocturne.h"

char * __cdecl setlocale(int category,char *locale)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  size_t sVar10;
  void **ppvVar11;
  byte **ppuVar12;
  bool bVar13;
  byte bVar14;
  int iStack_8c;
  int iStack_88;
  byte abStack_84 [132];
  
  bVar14 = 0;
  if ((category < 0) || (5 < category)) {
    return (char *)0x0;
  }
  _lock(0x13);
  DAT_10240854 = DAT_10240854 + 1;
  while (DAT_10240858 != 0) {
    Sleep(1);
  }
  if (category != 0) {
    if (locale == (char *)0x0) {
      pcVar3 = (&DAT_10017794)[category * 3];
    }
    else {
      pcVar3 = setlocale_set_cat(category,locale);
    }
    goto LAB_1000aea9;
  }
  bVar2 = true;
  iStack_8c = 0;
  if (locale != (char *)0x0) {
    if (((*locale == 'L') && (locale[1] == 'C')) && (locale[2] == '_')) {
      do {
        pcVar3 = strpbrk(locale,"=;");
        if (((pcVar3 == (char *)0x0) || (sVar10 = (int)pcVar3 - (int)locale, sVar10 == 0)) ||
           (*pcVar3 == ';')) {
          _unlock(0x13);
          DAT_10240854 = DAT_10240854 + -1;
          return (char *)0x0;
        }
        iStack_88 = 1;
        ppuVar12 = &PTR_s_LC_COLLATE_1001779c;
        do {
          iVar4 = strncmp(*ppuVar12,locale,sVar10);
          if (iVar4 == 0) {
            uVar7 = 0xffffffff;
            pcVar5 = *ppuVar12;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + (uint)bVar14 * -2 + 1;
            } while (cVar1 != '\0');
            if (~uVar7 - 1 == sVar10) break;
          }
          ppuVar12 = ppuVar12 + 3;
          iStack_88 = iStack_88 + 1;
        } while (ppuVar12 < (byte **)((int)&PTR_s_LC_TIME_100177cc + 1));
        pcVar3 = pcVar3 + 1;
        sVar10 = strcspn(pcVar3,";");
        if ((sVar10 == 0) && (*pcVar3 != ';')) {
          _unlock(0x13);
          DAT_10240854 = DAT_10240854 + -1;
          return (char *)0x0;
        }
        if (iStack_88 < 6) {
          _strncpy((char *)abStack_84,pcVar3,sVar10);
          abStack_84[sVar10] = 0;
          pcVar5 = setlocale_set_cat(iStack_88,(char *)abStack_84);
          if (pcVar5 != (char *)0x0) {
            iStack_8c = iStack_8c + 1;
          }
        }
      } while ((pcVar3[sVar10] != '\0') && (locale = pcVar3 + sVar10 + 1, *locale != '\0'));
      if (iStack_8c == 0) {
        pcVar3 = (char *)0x0;
        goto LAB_1000aea9;
      }
    }
    else {
      iVar4 = _expandlocale
                        (locale,(char *)abStack_84,(LC_ID *)0x0,(UINT *)0x0);
      pcVar3 = (char *)0x0;
      if (iVar4 == 0) goto LAB_1000aea9;
      iVar4 = 0;
      ppvVar11 = &DAT_10017794;
      do {
        if (ppvVar11 != &DAT_10017794) {
          pbVar8 = abStack_84;
          pbVar9 = *ppvVar11;
          do {
            bVar14 = *pbVar8;
            bVar13 = bVar14 < *pbVar9;
            if (bVar14 != *pbVar9) {
LAB_1000ae43:
              iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_1000ae48;
            }
            if (bVar14 == 0) break;
            bVar14 = pbVar8[1];
            bVar13 = bVar14 < pbVar9[1];
            if (bVar14 != pbVar9[1]) goto LAB_1000ae43;
            pbVar8 = pbVar8 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar14 != 0);
          iVar6 = 0;
LAB_1000ae48:
          if ((iVar6 == 0) ||
             (pcVar3 = setlocale_set_cat(iVar4,(char *)abStack_84),
             pcVar3 != (char *)0x0)) {
            iStack_8c = iStack_8c + 1;
          }
          else {
            bVar2 = false;
          }
        }
        ppvVar11 = ppvVar11 + 3;
        iVar4 = iVar4 + 1;
      } while (ppvVar11 < (void **)((int)&PTR_DAT_100177d0 + 1));
      if (bVar2) {
        pcVar3 = setlocale_get_all();
        free(DAT_10017794);
        DAT_10017794 = (void *)0x0;
        goto LAB_1000aea9;
      }
      if (iStack_8c == 0) {
        pcVar3 = (char *)0x0;
        goto LAB_1000aea9;
      }
    }
  }
  pcVar3 = setlocale_get_all();
LAB_1000aea9:
  _unlock(0x13);
  DAT_10240854 = DAT_10240854 + -1;
  return pcVar3;
}
