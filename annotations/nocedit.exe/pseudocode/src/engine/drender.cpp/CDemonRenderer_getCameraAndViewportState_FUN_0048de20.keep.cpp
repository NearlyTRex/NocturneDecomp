// Name: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
// Address: 0048de20
// MANUAL RECONSTRUCTION
// Address Range: [[0048de20, 0048df73]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

{
  output_state->viewport_center_x = g_Projection.half_width_fixed;
  output_state->viewport_center_y = g_Projection.neg_half_height_fixed;
  output_state->viewport_right = g_Projection.center_x_fixed;
  output_state->viewport_bottom = g_Projection.center_y_fixed;
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
  output_state->transform_matrix = g_TransformMatrix;
  output_state->inverse_matrix = g_InverseMatrix;
  output_state->projection_scale = g_ProjectionScale;
  return;
}
