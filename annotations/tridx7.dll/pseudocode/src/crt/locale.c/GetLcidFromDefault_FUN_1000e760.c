// Name: crt_locale.c_GetLcidFromDefault_FUN_1000e760
// Address: 1000e760
// Address Range: [[1000e760, 1000e778]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c_GetLcidFromDefault_FUN_1000e760(ushort langid)

#include "nocturne.h"

int __cdecl GetLcidFromDefault(ushort langid)

{
  if (langid != 0x354) {
    return 0;
  }
  return 0xc04;
}
