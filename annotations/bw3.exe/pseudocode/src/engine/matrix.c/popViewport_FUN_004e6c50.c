// Name: engine_matrix.c_popViewport_FUN_004e6c50
// Address: 004e6c50
// Address Range: [[004e6c50, 004e6d7f]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popViewport_FUN_004e6c50(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_popViewport_FUN_004e6c50(void)

{
  g_ViewportStackIndex = g_ViewportStackIndex + -1;
  if (g_ViewportStackIndex < 0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 1388;
    core_main_c_displayErrorAndQuit_FUN_004e4330("3D Window unbalance");
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
  g_INT_01c6b598 = g_ViewportStack_CenterX[g_ViewportStackIndex];
  g_INT_01c6b59c = g_ViewportStack_CenterY[g_ViewportStackIndex];
  g_INT_01c6b5a0 = g_ViewportStack_RightFixed[g_ViewportStackIndex];
  g_INT_01c6b5a4 = g_ViewportStack_BottomFixed[g_ViewportStackIndex];
  g_ProjectionScale = g_ViewportStack_ProjectionScale[g_ViewportStackIndex];
  g_INT_01c6b5a8 = g_ViewportStack_ClipLeft[g_ViewportStackIndex];
  g_INT_01c6b5b0 = g_ViewportStack_ClipRight[g_ViewportStackIndex];
  g_INT_01c6b5ac = g_ViewportStack_ClipTop[g_ViewportStackIndex];
  g_INT_01c6b5b4 = g_ViewportStack_ClipBottom[g_ViewportStackIndex];
  return;
}
