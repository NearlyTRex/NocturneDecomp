// Name: engine_2d.c_draw320x200SizeDot_FUN_00402ae0
// Address: 00402ae0
// Address Range: [[00402ae0, 00402c5d]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_draw320x200SizeDot_FUN_00402ae0(int x_3d,int y_3d,int z_depth)

#include "nocturne.h"

void __cdecl engine_2d_c_draw320x200SizeDot_FUN_00402ae0(int x_3d,int y_3d,int z_depth)

{
  int iVar1;
  int iVar2;
  
  if ((((0 < z_depth) && (x_3d <= z_depth)) && (-z_depth <= x_3d)) &&
     ((y_3d <= z_depth && (-z_depth <= y_3d)))) {
    if ((uint)g_INT_0061b49c < 400) {
      if (g_INT_0061b49c != 200) {
LAB_00402c36:
        g_CurrentFilename = "..\\engine\\2d.c";
        g_CurrentLineNumber = 2010;
        core_main_c_displayErrorAndQuit_FUN_005030e0("draw320x200SizeDot: unknown graphics option");
        return;
      }
      engine_2d_c_project3DPointToScreen_FUN_00401780(x_3d,y_3d,z_depth);
    }
    else if ((uint)g_INT_0061b49c < 0x191) {
      iVar2 = (int)(((longlong)x_3d * (longlong)g_INT_01c4eff8) / (longlong)z_depth) +
              g_INT_01c4f000 >> 0x10;
      iVar1 = g_INT_01c4f004 +
              (int)(((longlong)y_3d * (longlong)g_INT_01c4effc) / (longlong)z_depth) >> 0x10;
      if (((-1 < iVar2) && (iVar2 < 0x140)) && ((-1 < iVar1 && (iVar1 < 399)))) {
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1 + 1);
        return;
      }
    }
    else {
      if (g_INT_0061b49c != 0x1e0) goto LAB_00402c36;
      iVar2 = (int)(((longlong)x_3d * (longlong)g_INT_01c4eff8) / (longlong)z_depth) +
              g_INT_01c4f000 >> 0x10;
      iVar1 = (int)(((longlong)y_3d * (longlong)g_INT_01c4effc) / (longlong)z_depth) +
              g_INT_01c4f004 >> 0x10;
      if ((((-1 < iVar2) && (iVar2 < 0x27f)) && (-1 < iVar1)) && (iVar1 < 0x1df)) {
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2 + 1,iVar1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2 + 1,iVar1 + 1);
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar1 + 1);
        return;
      }
    }
  }
  return;
}
