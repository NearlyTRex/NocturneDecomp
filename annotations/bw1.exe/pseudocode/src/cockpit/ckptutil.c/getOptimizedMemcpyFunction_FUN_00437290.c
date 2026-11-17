// Name: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00437290
// Address: 00437290
// Address Range: [[00437290, 004372a4]]
// Convention: __cdecl
// Signature: OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00437290(void)

#include "nocturne.h"

OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00437290(void)

{
  if (g_MMXSupported != 0) {
    return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00437132;
  }
  return cockpit_ckptutil_c_optimizedMemcpy_FUN_00437038;
}
