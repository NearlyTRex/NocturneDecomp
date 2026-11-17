// Name: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042c430
// Address: 0042c430
// Address Range: [[0042c430, 0042c444]]
// Convention: __cdecl
// Signature: OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_0042c430(void)

#include "nocturne.h"

OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_0042c430(void)

{
  if (g_INT_01c38b40 != 0) {
    return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_0042c2d2;
  }
  return cockpit_ckptutil_c_optimizedMemcpy_FUN_0042c1d8;
}
