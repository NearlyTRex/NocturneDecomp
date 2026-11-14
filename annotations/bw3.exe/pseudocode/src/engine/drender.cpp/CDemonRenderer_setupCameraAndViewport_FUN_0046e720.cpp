// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046e720
// Address: 0046e720
// Address Range: [[0046e720, 0046e872]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046e720(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046e720(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

{
  _DAT_01c6b598 = camera_state->viewport_center_x;
  _DAT_01c6b59c = camera_state->viewport_center_y;
  _DAT_01c6b5a0 = camera_state->viewport_right;
  _DAT_01c6b5a4 = camera_state->viewport_bottom;
  _DAT_01c6e2d8 = camera_state->camera_origin_x;
  _DAT_01c6e2dc = camera_state->camera_origin_y;
  _DAT_01c6e2e0 = camera_state->camera_origin_z;
  _DAT_01c6e2e4 = camera_state->camera_pitch;
  _DAT_01c6e2e8 = camera_state->camera_yaw;
  _DAT_01c6e2ec = camera_state->camera_roll;
  _DAT_01c6b5a8 = camera_state->clip_left;
  _DAT_01c6b5b0 = camera_state->clip_right;
  _DAT_01c6b5ac = camera_state->clip_top;
  _DAT_01c6b5b4 = camera_state->clip_bottom;
  _DAT_01c6e2cc = camera_state->relative_x;
  _DAT_01c6e2d0 = camera_state->relative_y;
  _DAT_01c6e2d4 = camera_state->relative_z;
  _DAT_01c6e2fc = (camera_state->transform_matrix).m[0].x;
  _DAT_01c6e300 = (camera_state->transform_matrix).m[0].y;
  _DAT_01c6e304 = (camera_state->transform_matrix).m[0].z;
  _DAT_01c6e308 = (camera_state->transform_matrix).m[1].x;
  _DAT_01c6e30c = (camera_state->transform_matrix).m[1].y;
  _DAT_01c6e310 = (camera_state->transform_matrix).m[1].z;
  _DAT_01c6e314 = (camera_state->transform_matrix).m[2].x;
  _DAT_01c6e318 = (camera_state->transform_matrix).m[2].y;
  _DAT_01c6e31c = (camera_state->transform_matrix).m[2].z;
  _DAT_01d72644 = (camera_state->inverse_matrix).m[0].x;
  _DAT_01d72648 = (camera_state->inverse_matrix).m[0].y;
  _DAT_01d7264c = (camera_state->inverse_matrix).m[0].z;
  _DAT_01d72650 = (camera_state->inverse_matrix).m[1].x;
  _DAT_01d72654 = (camera_state->inverse_matrix).m[1].y;
  _DAT_01d72658 = (camera_state->inverse_matrix).m[1].z;
  _DAT_01d7265c = (camera_state->inverse_matrix).m[2].x;
  _DAT_01d72660 = (camera_state->inverse_matrix).m[2].y;
  _DAT_01d72664 = (camera_state->inverse_matrix).m[2].z;
  DAT_005fba44 = camera_state->projection_scale;
  return;
}
