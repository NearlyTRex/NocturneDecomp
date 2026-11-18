// Name: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0
// Address: 0046cca0
// Address Range: [[0046cca0, 0046cdf3]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

{
  output_state->viewport_center_x = g_INT_01c35e38;
  output_state->viewport_center_y = g_INT_01c35e3c;
  output_state->viewport_right = g_INT_01c35e40;
  output_state->viewport_bottom = g_INT_01c35e44;
  output_state->camera_origin_x = g_CameraOriginX;
  output_state->camera_origin_y = g_CameraOriginY;
  output_state->camera_origin_z = g_CameraOriginZ;
  output_state->camera_pitch = g_CameraRotationPitch;
  output_state->camera_yaw = g_CameraRotationYaw;
  output_state->camera_roll = g_CameraRotationRoll;
  output_state->clip_left = g_INT_01c35e48;
  output_state->clip_right = g_ClipRight;
  output_state->clip_top = g_INT_01c35e4c;
  output_state->clip_bottom = g_INT_01c35e54;
  output_state->relative_x = g_RelativeX;
  output_state->relative_y = g_RelativeY;
  output_state->relative_z = g_RelativeZ;
  (output_state->transform_matrix).m[0].x = g_INT_01c38b9c;
  (output_state->transform_matrix).m[0].y = g_INT_01c38ba0;
  (output_state->transform_matrix).m[0].z = g_INT_01c38ba4;
  (output_state->transform_matrix).m[1].x = g_INT_01c38ba8;
  (output_state->transform_matrix).m[1].y = g_INT_01c38bac;
  (output_state->transform_matrix).m[1].z = g_INT_01c38bb0;
  (output_state->transform_matrix).m[2].x = g_INT_01c38bb4;
  (output_state->transform_matrix).m[2].y = g_INT_01c38bb8;
  (output_state->transform_matrix).m[2].z = g_INT_01c38bbc;
  (output_state->inverse_matrix).m[0].x = g_INT_01d04fb8;
  (output_state->inverse_matrix).m[0].y = g_INT_01d04fbc;
  (output_state->inverse_matrix).m[0].z = g_INT_01d04fc0;
  (output_state->inverse_matrix).m[1].x = g_INT_01d04fc4;
  (output_state->inverse_matrix).m[1].y = g_INT_01d04fc8;
  (output_state->inverse_matrix).m[1].z = g_INT_01d04fcc;
  (output_state->inverse_matrix).m[2].x = g_INT_01d04fd0;
  (output_state->inverse_matrix).m[2].y = g_INT_01d04fd4;
  (output_state->inverse_matrix).m[2].z = g_INT_01d04fd8;
  output_state->projection_scale = g_ProjectionScale;
  return;
}
