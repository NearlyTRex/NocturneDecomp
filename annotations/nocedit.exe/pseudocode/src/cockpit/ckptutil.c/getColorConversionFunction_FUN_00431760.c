// Name: cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
// Address: 00431760
// Address Range: [[00431760, 0043176f]]
// Convention: __cdecl
// Signature: ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760(void)

#include "nocturne.h"

ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760(void)

{
  if (g_BitsPerPixel == 8) {
    if (g_MMXSupported != 0) {
      return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00431622;
    }
    return cockpit_ckptutil_c_optimizedMemcpy_FUN_00431528;
  }
  if (g_BitsPerPixel != 0x10) {
    return cockpit_ckptutil_c_expandIndexedToRGB_FUN_004314fa;
  }
  return cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00431730;
}
