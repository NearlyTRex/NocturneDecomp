// Name: cockpit_ckptutil.c_putPixel_FUN_00437b80
// Address: 00437b80
// Address Range: [[00437b80, 00437c01]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_putPixel_FUN_00437b80(int x,int y,int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_putPixel_FUN_00437b80(int x,int y,int color)

{
  if ((((g_INT_01c6b5a8 <= x) && (x <= g_INT_01c6b5b0)) && (g_INT_01c6b5ac <= y)) &&
     (y <= g_INT_01c6b5b4)) {
    if (0xf < (uint)g_INT_005fba20) {
      if ((uint)g_INT_005fba20 < 0x11) {
        *(ushort *)(g_ScreenBufferArray[y] + x * 2) = g_Hardware16BitPalette[color];
        return;
      }
      if (g_INT_005fba20 != 0x20) {
        return;
      }
      *(uint *)(g_ScreenBufferArray[y] + x * 4) = g_Hardware32BitPalette[color];
      return;
    }
    if (g_INT_005fba20 == 8) {
      g_ScreenBufferArray[y][x] = (char)color;
      return;
    }
  }
  return;
}
