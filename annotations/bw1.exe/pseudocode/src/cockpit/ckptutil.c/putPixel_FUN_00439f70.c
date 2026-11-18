// Name: cockpit_ckptutil.c_putPixel_FUN_00439f70
// Address: 00439f70
// Address Range: [[00439f70, 00439ff1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_putPixel_FUN_00439f70(int x,int y,int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_putPixel_FUN_00439f70(int x,int y,int color)

{
  if ((((g_INT_01c4f008 <= x) && (x <= g_ClipRight)) && (g_INT_01c4f00c <= y)) &&
     (y <= g_INT_01c4f014)) {
    if (0xf < (uint)g_INT_0061b4a0) {
      if ((uint)g_INT_0061b4a0 < 0x11) {
        *(ushort *)(g_ScreenBufferArray[y] + x * 2) = g_Hardware16BitPalette[color];
        return;
      }
      if (g_INT_0061b4a0 != 0x20) {
        return;
      }
      *(uint *)(g_ScreenBufferArray[y] + x * 4) = g_Hardware32BitPalette[color];
      return;
    }
    if (g_INT_0061b4a0 == 8) {
      g_ScreenBufferArray[y][x] = (char)color;
      return;
    }
  }
  return;
}
