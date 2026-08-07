// Name: engine_2d.c_plotPixel_FUN_00401530
// Address: 00401530
// Address Range: [[00401530, 0040159a]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_plotPixel_FUN_00401530(int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_plotPixel_FUN_00401530(int x,int y)

{
  if (g_BitsPerPixel == 8) {
    *(byte *)(x + (int)g_ScreenBufferArray[y]) = (byte)g_ActiveRenderColor;
    return;
  }
  if (g_BitsPerPixel == 0x10) {
    *(ushort *)(x * 2 + (int)g_ScreenBufferArray[y]) = g_ColorTable16[g_ActiveRenderColor & 0xffU];
    return;
  }
  *(uint *)(x * 4 + (int)g_ScreenBufferArray[y]) = g_ColorTable32[g_ActiveRenderColor & 0xffU];
  return;
}
