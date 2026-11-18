// Name: engine_mini3d.cpp_kill_FUN_004f22c0
// Address: 004f22c0
// Address Range: [[004f22c0, 004f2349]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_kill_FUN_004f22c0(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_kill_FUN_004f22c0(void)

{
  engine_mini3d_cpp_free32_FUN_004f5f70(g_FLOAT_PTR_01d12114);
  g_FLOAT_PTR_01d12114 = (float *)0x0;
  if (g_INT_01d09b78 == 0) {
    if (g_PTR_01d0d2cc == (byte *)0x0) {
      return;
    }
  }
  else {
    debugFree((void *)g_INT_01d09b78);
    g_INT_01d09b78 = 0;
    g_FLOAT_PTR_01d09b7c = (float *)0x0;
    g_FLOAT_PTR_01d09b80 = (float *)0x0;
    if (g_PTR_01d0d2cc == (byte *)0x0) {
      return;
    }
  }
  debugFree(g_PTR_01d0d2cc);
  debugFree(g_PTR_01d0d2d0);
  g_PTR_01d0d2cc = (byte *)0x0;
  g_PTR_01d0d2d0 = (byte *)0x0;
  return;
}
