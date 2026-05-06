// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
// Address: 0048dcc0
// Address Range: [[0048dcc0, 0048de12]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

{
  g_Projection.half_width_fixed = camera_state->viewport_center_x;
  g_Projection.neg_half_height_fixed = camera_state->viewport_center_y;
  g_Projection.center_x_fixed = camera_state->viewport_right;
  g_Projection.center_y_fixed = camera_state->viewport_bottom;
  g_CameraOriginX = camera_state->camera_origin_x;
  g_CameraOriginY = camera_state->camera_origin_y;
  g_CameraOriginZ = camera_state->camera_origin_z;
  g_CameraRotationPitch = camera_state->camera_pitch;
  g_CameraRotationYaw = camera_state->camera_yaw;
  g_CameraRotationRoll = camera_state->camera_roll;
  g_ClipLeft = camera_state->clip_left;
  g_ClipRight = camera_state->clip_right;
  g_ClipTop = camera_state->clip_top;
  g_ClipBottom = camera_state->clip_bottom;
  g_RelativeX = camera_state->relative_x;
  g_RelativeY = camera_state->relative_y;
  g_RelativeZ = camera_state->relative_z;
  g_TransformMatrix.m[0].x = (camera_state->transform_matrix).m[0].x;
  g_TransformMatrix.m[0].y = (camera_state->transform_matrix).m[0].y;
  g_TransformMatrix.m[0].z = (camera_state->transform_matrix).m[0].z;
  g_TransformMatrix.m[1].x = (camera_state->transform_matrix).m[1].x;
  g_TransformMatrix.m[1].y = (camera_state->transform_matrix).m[1].y;
  g_TransformMatrix.m[1].z = (camera_state->transform_matrix).m[1].z;
  g_TransformMatrix.m[2].x = (camera_state->transform_matrix).m[2].x;
  g_TransformMatrix.m[2].y = (camera_state->transform_matrix).m[2].y;
  g_TransformMatrix.m[2].z = (camera_state->transform_matrix).m[2].z;
  g_InverseMatrix.m[0].x = (camera_state->inverse_matrix).m[0].x;
  g_InverseMatrix.m[0].y = (camera_state->inverse_matrix).m[0].y;
  g_InverseMatrix.m[0].z = (camera_state->inverse_matrix).m[0].z;
  g_InverseMatrix.m[1].x = (camera_state->inverse_matrix).m[1].x;
  g_InverseMatrix.m[1].y = (camera_state->inverse_matrix).m[1].y;
  g_InverseMatrix.m[1].z = (camera_state->inverse_matrix).m[1].z;
  g_InverseMatrix.m[2].x = (camera_state->inverse_matrix).m[2].x;
  g_InverseMatrix.m[2].y = (camera_state->inverse_matrix).m[2].y;
  g_InverseMatrix.m[2].z = (camera_state->inverse_matrix).m[2].z;
  g_ProjectionScale = camera_state->projection_scale;
  return;
}
