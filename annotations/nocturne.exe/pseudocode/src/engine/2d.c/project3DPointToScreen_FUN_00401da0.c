// Name: engine_2d.c_project3DPointToScreen_FUN_00401da0
// Address: 00401da0
// Address Range: [[00401da0, 00401de6]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401da0(int x_3d,int y_3d,int z_depth)

#include "nocturne.h"

void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401da0(int x_3d,int y_3d,int z_depth)

{
  engine_2d_c_plotPixel_FUN_00401530
            (g_Projection.center_x_fixed +
             (int)(((longlong)x_3d * (longlong)g_Projection.half_width_fixed) / (longlong)z_depth)
             >> 0x10,(int)(((longlong)y_3d * (longlong)g_Projection.neg_half_height_fixed) /
                          (longlong)z_depth) + g_Projection.center_y_fixed >> 0x10);
  return;
}
