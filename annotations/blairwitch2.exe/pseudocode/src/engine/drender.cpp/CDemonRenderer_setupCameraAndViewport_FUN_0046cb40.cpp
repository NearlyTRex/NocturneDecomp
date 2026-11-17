// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40
// Address: 0046cb40
// Address Range: [[0046cb40, 0046cc92]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

{
  g_INT_01c35e38 = camera_state->viewport_center_x;
  g_INT_01c35e3c = camera_state->viewport_center_y;
  g_INT_01c35e40 = camera_state->viewport_right;
  g_INT_01c35e44 = camera_state->viewport_bottom;
  g_INT_01c38b78 = camera_state->camera_origin_x;
  g_INT_01c38b7c = camera_state->camera_origin_y;
  g_INT_01c38b80 = camera_state->camera_origin_z;
  g_INT_01c38b84 = camera_state->camera_pitch;
  g_INT_01c38b88 = camera_state->camera_yaw;
  g_INT_01c38b8c = camera_state->camera_roll;
  g_INT_01c35e48 = camera_state->clip_left;
  g_INT_01c35e50 = camera_state->clip_right;
  g_INT_01c35e4c = camera_state->clip_top;
  g_INT_01c35e54 = camera_state->clip_bottom;
  g_INT_01c38b6c = camera_state->relative_x;
  g_INT_01c38b70 = camera_state->relative_y;
  g_INT_01c38b74 = camera_state->relative_z;
  g_INT_01c38b9c = (camera_state->transform_matrix).m[0].x;
  g_INT_01c38ba0 = (camera_state->transform_matrix).m[0].y;
  g_INT_01c38ba4 = (camera_state->transform_matrix).m[0].z;
  g_INT_01c38ba8 = (camera_state->transform_matrix).m[1].x;
  g_INT_01c38bac = (camera_state->transform_matrix).m[1].y;
  g_INT_01c38bb0 = (camera_state->transform_matrix).m[1].z;
  g_INT_01c38bb4 = (camera_state->transform_matrix).m[2].x;
  g_INT_01c38bb8 = (camera_state->transform_matrix).m[2].y;
  g_INT_01c38bbc = (camera_state->transform_matrix).m[2].z;
  g_INT_01d04fb8 = (camera_state->inverse_matrix).m[0].x;
  g_INT_01d04fbc = (camera_state->inverse_matrix).m[0].y;
  g_INT_01d04fc0 = (camera_state->inverse_matrix).m[0].z;
  g_INT_01d04fc4 = (camera_state->inverse_matrix).m[1].x;
  g_INT_01d04fc8 = (camera_state->inverse_matrix).m[1].y;
  g_INT_01d04fcc = (camera_state->inverse_matrix).m[1].z;
  g_INT_01d04fd0 = (camera_state->inverse_matrix).m[2].x;
  g_INT_01d04fd4 = (camera_state->inverse_matrix).m[2].y;
  g_INT_01d04fd8 = (camera_state->inverse_matrix).m[2].z;
  g_INT_006141e4 = camera_state->projection_scale;
  return;
}
