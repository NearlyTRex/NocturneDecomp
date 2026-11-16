// Name: FUN_00437290
// Address: 00437290
// Address Range: [[00437290, 004372a4]]
// Convention: unknown
// Signature: code * FUN_00437290(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_00437290(void)

{
  if (_DAT_01c51d00 != 0) {
    return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00437132;
  }
  return cockpit_ckptutil_c_optimizedMemcpy_FUN_00437038;
}
