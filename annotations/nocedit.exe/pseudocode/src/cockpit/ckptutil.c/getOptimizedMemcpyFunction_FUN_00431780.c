// Name: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780
// Address: 00431780
// Address Range: [[00431780, 00431794]]
// Convention: __cdecl
// Signature: OptimizedMemcpyFunc * cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780(void)

#include "nocturne.h"

OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00431780(void)

{
  if (g_MMXSupported != 0) {
    return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00431622;
  }
  return cockpit_ckptutil_c_optimizedMemcpy_FUN_00431528;
}
