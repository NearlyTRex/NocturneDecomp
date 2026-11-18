// Name: engine_matrix.c_pushViewport_FUN_005090b0
// Address: 005090b0
// Address Range: [[005090b0, 00509209]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushViewport_FUN_005090b0(int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl engine_matrix_c_pushViewport_FUN_005090b0(int x,int y,int width,int height)

{
  g_ViewportStack_CameraX[g_ViewportStackIndex] = g_CameraOriginX;
  g_ViewportStack_CameraY[g_ViewportStackIndex] = g_CameraOriginY;
  g_ViewportStack_CameraZ[g_ViewportStackIndex] = g_CameraOriginZ;
  g_ViewportStack_RotationPitch[g_ViewportStackIndex] = g_CameraRotationPitch;
  g_ViewportStack_RotationYaw[g_ViewportStackIndex] = g_CameraRotationYaw;
  g_ViewportStack_RotationRoll[g_ViewportStackIndex] = g_CameraRotationRoll;
  g_ViewportStack_ExtraState1[g_ViewportStackIndex] = g_LightDirectionX;
  g_ViewportStack_ExtraState2[g_ViewportStackIndex] = g_LightDirectionY;
  g_ViewportStack_ExtraState3[g_ViewportStackIndex] = g_LightDirectionZ;
  g_ViewportStack_CenterX[g_ViewportStackIndex] = g_INT_01c4eff8;
  g_ViewportStack_CenterY[g_ViewportStackIndex] = g_INT_01c4effc;
  g_ViewportStack_RightFixed[g_ViewportStackIndex] = g_INT_01c4f000;
  g_ViewportStack_BottomFixed[g_ViewportStackIndex] = g_INT_01c4f004;
  g_ViewportStack_ProjectionScale[g_ViewportStackIndex] = g_ProjectionScale;
  g_ViewportStack_ClipLeft[g_ViewportStackIndex] = g_INT_01c4f008;
  g_ViewportStack_ClipRight[g_ViewportStackIndex] = g_ClipRight;
  g_ViewportStack_ClipTop[g_ViewportStackIndex] = g_INT_01c4f00c;
  g_ViewportStack_ClipBottom[g_ViewportStackIndex] = g_INT_01c4f014;
  g_ViewportStackIndex = g_ViewportStackIndex + 1;
  if (9 < g_ViewportStackIndex) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\matrix.c";
    g_INT_01d1d404 = 0x540;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Too many 3D windows");
  }
  engine_2d_c_setupViewportAndClipping_FUN_00401810(x,y,x + width,y + height);
  g_ProjectionScale = 0x10000;
  return;
}
