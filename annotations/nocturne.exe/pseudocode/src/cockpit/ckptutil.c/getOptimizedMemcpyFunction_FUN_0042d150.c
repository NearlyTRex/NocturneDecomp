// Name: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042d150
// Address: 0042d150
// Address Range: [[0042d150, 0042d164]]
// Convention: __cdecl
// Signature: OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_0042d150(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_0042d150(void)

{
  if (_DAT_01c03948 != 0) {
    return cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_0042cff2;
  }
  return cockpit_ckptutil_c_optimizedMemcpy_FUN_0042cef8;
}
