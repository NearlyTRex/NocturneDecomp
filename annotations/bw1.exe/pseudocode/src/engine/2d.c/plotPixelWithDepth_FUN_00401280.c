// Name: engine_2d.c_plotPixelWithDepth_FUN_00401280
// Address: 00401280
// Address Range: [[00401280, 00401305]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_plotPixelWithDepth_FUN_00401280(int x_coord,int y_coord,uint depth_value)

#include "nocturne.h"

void __cdecl engine_2d_c_plotPixelWithDepth_FUN_00401280(int x_coord,int y_coord,uint depth_value)

{
  int iVar1;
  
  iVar1 = g_INT_0061b4a0;
  if (g_UINT_PTR_ARRAY_01c4480c[y_coord][x_coord] < depth_value) {
    g_UINT_PTR_ARRAY_01c4480c[y_coord][x_coord] = depth_value;
    if (iVar1 == 8) {
      g_ARRAY_PTR_01c4354c[y_coord][x_coord] = (byte)g_INT_01c4f020;
      return;
    }
    if (iVar1 != 0x10) {
      *(uint *)(g_ARRAY_PTR_01c4354c[y_coord] + x_coord * 4) =
           g_UINT_ARRAY_01c4dcd0[g_INT_01c4f020 & 0xffU];
      return;
    }
    *(ushort *)(g_ARRAY_PTR_01c4354c[y_coord] + x_coord * 2) =
         g_USHORT_ARRAY_01c4dad0[g_INT_01c4f020 & 0xffU];
  }
  return;
}
