// Name: engine_matrix.c_popViewport_FUN_0050e480
// Address: 0050e480
// Address Range: [[0050e480, 0050e5af]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popViewport_FUN_0050e480(CDemonRenderer *this_ptr)

#include "nocturne.h"

void __cdecl engine_matrix_c_popViewport_FUN_0050e480(CDemonRenderer *this_ptr)

{
  g_ViewportStackIndex = g_ViewportStackIndex + -1;
  if (g_ViewportStackIndex < 0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 0x56c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("3D Window unbalance");
  }
  g_CameraOriginX = g_ViewportStack_CameraX[g_ViewportStackIndex];
  g_CameraOriginY = g_ViewportStack_CameraY[g_ViewportStackIndex];
  g_CameraOriginZ = g_ViewportStack_CameraZ[g_ViewportStackIndex];
  g_CameraRotationPitch = g_ViewportStack_RotationPitch[g_ViewportStackIndex];
  g_CameraRotationYaw = g_ViewportStack_RotationYaw[g_ViewportStackIndex];
  g_CameraRotationRoll = g_ViewportStack_RotationRoll[g_ViewportStackIndex];
  g_LightDirectionX = g_ViewportStack_ExtraState1[g_ViewportStackIndex];
  g_LightDirectionY = g_ViewportStack_ExtraState2[g_ViewportStackIndex];
  g_LightDirectionZ = g_ViewportStack_ExtraState3[g_ViewportStackIndex];
  g_ViewportCenterXFixed = g_ViewportStack_CenterX[g_ViewportStackIndex];
  g_ViewportCenterYFixed = g_ViewportStack_CenterY[g_ViewportStackIndex];
  g_ViewportRightFixed = g_ViewportStack_RightFixed[g_ViewportStackIndex];
  g_ViewportBottomFixed = g_ViewportStack_BottomFixed[g_ViewportStackIndex];
  g_ProjectionScale = g_ViewportStack_ProjectionScale[g_ViewportStackIndex];
  g_ClipLeft = g_ViewportStack_ClipLeft[g_ViewportStackIndex];
  g_ClipRight = g_ViewportStack_ClipRight[g_ViewportStackIndex];
  g_ClipTop = g_ViewportStack_ClipTop[g_ViewportStackIndex];
  g_ClipBottom = g_ViewportStack_ClipBottom[g_ViewportStackIndex];
  return;
}
