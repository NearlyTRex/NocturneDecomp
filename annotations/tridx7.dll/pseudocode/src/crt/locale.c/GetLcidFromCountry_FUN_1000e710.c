// Name: crt_locale.c_GetLcidFromCountry_FUN_1000e710
// Address: 1000e710
// Address Range: [[1000e710, 1000e751]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c_GetLcidFromCountry_FUN_1000e710(ushort ctry)

#include "nocturne.h"

int __cdecl GetLcidFromCountry(ushort ctry)

{
  uint in_EAX;
  
  if ((100 < ctry) &&
     (in_EAX = GetLcidFromDefault(ctry), (short)in_EAX != 0)) {
    return in_EAX;
  }
  if ((ushort)((uint)ctry % 100) < 0x5b) {
    return (uint)*(ushort *)(&DAT_10017f38 + ((uint)ctry % 100) * 6);
  }
  return in_EAX & 0xffff0000;
}
