// Name: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880
// Address: 0046e880
// Address Range: [[0046e880, 0046e9d3]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

{
  output_state->viewport_center_x = g_INT_01c6b598;
  output_state->viewport_center_y = g_INT_01c6b59c;
  output_state->viewport_right = g_INT_01c6b5a0;
  output_state->viewport_bottom = g_INT_01c6b5a4;
  output_state->camera_origin_x = g_CameraOriginX;
  output_state->camera_origin_y = g_CameraOriginY;
  output_state->camera_origin_z = g_CameraOriginZ;
  output_state->camera_pitch = g_CameraRotationPitch;
  output_state->camera_yaw = g_CameraRotationYaw;
  output_state->camera_roll = g_CameraRotationRoll;
  output_state->clip_left = g_INT_01c6b5a8;
  output_state->clip_right = g_INT_01c6b5b0;
  output_state->clip_top = g_INT_01c6b5ac;
  output_state->clip_bottom = g_INT_01c6b5b4;
  output_state->relative_x = g_RelativeX;
  output_state->relative_y = g_RelativeY;
  output_state->relative_z = g_RelativeZ;
  (output_state->transform_matrix).m[0].x = g_INT_01c6e2fc;
  (output_state->transform_matrix).m[0].y = g_INT_01c6e300;
  (output_state->transform_matrix).m[0].z = g_INT_01c6e304;
  (output_state->transform_matrix).m[1].x = g_INT_01c6e308;
  (output_state->transform_matrix).m[1].y = g_INT_01c6e30c;
  (output_state->transform_matrix).m[1].z = g_INT_01c6e310;
  (output_state->transform_matrix).m[2].x = g_INT_01c6e314;
  (output_state->transform_matrix).m[2].y = g_INT_01c6e318;
  (output_state->transform_matrix).m[2].z = g_INT_01c6e31c;
  (output_state->inverse_matrix).m[0].x = g_INT_01d72644;
  (output_state->inverse_matrix).m[0].y = g_INT_01d72648;
  (output_state->inverse_matrix).m[0].z = g_INT_01d7264c;
  (output_state->inverse_matrix).m[1].x = g_INT_01d72650;
  (output_state->inverse_matrix).m[1].y = g_INT_01d72654;
  (output_state->inverse_matrix).m[1].z = g_INT_01d72658;
  (output_state->inverse_matrix).m[2].x = g_INT_01d7265c;
  (output_state->inverse_matrix).m[2].y = g_INT_01d72660;
  (output_state->inverse_matrix).m[2].z = g_INT_01d72664;
  output_state->projection_scale = g_ProjectionScale;
  return;
}
