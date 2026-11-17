// Name: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00434ea0
// Address: 00434ea0
// Address Range: [[00434ea0, 00434eb4]]
// Convention: __cdecl
// Signature: OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00434ea0(void)

#include "nocturne.h"

OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00434ea0(void)

{
  if (g_MMXSupported != 0) {
    return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00434d42;
  }
  return cockpit_ckptutil_c_optimizedMemcpy_FUN_00434c48;
}
