// Name: engine_2d.c_project3DPointToScreen_FUN_00401770
// Address: 00401770
// Address Range: [[00401770, 004017b6]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401770(int x_3d,int y_3d,int z_depth)

#include "nocturne.h"

void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401770(int x_3d,int y_3d,int z_depth)

{
  engine_2d_c_plotPixel_FUN_00401140
            (g_ViewportRightFixed +
             (int)(((longlong)x_3d * (longlong)g_ViewportCenterXFixed) / (longlong)z_depth) >> 0x10,
             (int)(((longlong)y_3d * (longlong)g_ViewportCenterYFixed) / (longlong)z_depth) +
             g_ViewportBottomFixed >> 0x10);
  return;
}
