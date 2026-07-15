// Name: crt_locale.c_GetLcidFromLanguage_FUN_1000e650
// Address: 1000e650
// Address Range: [[1000e650, 1000e6a4]]
// Convention: __cdecl
// Signature: uint __cdecl crt_locale_c_GetLcidFromLanguage_FUN_1000e650(char *lang)

#include "nocturne.h"

uint __cdecl GetLcidFromLanguage(char *lang)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 99;
  iVar4 = 0;
  do {
    iVar1 = (iVar4 + iVar3) / 2;
    iVar2 = _stricmp(lang,*(char **)(iVar1 * 8 + 0x10017968));
    if (iVar2 == 0) {
      return (uint)*(ushort *)(iVar1 * 8 + 0x1001796c);
    }
    if (iVar2 < 0) {
      iVar3 = iVar1;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
  } while (iVar1 - iVar3 != -1);
  return 0xffff0000;
}
