// Name: cockpit_ckptutil.c_putPixel_FUN_0042f260
// Address: 0042f260
// Address Range: [[0042f260, 0042f2e1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_putPixel_FUN_0042f260(int x,int y,int color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_putPixel_FUN_0042f260(int x,int y,int color)

{
  if ((((g_INT_01c35e48 <= x) && (x <= g_INT_01c35e50)) && (g_INT_01c35e4c <= y)) &&
     (y <= g_INT_01c35e54)) {
    if (0xf < (uint)g_INT_006141c0) {
      if ((uint)g_INT_006141c0 < 0x11) {
        *(ushort *)(g_ARRAY_PTR_01c2a38c[y] + x * 2) = g_USHORT_ARRAY_01c35614[color];
        return;
      }
      if (g_INT_006141c0 != 0x20) {
        return;
      }
      *(uint *)(g_ARRAY_PTR_01c2a38c[y] + x * 4) = g_UINT_ARRAY_01c35214[color];
      return;
    }
    if (g_INT_006141c0 == 8) {
      g_ARRAY_PTR_01c2a38c[y][x] = (char)color;
      return;
    }
  }
  return;
}
