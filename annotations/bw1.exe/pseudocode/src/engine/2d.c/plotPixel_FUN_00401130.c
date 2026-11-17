// Name: engine_2d.c_plotPixel_FUN_00401130
// Address: 00401130
// Address Range: [[00401130, 0040119a]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_plotPixel_FUN_00401130(int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_plotPixel_FUN_00401130(int x,int y)

{
  if (g_INT_0061b4a0 == 8) {
    g_ARRAY_PTR_01c4354c[y][x] = (byte)g_INT_01c4f020;
    return;
  }
  if (g_INT_0061b4a0 == 0x10) {
    *(ushort *)(g_ARRAY_PTR_01c4354c[y] + x * 2) = g_USHORT_ARRAY_01c4dad0[g_INT_01c4f020 & 0xffU];
    return;
  }
  *(uint *)(g_ARRAY_PTR_01c4354c[y] + x * 4) = g_UINT_ARRAY_01c4dcd0[g_INT_01c4f020 & 0xffU];
  return;
}
