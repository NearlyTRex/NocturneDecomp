// Name: engine_mini3d.cpp_resetDynamicLight_FUN_004f53d0
// Address: 004f53d0
// Address Range: [[004f53d0, 004f53f2]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_resetDynamicLight_FUN_004f53d0(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_resetDynamicLight_FUN_004f53d0(void)

{
  g_INT_01d0c3a0 = 0;
  if ((g_APIDLL_enableClipping != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    (*(code *)g_APIDLL_enableClipping)();
    return;
  }
  return;
}
