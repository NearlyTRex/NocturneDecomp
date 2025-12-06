// Name: engine_matrix.c_pushViewport_FUN_0050e320
// Address: 0050e320
// Address Range: [[0050e320, 0050e479]]
// Convention: __cdecl
// Signature: void engine_matrix.c_pushViewport_FUN_0050e320(int x, int y, int width, int height)

#include "nocturne.h"

void __cdecl engine_matrix_c_pushViewport_FUN_0050e320(int x,int y,int width,int height)

{
  int in_stack_00000014;
  
  g_ViewportStack_CameraX[g_ViewportStackIndex] = g_CameraOriginX;
  g_ViewportStack_CameraY[g_ViewportStackIndex] = g_CameraOriginY;
  g_ViewportStack_CameraZ[g_ViewportStackIndex] = g_CameraOriginZ;
  g_ViewportStack_RotationPitch[g_ViewportStackIndex] = g_CameraRotationPitch;
  g_ViewportStack_RotationYaw[g_ViewportStackIndex] = g_CameraRotationYaw;
  g_ViewportStack_RotationRoll[g_ViewportStackIndex] = g_CameraRotationRoll;
  g_ViewportStack_ExtraState1[g_ViewportStackIndex] = g_LightDirectionX;
  g_ViewportStack_ExtraState2[g_ViewportStackIndex] = g_LightDirectionY;
  g_ViewportStack_ExtraState3[g_ViewportStackIndex] = g_LightDirectionZ;
  g_ViewportStack_CenterX[g_ViewportStackIndex] = g_ViewportCenterXFixed;
  g_ViewportStack_CenterY[g_ViewportStackIndex] = g_ViewportCenterYFixed;
  g_ViewportStack_RightFixed[g_ViewportStackIndex] = g_ViewportRightFixed;
  g_ViewportStack_BottomFixed[g_ViewportStackIndex] = g_ViewportBottomFixed;
  g_ViewportStack_ProjectionScale[g_ViewportStackIndex] = g_ProjectionScale;
  g_ViewportStack_ClipLeft[g_ViewportStackIndex] = g_ClipLeft;
  g_ViewportStack_ClipRight[g_ViewportStackIndex] = g_ClipRight;
  g_ViewportStack_ClipTop[g_ViewportStackIndex] = g_ClipTop;
  g_ViewportStack_ClipBottom[g_ViewportStackIndex] = g_ClipBottom;
  g_ViewportStackIndex = g_ViewportStackIndex + 1;
  if (9 < g_ViewportStackIndex) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 0x540;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many 3D windows");
  }
  engine_2d_c_setupViewportAndClipping_FUN_00401800(y,width,y + height,width + in_stack_00000014);
  g_ProjectionScale = 0x10000;
  return;
}
