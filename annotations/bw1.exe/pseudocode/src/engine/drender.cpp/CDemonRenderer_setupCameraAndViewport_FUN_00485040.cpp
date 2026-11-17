// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040
// Address: 00485040
// Address Range: [[00485040, 00485192]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

{
  g_INT_01c4eff8 = camera_state->viewport_center_x;
  g_INT_01c4effc = camera_state->viewport_center_y;
  g_INT_01c4f000 = camera_state->viewport_right;
  g_INT_01c4f004 = camera_state->viewport_bottom;
  g_CameraOriginX = camera_state->camera_origin_x;
  g_CameraOriginY = camera_state->camera_origin_y;
  g_CameraOriginZ = camera_state->camera_origin_z;
  g_CameraRotationPitch = camera_state->camera_pitch;
  g_CameraRotationYaw = camera_state->camera_yaw;
  g_CameraRotationRoll = camera_state->camera_roll;
  g_INT_01c4f008 = camera_state->clip_left;
  g_ClipRight = camera_state->clip_right;
  g_INT_01c4f00c = camera_state->clip_top;
  g_INT_01c4f014 = camera_state->clip_bottom;
  g_RelativeX = camera_state->relative_x;
  g_RelativeY = camera_state->relative_y;
  g_RelativeZ = camera_state->relative_z;
  g_INT_01c51d5c = (camera_state->transform_matrix).m[0].x;
  g_INT_01c51d60 = (camera_state->transform_matrix).m[0].y;
  g_INT_01c51d64 = (camera_state->transform_matrix).m[0].z;
  g_INT_01c51d68 = (camera_state->transform_matrix).m[1].x;
  g_INT_01c51d6c = (camera_state->transform_matrix).m[1].y;
  g_INT_01c51d70 = (camera_state->transform_matrix).m[1].z;
  g_INT_01c51d74 = (camera_state->transform_matrix).m[2].x;
  g_INT_01c51d78 = (camera_state->transform_matrix).m[2].y;
  g_INT_01c51d7c = (camera_state->transform_matrix).m[2].z;
  g_INT_01d1dd18 = (camera_state->inverse_matrix).m[0].x;
  g_INT_01d1dd1c = (camera_state->inverse_matrix).m[0].y;
  g_INT_01d1dd20 = (camera_state->inverse_matrix).m[0].z;
  g_INT_01d1dd24 = (camera_state->inverse_matrix).m[1].x;
  g_INT_01d1dd28 = (camera_state->inverse_matrix).m[1].y;
  g_INT_01d1dd2c = (camera_state->inverse_matrix).m[1].z;
  g_INT_01d1dd30 = (camera_state->inverse_matrix).m[2].x;
  g_INT_01d1dd34 = (camera_state->inverse_matrix).m[2].y;
  g_INT_01d1dd38 = (camera_state->inverse_matrix).m[2].z;
  g_ProjectionScale = camera_state->projection_scale;
  return;
}
