// Name: crt_locale.c_GetLcidFromLangCountry_FUN_1000e780
// Address: 1000e780
// Address Range: [[1000e780, 1000e80d]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c_GetLcidFromLangCountry_FUN_1000e780(ushort *plang,ushort *pctry)

#include "nocturne.h"

int __cdecl GetLcidFromLangCountry(ushort *plang,ushort *pctry)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  
  uVar2 = (uint)*plang % 100;
  if (0x5a < (ushort)uVar2) {
    return 0;
  }
  uVar4 = 0;
  puVar3 = (ushort *)(&DAT_10017f38 + uVar2 * 6);
  do {
    uVar1 = *puVar3;
    if (uVar1 == 0) break;
    if (((uVar1 ^ *pctry) & 0x3ff) == 0) {
      if ((*pctry & 0xfc00) == 0) {
        *pctry = uVar1;
      }
      *plang = uVar1;
      return 1;
    }
    puVar3 = puVar3 + 1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  uVar1 = *(ushort *)(&DAT_10017f38 + uVar2 * 6);
  *plang = uVar1;
  return (uint)(uVar1 != 0);
}
