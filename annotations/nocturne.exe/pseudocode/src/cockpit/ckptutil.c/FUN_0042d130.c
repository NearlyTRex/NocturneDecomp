// Name: cockpit_ckptutil.c_FUN_0042d130
// Address: 0042d130
// Address Range: [[0042d130, 0042d145]]
// Convention: __cdecl
// Signature: ColorConversionFunc * __cdecl cockpit_ckptutil_c_FUN_0042d130(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ColorConversionFunc * __cdecl cockpit_ckptutil_c_FUN_0042d130(void)

{
  if (DAT_005b7624 == 8) {
    if (_DAT_01c03948 != 0) {
      return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_0042cff2;
    }
    return cockpit_ckptutil_c_optimizedMemcpy_FUN_0042cef8;
  }
  if (DAT_005b7624 != 0x10) {
    return cockpit_ckptutil_c_expandIndexedToRGB_FUN_0042ceca;
  }
  return cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_0042d100;
}
