// Name: engine_mini3d.cpp_resetDynamicLight_FUN_00514120
// Address: 00514120
// Address Range: [[00514120, 00514142]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_resetDynamicLight_FUN_00514120(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_resetDynamicLight_FUN_00514120(void)

{
  g_INT_01d25004 = 0;
  if ((g_PTR_02c834a0 != (byte *)0x0) && (g_INT_01c50948 != 0)) {
    (*(code *)g_PTR_02c834a0)();
    return;
  }
  return;
}
