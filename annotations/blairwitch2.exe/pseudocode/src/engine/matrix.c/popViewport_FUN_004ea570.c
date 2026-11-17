// Name: engine_matrix.c_popViewport_FUN_004ea570
// Address: 004ea570
// Address Range: [[004ea570, 004ea69f]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popViewport_FUN_004ea570(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_popViewport_FUN_004ea570(void)

{
  g_ViewportStackIndex = g_ViewportStackIndex + -1;
  if (g_ViewportStackIndex < 0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\matrix.c";
    g_INT_01d046a4 = 0x56c;
    core_main_c_displayErrorAndQuit_FUN_004e4500("3D Window unbalance");
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
  g_INT_01c35e38 = g_ViewportStack_CenterX[g_ViewportStackIndex];
  g_INT_01c35e3c = g_ViewportStack_CenterY[g_ViewportStackIndex];
  g_INT_01c35e40 = g_ViewportStack_RightFixed[g_ViewportStackIndex];
  g_INT_01c35e44 = g_ViewportStack_BottomFixed[g_ViewportStackIndex];
  g_ProjectionScale = g_ViewportStack_ProjectionScale[g_ViewportStackIndex];
  g_INT_01c35e48 = g_ViewportStack_ClipLeft[g_ViewportStackIndex];
  g_ClipRight = g_ViewportStack_ClipRight[g_ViewportStackIndex];
  g_INT_01c35e4c = g_ViewportStack_ClipTop[g_ViewportStackIndex];
  g_INT_01c35e54 = g_ViewportStack_ClipBottom[g_ViewportStackIndex];
  return;
}
