// Name: engine_mini3d.cpp_resetDynamicLight_FUN_004ef8f0
// Address: 004ef8f0
// Address Range: [[004ef8f0, 004ef912]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_resetDynamicLight_FUN_004ef8f0(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_resetDynamicLight_FUN_004ef8f0(void)

{
  g_INT_01d79784 = 0;
  if ((g_PTR_02cf60fc != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
    (*(code *)g_PTR_02cf60fc)();
    return;
  }
  return;
}
