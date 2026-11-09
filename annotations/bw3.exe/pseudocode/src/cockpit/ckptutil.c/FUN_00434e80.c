// Name: cockpit_ckptutil.c_FUN_00434e80
// Address: 00434e80
// Address Range: [[00434e80, 00434e95] [00434ea0, 00434eb4] [00434ec0, 00434ec5]]
// Convention: unknown
// Signature: code * cockpit_ckptutil_c_FUN_00434e80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * cockpit_ckptutil_c_FUN_00434e80(void)

{
  if (DAT_005fba20 == 8) {
    if (_DAT_01c6e2a0 != 0) {
      return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00434d42;
    }
    return cockpit_ckptutil_c_optimizedMemcpy_FUN_00434c48;
  }
  if (DAT_005fba20 != 0x10) {
    return cockpit_ckptutil_c_expandIndexedToRGB_FUN_00434c1a;
  }
  return cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00434e50;
}
