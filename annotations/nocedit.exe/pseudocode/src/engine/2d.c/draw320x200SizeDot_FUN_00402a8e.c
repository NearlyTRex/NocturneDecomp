// Name: engine_2d.c_draw320x200SizeDot_FUN_00402a8e
// Address: 00402a8e
// Address Range: [[00402a8e, 00402c0d]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_draw320x200SizeDot_FUN_00402a8e(int x_3d,int y_3d,int z_depth)

#include "nocturne.h"

void __cdecl engine_2d_c_draw320x200SizeDot_FUN_00402a8e(int x_3d,int y_3d,int z_depth)

{
  int iVar1;
  int iVar2;
  
  if ((((0 < z_depth) && (x_3d <= z_depth)) && (-z_depth <= x_3d)) &&
     ((y_3d <= z_depth && (-z_depth <= y_3d)))) {
    if ((uint)g_WindowHeight < 400) {
      if (g_WindowHeight != 200) {
LAB_00402be6:
        g_CurrentFilename = "..\\engine\\2d.c";
        g_CurrentLineNumber = 0x7df;
        core_main_c_displayErrorAndQuit_FUN_00506f10("draw320x200SizeDot: unknown graphics option");
        return;
      }
      engine_2d_c_project3DPointToScreen_FUN_00401770(x_3d,y_3d,z_depth);
    }
    else if ((uint)g_WindowHeight < 0x191) {
      iVar2 = (int)(((longlong)x_3d * (longlong)g_ViewportCenterXFixed) / (longlong)z_depth) +
              g_ViewportRightFixed >> 0x10;
      iVar1 = g_ViewportBottomFixed +
              (int)(((longlong)y_3d * (longlong)g_ViewportCenterYFixed) / (longlong)z_depth) >> 0x10
      ;
      if (((-1 < iVar2) && (iVar2 < 0x140)) && ((-1 < iVar1 && (iVar1 < 399)))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1 + 1);
        return;
      }
    }
    else {
      if (g_WindowHeight != 0x1e0) goto LAB_00402be6;
      iVar2 = (int)(((longlong)x_3d * (longlong)g_ViewportCenterXFixed) / (longlong)z_depth) +
              g_ViewportRightFixed >> 0x10;
      iVar1 = (int)(((longlong)y_3d * (longlong)g_ViewportCenterYFixed) / (longlong)z_depth) +
              g_ViewportBottomFixed >> 0x10;
      if ((((-1 < iVar2) && (iVar2 < 0x27f)) && (-1 < iVar1)) && (iVar1 < 0x1df)) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2 + 1,iVar1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2 + 1,iVar1 + 1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1 + 1);
        return;
      }
    }
  }
  return;
}
