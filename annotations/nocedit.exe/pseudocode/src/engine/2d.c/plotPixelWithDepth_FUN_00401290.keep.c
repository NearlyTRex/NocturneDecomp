// Name: engine_2d.c_plotPixelWithDepth_FUN_00401290
// Address: 00401290
// MANUAL RECONSTRUCTION
// Address Range: [[00401290, 00401315]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_plotPixelWithDepth_FUN_00401290(int x_coord,int y_coord,uint depth_value)

#include "nocturne.h"

void __cdecl engine_2d_c_plotPixelWithDepth_FUN_00401290(int x_coord,int y_coord,uint depth_value)

{
  int iVar1;
  
  iVar1 = g_BitsPerPixel;
  if (g_ZBufferScanlineArray[y_coord][x_coord] < depth_value) {
    g_ZBufferScanlineArray[y_coord][x_coord] = depth_value;
    if (iVar1 == 8) {
      ((byte *)g_ScreenBufferArray[y_coord])[x_coord] = (byte)g_ActiveRenderColor;
      return;
    }
    if (iVar1 != 0x10) {
      ((uint *)g_ScreenBufferArray[y_coord])[x_coord] =
           g_ColorTable32[g_ActiveRenderColor & 0xffU];
      return;
    }
    ((ushort *)g_ScreenBufferArray[y_coord])[x_coord] =
         g_ColorTable16[g_ActiveRenderColor & 0xffU];
  }
  return;
}
