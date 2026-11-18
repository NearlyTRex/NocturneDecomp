// Name: engine_mini3d.cpp_kill_FUN_004ec820
// Address: 004ec820
// Address Range: [[004ec820, 004ec8a9]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_kill_FUN_004ec820(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_kill_FUN_004ec820(void)

{
  engine_mini3d_cpp_free32_FUN_004f04c0(g_FLOAT_PTR_01d7f4f4);
  g_FLOAT_PTR_01d7f4f4 = (float *)0x0;
  if (g_INT_01d76f5c == 0) {
    if (g_PTR_01d7a6ac == (byte *)0x0) {
      return;
    }
  }
  else {
    debugFree((void *)g_INT_01d76f5c);
    g_INT_01d76f5c = 0;
    g_FLOAT_PTR_01d76f60 = (float *)0x0;
    g_FLOAT_PTR_01d76f64 = (float *)0x0;
    if (g_PTR_01d7a6ac == (byte *)0x0) {
      return;
    }
  }
  debugFree(g_PTR_01d7a6ac);
  debugFree(g_PTR_01d7a6b0);
  g_PTR_01d7a6ac = (byte *)0x0;
  g_PTR_01d7a6b0 = (byte *)0x0;
  return;
}
