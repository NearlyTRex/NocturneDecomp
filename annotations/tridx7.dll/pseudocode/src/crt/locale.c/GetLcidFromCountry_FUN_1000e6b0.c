// Name: crt_locale.c_GetLcidFromCountry_FUN_1000e6b0
// Address: 1000e6b0
// Address Range: [[1000e6b0, 1000e704]]
// Convention: __cdecl
// Signature: uint __cdecl crt_locale_c_GetLcidFromCountry_FUN_1000e6b0(char *country)

#include "nocturne.h"

uint __cdecl GetLcidFromCountry(char *country)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x57;
  iVar4 = 0;
  do {
    iVar1 = (iVar4 + iVar3) / 2;
    iVar2 = _stricmp(country,*(char **)(iVar1 * 8 + 0x10017c80));
    if (iVar2 == 0) {
      return (uint)*(ushort *)(iVar1 * 8 + 0x10017c84);
    }
    if (iVar2 < 0) {
      iVar3 = iVar1;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
  } while (iVar1 - iVar3 != -1);
  return 0xffff0000;
}
