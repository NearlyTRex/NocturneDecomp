// Name: cockpit_ckptutil.c_putPixel_FUN_004345c0
// Address: 004345c0
// Address Range: [[004345c0, 00434641]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_putPixel_FUN_004345c0(int x, int y, int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_putPixel_FUN_004345c0(int x,int y,int color)

{
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) && (y <= g_ClipBottom)) {
    if (0xf < (uint)g_BitsPerPixel) {
      if ((uint)g_BitsPerPixel < 0x11) {
        *(ushort *)(x * 2 + (int)g_ScreenBufferArray[y]) = g_Hardware16BitPalette[color];
        return;
      }
      if (g_BitsPerPixel != 0x20) {
        return;
      }
      *(uint *)(x * 4 + (int)g_ScreenBufferArray[y]) = g_Hardware32BitPalette[color];
      return;
    }
    if (g_BitsPerPixel == 8) {
      *(char *)(x + (int)g_ScreenBufferArray[y]) = (char)color;
      return;
    }
  }
  return;
}
