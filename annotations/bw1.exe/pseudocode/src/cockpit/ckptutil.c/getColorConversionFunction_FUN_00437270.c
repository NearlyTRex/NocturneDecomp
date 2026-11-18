// Name: cockpit_ckptutil.c_getColorConversionFunction_FUN_00437270
// Address: 00437270
// Address Range: [[00437270, 0043727f]]
// Convention: __cdecl
// Signature: ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_00437270(void)

#include "nocturne.h"

ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_00437270(void)

{
  if (g_INT_0061b4a0 == 8) {
    if (g_MMXSupported != 0) {
      return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00437132;
    }
    return cockpit_ckptutil_c_optimizedMemcpy_FUN_00437038;
  }
  if (g_INT_0061b4a0 != 0x10) {
    return cockpit_ckptutil_c_expandIndexedToRGB_FUN_0043700a;
  }
  return cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00437240;
}
