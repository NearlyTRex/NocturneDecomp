// Name: engine_2d.c_plotPixel_FUN_00401140
// Address: 00401140
// MANUAL RECONSTRUCTION
// Address Range: [[00401140, 004011aa]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_plotPixel_FUN_00401140(int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_plotPixel_FUN_00401140(int x,int y)

{
  if ((uint)g_WindowWidth <= (uint)x || (uint)g_WindowHeight <= (uint)y) {
    return;
  }
  if (g_BitsPerPixel == 8) {
    ((byte *)g_ScreenBufferArray[y])[x] = (byte)g_ActiveRenderColor;
    return;
  }
  if (g_BitsPerPixel == 0x10) {
    ((ushort *)g_ScreenBufferArray[y])[x] = g_ColorTable16[g_ActiveRenderColor & 0xffU];
    return;
  }
  ((uint *)g_ScreenBufferArray[y])[x] = g_ColorTable32[g_ActiveRenderColor & 0xffU];
  return;
}
