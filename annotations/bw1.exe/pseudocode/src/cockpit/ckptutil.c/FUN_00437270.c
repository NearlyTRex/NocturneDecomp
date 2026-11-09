// Name: cockpit_ckptutil.c_FUN_00437270
// Address: 00437270
// Address Range: [[00437270, 00437285] [00437290, 004372a4] [004372b0, 004372b5]]
// Convention: unknown
// Signature: code * cockpit_ckptutil_c_FUN_00437270(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * cockpit_ckptutil_c_FUN_00437270(void)

{
  if (DAT_0061b4a0 == 8) {
    if (_DAT_01c51d00 != 0) {
      return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00437132;
    }
    return cockpit_ckptutil_c_optimizedMemcpy_FUN_00437038;
  }
  if (DAT_0061b4a0 != 0x10) {
    return cockpit_ckptutil_c_expandIndexedToRGB_FUN_0043700a;
  }
  return cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00437240;
}
