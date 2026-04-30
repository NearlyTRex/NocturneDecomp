// Name: cockpit_ckptutil.c_putPixel_FUN_004345c0
// Address: 004345c0
// MANUAL RECONSTRUCTION
// Address Range: [[004345c0, 00434641]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_putPixel_FUN_004345c0(int x,int y,int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_putPixel_FUN_004345c0(int x,int y,int color)

{
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) && (y <= g_ClipBottom)) {
    if (0xf < (uint)g_BitsPerPixel) {
      if ((uint)g_BitsPerPixel < 0x11) {
        ((ushort *)g_ScreenBufferArray[y])[x] = g_Hardware16BitPalette[color];
        return;
      }
      if (g_BitsPerPixel != 0x20) {
        return;
      }
      ((uint *)g_ScreenBufferArray[y])[x] = g_Hardware32BitPalette[color];
      return;
    }
    if (g_BitsPerPixel == 8) {
      ((char *)g_ScreenBufferArray[y])[x] = (char)color;
      return;
    }
  }
  return;
}
