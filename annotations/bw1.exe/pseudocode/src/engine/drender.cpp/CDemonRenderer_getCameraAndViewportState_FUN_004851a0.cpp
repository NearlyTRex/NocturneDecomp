// Name: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0
// Address: 004851a0
// Address Range: [[004851a0, 004852f3]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

{
  output_state->viewport_center_x = g_INT_01c4eff8;
  output_state->viewport_center_y = g_INT_01c4effc;
  output_state->viewport_right = g_INT_01c4f000;
  output_state->viewport_bottom = g_INT_01c4f004;
  output_state->camera_origin_x = g_CameraOriginX;
  output_state->camera_origin_y = g_CameraOriginY;
  output_state->camera_origin_z = g_CameraOriginZ;
  output_state->camera_pitch = g_CameraRotationPitch;
  output_state->camera_yaw = g_CameraRotationYaw;
  output_state->camera_roll = g_CameraRotationRoll;
  output_state->clip_left = g_INT_01c4f008;
  output_state->clip_right = g_ClipRight;
  output_state->clip_top = g_INT_01c4f00c;
  output_state->clip_bottom = g_INT_01c4f014;
  output_state->relative_x = g_RelativeX;
  output_state->relative_y = g_RelativeY;
  output_state->relative_z = g_RelativeZ;
  (output_state->transform_matrix).m[0].x = g_INT_01c51d5c;
  (output_state->transform_matrix).m[0].y = g_INT_01c51d60;
  (output_state->transform_matrix).m[0].z = g_INT_01c51d64;
  (output_state->transform_matrix).m[1].x = g_INT_01c51d68;
  (output_state->transform_matrix).m[1].y = g_INT_01c51d6c;
  (output_state->transform_matrix).m[1].z = g_INT_01c51d70;
  (output_state->transform_matrix).m[2].x = g_INT_01c51d74;
  (output_state->transform_matrix).m[2].y = g_INT_01c51d78;
  (output_state->transform_matrix).m[2].z = g_INT_01c51d7c;
  (output_state->inverse_matrix).m[0].x = g_INT_01d1dd18;
  (output_state->inverse_matrix).m[0].y = g_INT_01d1dd1c;
  (output_state->inverse_matrix).m[0].z = g_INT_01d1dd20;
  (output_state->inverse_matrix).m[1].x = g_INT_01d1dd24;
  (output_state->inverse_matrix).m[1].y = g_INT_01d1dd28;
  (output_state->inverse_matrix).m[1].z = g_INT_01d1dd2c;
  (output_state->inverse_matrix).m[2].x = g_INT_01d1dd30;
  (output_state->inverse_matrix).m[2].y = g_INT_01d1dd34;
  (output_state->inverse_matrix).m[2].z = g_INT_01d1dd38;
  output_state->projection_scale = g_ProjectionScale;
  return;
}
