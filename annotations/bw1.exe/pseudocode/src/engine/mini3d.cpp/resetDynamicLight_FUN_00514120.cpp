// Name: engine_mini3d.cpp_resetDynamicLight_FUN_00514120
// Address: 00514120
// Address Range: [[00514120, 00514142]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_resetDynamicLight_FUN_00514120(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_resetDynamicLight_FUN_00514120(void)

{
  _DAT_01d25004 = 0;
  if ((_DAT_02c834a0 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c834a0)();
    return;
  }
  return;
}
