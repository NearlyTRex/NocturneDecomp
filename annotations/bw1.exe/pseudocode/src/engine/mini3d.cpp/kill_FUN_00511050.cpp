// Name: engine_mini3d.cpp_kill_FUN_00511050
// Address: 00511050
// Address Range: [[00511050, 005110d9]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_kill_FUN_00511050(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_kill_FUN_00511050(void)

{
  engine_mini3d_cpp_free32_FUN_00514cf0(g_FLOAT_PTR_01d2ad74);
  g_FLOAT_PTR_01d2ad74 = (float *)0x0;
  if (g_INT_01d227dc == 0) {
    if (g_PTR_01d25f2c == (byte *)0x0) {
      return;
    }
  }
  else {
    debugFree((void *)g_INT_01d227dc);
    g_INT_01d227dc = 0;
    g_FLOAT_PTR_01d227e0 = (float *)0x0;
    g_FLOAT_PTR_01d227e4 = (float *)0x0;
    if (g_PTR_01d25f2c == (byte *)0x0) {
      return;
    }
  }
  debugFree(g_PTR_01d25f2c);
  debugFree(g_PTR_01d25f30);
  g_PTR_01d25f2c = (byte *)0x0;
  g_PTR_01d25f30 = (byte *)0x0;
  return;
}
