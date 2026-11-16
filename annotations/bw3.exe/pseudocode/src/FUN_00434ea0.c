// Name: FUN_00434ea0
// Address: 00434ea0
// Address Range: [[00434ea0, 00434eb4]]
// Convention: unknown
// Signature: code * FUN_00434ea0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_00434ea0(void)

{
  if (_DAT_01c6e2a0 != 0) {
    return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00434d42;
  }
  return cockpit_ckptutil_c_optimizedMemcpy_FUN_00434c48;
}
