// Name: engine_matrix.c_pushViewport_FUN_004ce7c0
// Address: 004ce7c0
// Address Range: [[004ce7c0, 004ce919]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushViewport_FUN_004ce7c0(int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl engine_matrix_c_pushViewport_FUN_004ce7c0(int x,int y,int width,int height)

{
  g_INT_ARRAY_01cc549c[g_INT_01cc53d0] = g_CameraOriginX;
  g_INT_ARRAY_01cc54c4[g_INT_01cc53d0] = g_CameraOriginY;
  g_INT_ARRAY_01cc54ec[g_INT_01cc53d0] = g_CameraOriginZ;
  g_INT_ARRAY_01cc5514[g_INT_01cc53d0] = g_INT_01c039d0;
  g_INT_ARRAY_01cc553c[g_INT_01cc53d0] = g_INT_01c039d4;
  g_INT_ARRAY_01cc5564[g_INT_01cc53d0] = g_INT_01c039d8;
  g_INT_ARRAY_01cc558c[g_INT_01cc53d0] = g_INT_01c039dc;
  g_INT_ARRAY_01cc55b4[g_INT_01cc53d0] = g_INT_01c039e0;
  g_INT_ARRAY_01cc55dc[g_INT_01cc53d0] = g_INT_01c039e4;
  g_INT_ARRAY_01cc53d4[g_INT_01cc53d0] = g_Projection.half_width_fixed;
  g_INT_ARRAY_01cc53fc[g_INT_01cc53d0] = g_Projection.neg_half_height_fixed;
  g_INT_ARRAY_01cc5424[g_INT_01cc53d0] = g_Projection.center_x_fixed;
  g_INT_ARRAY_01cc544c[g_INT_01cc53d0] = g_Projection.center_y_fixed;
  g_INT_ARRAY_01cc5474[g_INT_01cc53d0] = g_INT_005b7648;
  g_INT_ARRAY_01cc5604[g_INT_01cc53d0] = g_ClipLeft;
  g_INT_ARRAY_01cc562c[g_INT_01cc53d0] = g_ClipRight;
  g_INT_ARRAY_01cc5654[g_INT_01cc53d0] = g_ClipTop;
  g_INT_ARRAY_01cc567c[g_INT_01cc53d0] = g_ClipBottom;
  g_INT_01cc53d0 = g_INT_01cc53d0 + 1;
  if (9 < g_INT_01cc53d0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 1341;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Too many 3D windows");
  }
  engine_2d_c_setupViewportAndClipping_FUN_00401e30(x,y,x + width,y + height);
  g_INT_005b7648 = 0x10000;
  return;
}
