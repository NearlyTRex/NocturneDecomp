// Name: cockpit_ckptutil.c_getColorConversionFunction_FUN_0042c410
// Address: 0042c410
// Address Range: [[0042c410, 0042c41f]]
// Convention: __cdecl
// Signature: ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_0042c410(void)

#include "nocturne.h"

ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_0042c410(void)

{
  if (g_INT_006141c0 == 8) {
    if (g_MMXSupported != 0) {
      return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_0042c2d2;
    }
    return cockpit_ckptutil_c_optimizedMemcpy_FUN_0042c1d8;
  }
  if (g_INT_006141c0 != 0x10) {
    return cockpit_ckptutil_c_expandIndexedToRGB_FUN_0042c1aa;
  }
  return cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_0042c3e0;
}
