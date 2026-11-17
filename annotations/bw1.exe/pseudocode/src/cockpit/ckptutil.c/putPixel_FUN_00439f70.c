// Name: cockpit_ckptutil.c_putPixel_FUN_00439f70
// Address: 00439f70
// Address Range: [[00439f70, 00439ff1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_putPixel_FUN_00439f70(int x,int y,int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_putPixel_FUN_00439f70(int x,int y,int color)

{
  if ((((g_INT_01c4f008 <= x) && (x <= g_INT_01c4f010)) && (g_INT_01c4f00c <= y)) &&
     (y <= g_INT_01c4f014)) {
    if (0xf < (uint)g_INT_0061b4a0) {
      if ((uint)g_INT_0061b4a0 < 0x11) {
        *(ushort *)(g_ARRAY_PTR_01c4354c[y] + x * 2) = g_USHORT_ARRAY_01c4e7d4[color];
        return;
      }
      if (g_INT_0061b4a0 != 0x20) {
        return;
      }
      *(uint *)(g_ARRAY_PTR_01c4354c[y] + x * 4) = g_UINT_ARRAY_01c4e3d4[color];
      return;
    }
    if (g_INT_0061b4a0 == 8) {
      g_ARRAY_PTR_01c4354c[y][x] = (char)color;
      return;
    }
  }
  return;
}
