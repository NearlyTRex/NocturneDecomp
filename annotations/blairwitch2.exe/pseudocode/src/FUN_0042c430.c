// Name: FUN_0042c430
// Address: 0042c430
// Address Range: [[0042c430, 0042c444]]
// Convention: unknown
// Signature: code * FUN_0042c430(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_0042c430(void)

{
  if (_DAT_01c38b40 != 0) {
    return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_0042c2d2;
  }
  return cockpit_ckptutil_c_optimizedMemcpy_FUN_0042c1d8;
}
