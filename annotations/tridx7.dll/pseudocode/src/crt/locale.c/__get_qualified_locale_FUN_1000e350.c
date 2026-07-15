// Name: crt_locale.c___get_qualified_locale_FUN_1000e350
// Address: 1000e350
// Address Range: [[1000e350, 1000e64e]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c___get_qualified_locale_FUN_1000e350(char *locale,void *id,void *out)

#include "nocturne.h"

int __cdecl __get_qualified_locale(char *locale,void *id,void *out)

{
  uint uVar1;
  LCID LVar2;
  long lVar3;
  BOOL BVar4;
  int iVar5;
  char *str;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  byte bVar9;
  ushort local_8c;
  ushort uStack_8a;
  ushort local_88;
  int local_84;
  LCID local_80 [32];
  
  bVar9 = 0;
  local_84 = 0;
  if ((id == (void *)0x0) && (out == (void *)0x0)) {
    return 0;
  }
  local_8c = 0;
  uStack_8a = 0;
  local_88 = 0;
  if ((locale != (char *)0x0) && (*locale != '\0')) {
    uVar1 = GetLcidFromLanguage(locale);
    local_8c = (ushort)uVar1;
    if (local_8c == 0) {
      return 0;
    }
  }
  if ((locale != (char *)0xffffffc0) && (locale[0x40] != '\0')) {
    uVar1 = GetLcidFromCountry(locale + 0x40);
    uStack_8a = (ushort)uVar1;
    if (uStack_8a == 0) {
      return 0;
    }
  }
  if (locale != (char *)0xffffff80) {
    str = locale + 0x80;
    bVar8 = *str == '\0';
    if (!bVar8) {
      iVar5 = 4;
      pcVar6 = str;
      pcVar7 = "ACP";
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pcVar6 == *pcVar7;
        pcVar6 = pcVar6 + (uint)bVar9 * -2 + 1;
        pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar5 = 4;
        pcVar6 = str;
        pcVar7 = "OCP";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar8 = *pcVar6 == *pcVar7;
          pcVar6 = pcVar6 + (uint)bVar9 * -2 + 1;
          pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
        } while (bVar8);
        if (bVar8) {
          local_84 = 1;
        }
        else {
          iVar5 = atoi(str);
          local_88 = (ushort)iVar5;
          if (local_88 == 0) {
            return 0;
          }
        }
      }
    }
  }
  if (local_8c == 0) {
    if (uStack_8a == 0) {
      LVar2 = GetUserDefaultLCID();
      local_8c = (ushort)LVar2;
      uStack_8a = local_8c;
      if (local_88 == 0) {
        local_80[0] = GetUserDefaultLCID();
      }
    }
    else {
      uVar1 = GetLcidFromCountry(uStack_8a);
      local_8c = (ushort)uVar1;
      uStack_8a = local_8c;
      if (local_88 == 0) {
        local_80[0] = uVar1 & 0xffff;
      }
    }
  }
  else if (uStack_8a == 0) {
    uStack_8a = local_8c;
    if (local_88 == 0) {
      local_80[0] = (LCID)local_8c;
    }
  }
  else {
    iVar5 = GetLcidFromLangCountry(&uStack_8a,&local_8c);
    if (iVar5 == 0) {
      return 0;
    }
    if (local_88 == 0) {
      local_80[0] = (LCID)uStack_8a;
    }
  }
  if (local_88 == 0) {
    iVar5 = __crtGetLocaleInfoW
                      (local_80[0],(-(uint)(local_84 == 0) & 0xff9) + 0xb,(LPWSTR)local_80,0x40,0);
    if (iVar5 == 0) {
      return 0;
    }
    lVar3 = wcstol((wchar_t *)local_80,(wchar_t **)0x0,10);
    local_88 = (ushort)lVar3;
  }
  BVar4 = IsValidCodePage((uint)local_88);
  if (BVar4 == 0) {
    return 0;
  }
  BVar4 = IsValidLocale((uint)local_8c,1);
  if (BVar4 == 0) {
    return 0;
  }
  if (id != (void *)0x0) {
    *(uint *)id = CONCAT22(uStack_8a,local_8c);
    *(ushort *)((int)id + 4) = local_88;
  }
  if (out != (void *)0x0) {
    iVar5 = __crtGetLocaleInfoA((uint)local_8c,0x1001,out,0x40,0);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = __crtGetLocaleInfoA
                      ((uint)uStack_8a,0x1002,(LPSTR)((int)out + 0x40),0x40,0);
    if (iVar5 == 0) {
      return 0;
    }
    _itoa((uint)local_88,(char *)((int)out + 0x80),10);
  }
  return 1;
}
