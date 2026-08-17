// Name: cockpit_ckptutil.c_getColorConversionFunction_FUN_0042d130
// Address: 0042d130
// Address Range: [[0042d130, 0042d145]]
// Convention: __cdecl
// Signature: ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_0042d130(void)

#include "nocturne.h"

ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_0042d130(void)

{
  if (g_BitsPerPixel == 8) {
    if (g_MMXSupported != 0) {
      return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_0042cff2;
    }
    return cockpit_ckptutil_c_optimizedMemcpy_FUN_0042cef8;
  }
  if (g_BitsPerPixel != 0x10) {
    return cockpit_ckptutil_c_expandIndexedToRGB_FUN_0042ceca;
  }
  return cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_0042d100;
}
