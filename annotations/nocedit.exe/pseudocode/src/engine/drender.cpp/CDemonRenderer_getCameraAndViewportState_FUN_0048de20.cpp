// Name: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
// Address: 0048de20
// Address Range: [[0048de20, 0048df73]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20(CDemonRenderer * this_ptr, SCameraViewportState * output_state)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
          (CDemonRenderer *this_ptr,SCameraViewportState *output_state)

{
  output_state->viewport_center_x = g_ViewportCenterXFixed;
  output_state->viewport_center_y = g_ViewportCenterYFixed;
  output_state->viewport_right = g_ViewportRightFixed;
  output_state->viewport_bottom = g_ViewportBottomFixed;
  output_state->camera_origin_x = g_CameraOriginX;
  output_state->camera_origin_y = g_CameraOriginY;
  output_state->camera_origin_z = g_CameraOriginZ;
  output_state->camera_pitch = g_CameraRotationPitch;
  output_state->camera_yaw = g_CameraRotationYaw;
  output_state->camera_roll = g_CameraRotationRoll;
  output_state->clip_left = g_ClipLeft;
  output_state->clip_right = g_ClipRight;
  output_state->clip_top = g_ClipTop;
  output_state->clip_bottom = g_ClipBottom;
  output_state->relative_x = g_RelativeX;
  output_state->relative_y = g_RelativeY;
  output_state->relative_z = g_RelativeZ;
  (output_state->transform_matrix).m[0].x = g_TransformMatrix.m[0].x;
  (output_state->transform_matrix).m[0].y = g_TransformMatrix.m[0].y;
  (output_state->transform_matrix).m[0].z = g_TransformMatrix.m[0].z;
  (output_state->transform_matrix).m[1].x = g_TransformMatrix.m[1].x;
  (output_state->transform_matrix).m[1].y = g_TransformMatrix.m[1].y;
  (output_state->transform_matrix).m[1].z = g_TransformMatrix.m[1].z;
  (output_state->transform_matrix).m[2].x = g_TransformMatrix.m[2].x;
  (output_state->transform_matrix).m[2].y = g_TransformMatrix.m[2].y;
  (output_state->transform_matrix).m[2].z = g_TransformMatrix.m[2].z;
  (output_state->inverse_matrix).m[0].x = g_InverseMatrix.m[0].x;
  (output_state->inverse_matrix).m[0].y = g_InverseMatrix.m[0].y;
  (output_state->inverse_matrix).m[0].z = g_InverseMatrix.m[0].z;
  (output_state->inverse_matrix).m[1].x = g_InverseMatrix.m[1].x;
  (output_state->inverse_matrix).m[1].y = g_InverseMatrix.m[1].y;
  (output_state->inverse_matrix).m[1].z = g_InverseMatrix.m[1].z;
  (output_state->inverse_matrix).m[2].x = g_InverseMatrix.m[2].x;
  (output_state->inverse_matrix).m[2].y = g_InverseMatrix.m[2].y;
  (output_state->inverse_matrix).m[2].z = g_InverseMatrix.m[2].z;
  output_state->projection_scale = g_ProjectionScale;
  return;
}
