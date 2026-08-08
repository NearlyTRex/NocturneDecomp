// Name: engine_matrix.c_pushViewport_FUN_004ce7c0
// Address: 004ce7c0
// Address Range: [[004ce7c0, 004ce919]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushViewport_FUN_004ce7c0(int x,int y,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_pushViewport_FUN_004ce7c0(int x,int y,int width,int height)

{
  *(int *)(_DAT_01cc53d0 * 4 + 0x1cc549c) = g_CameraOriginX;
  *(int *)(_DAT_01cc53d0 * 4 + 0x1cc54c4) = g_CameraOriginY;
  *(int *)(_DAT_01cc53d0 * 4 + 0x1cc54ec) = g_CameraOriginZ;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5514) = _DAT_01c039d0;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc553c) = _DAT_01c039d4;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5564) = _DAT_01c039d8;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc558c) = _DAT_01c039dc;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc55b4) = _DAT_01c039e0;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc55dc) = _DAT_01c039e4;
  *(int *)(_DAT_01cc53d0 * 4 + 0x1cc53d4) = g_Projection.half_width_fixed;
  *(int *)(_DAT_01cc53d0 * 4 + 0x1cc53fc) = g_Projection.neg_half_height_fixed;
  *(int *)(_DAT_01cc53d0 * 4 + 0x1cc5424) = g_Projection.center_x_fixed;
  *(int *)(_DAT_01cc53d0 * 4 + 0x1cc544c) = g_Projection.center_y_fixed;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5474) = DAT_005b7648;
  *(int *)(_DAT_01cc53d0 * 4 + 0x1cc5604) = g_ClipLeft;
  *(int *)(_DAT_01cc53d0 * 4 + 0x1cc562c) = g_ClipRight;
  *(int *)(_DAT_01cc53d0 * 4 + 0x1cc5654) = g_ClipTop;
  *(int *)(_DAT_01cc53d0 * 4 + 0x1cc567c) = g_ClipBottom;
  _DAT_01cc53d0 = _DAT_01cc53d0 + 1;
  if (9 < _DAT_01cc53d0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 1341;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Too many 3D windows");
  }
  engine_2d_c_setupViewportAndClipping_FUN_00401e30(x,y,x + width,y + height);
  DAT_005b7648 = 0x10000;
  return;
}
