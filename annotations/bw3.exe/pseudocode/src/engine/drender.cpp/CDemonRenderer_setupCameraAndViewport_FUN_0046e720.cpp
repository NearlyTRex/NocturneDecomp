// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046e720
// Address: 0046e720
// Address Range: [[0046e720, 0046e872]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046e720(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046e720(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

{
  g_INT_01c6b598 = camera_state->viewport_center_x;
  g_INT_01c6b59c = camera_state->viewport_center_y;
  g_INT_01c6b5a0 = camera_state->viewport_right;
  g_INT_01c6b5a4 = camera_state->viewport_bottom;
  g_CameraOriginX = camera_state->camera_origin_x;
  g_CameraOriginY = camera_state->camera_origin_y;
  g_CameraOriginZ = camera_state->camera_origin_z;
  g_CameraRotationPitch = camera_state->camera_pitch;
  g_CameraRotationYaw = camera_state->camera_yaw;
  g_CameraRotationRoll = camera_state->camera_roll;
  g_INT_01c6b5a8 = camera_state->clip_left;
  g_INT_01c6b5b0 = camera_state->clip_right;
  g_INT_01c6b5ac = camera_state->clip_top;
  g_INT_01c6b5b4 = camera_state->clip_bottom;
  g_RelativeX = camera_state->relative_x;
  g_RelativeY = camera_state->relative_y;
  g_RelativeZ = camera_state->relative_z;
  g_INT_01c6e2fc = (camera_state->transform_matrix).m[0].x;
  g_INT_01c6e300 = (camera_state->transform_matrix).m[0].y;
  g_INT_01c6e304 = (camera_state->transform_matrix).m[0].z;
  g_INT_01c6e308 = (camera_state->transform_matrix).m[1].x;
  g_INT_01c6e30c = (camera_state->transform_matrix).m[1].y;
  g_INT_01c6e310 = (camera_state->transform_matrix).m[1].z;
  g_INT_01c6e314 = (camera_state->transform_matrix).m[2].x;
  g_INT_01c6e318 = (camera_state->transform_matrix).m[2].y;
  g_INT_01c6e31c = (camera_state->transform_matrix).m[2].z;
  g_INT_01d72644 = (camera_state->inverse_matrix).m[0].x;
  g_INT_01d72648 = (camera_state->inverse_matrix).m[0].y;
  g_INT_01d7264c = (camera_state->inverse_matrix).m[0].z;
  g_INT_01d72650 = (camera_state->inverse_matrix).m[1].x;
  g_INT_01d72654 = (camera_state->inverse_matrix).m[1].y;
  g_INT_01d72658 = (camera_state->inverse_matrix).m[1].z;
  g_INT_01d7265c = (camera_state->inverse_matrix).m[2].x;
  g_INT_01d72660 = (camera_state->inverse_matrix).m[2].y;
  g_INT_01d72664 = (camera_state->inverse_matrix).m[2].z;
  g_ProjectionScale = camera_state->projection_scale;
  return;
}
