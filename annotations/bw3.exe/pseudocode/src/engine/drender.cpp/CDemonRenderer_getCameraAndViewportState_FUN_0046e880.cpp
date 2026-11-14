// Name: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880
// Address: 0046e880
// Address Range: [[0046e880, 0046e9d3]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

{
  output_state->viewport_center_x = _DAT_01c6b598;
  output_state->viewport_center_y = _DAT_01c6b59c;
  output_state->viewport_right = _DAT_01c6b5a0;
  output_state->viewport_bottom = _DAT_01c6b5a4;
  output_state->camera_origin_x = _DAT_01c6e2d8;
  output_state->camera_origin_y = _DAT_01c6e2dc;
  output_state->camera_origin_z = _DAT_01c6e2e0;
  output_state->camera_pitch = _DAT_01c6e2e4;
  output_state->camera_yaw = _DAT_01c6e2e8;
  output_state->camera_roll = _DAT_01c6e2ec;
  output_state->clip_left = _DAT_01c6b5a8;
  output_state->clip_right = _DAT_01c6b5b0;
  output_state->clip_top = _DAT_01c6b5ac;
  output_state->clip_bottom = _DAT_01c6b5b4;
  output_state->relative_x = _DAT_01c6e2cc;
  output_state->relative_y = _DAT_01c6e2d0;
  output_state->relative_z = _DAT_01c6e2d4;
  (output_state->transform_matrix).m[0].x = _DAT_01c6e2fc;
  (output_state->transform_matrix).m[0].y = _DAT_01c6e300;
  (output_state->transform_matrix).m[0].z = _DAT_01c6e304;
  (output_state->transform_matrix).m[1].x = _DAT_01c6e308;
  (output_state->transform_matrix).m[1].y = _DAT_01c6e30c;
  (output_state->transform_matrix).m[1].z = _DAT_01c6e310;
  (output_state->transform_matrix).m[2].x = _DAT_01c6e314;
  (output_state->transform_matrix).m[2].y = _DAT_01c6e318;
  (output_state->transform_matrix).m[2].z = _DAT_01c6e31c;
  (output_state->inverse_matrix).m[0].x = _DAT_01d72644;
  (output_state->inverse_matrix).m[0].y = _DAT_01d72648;
  (output_state->inverse_matrix).m[0].z = _DAT_01d7264c;
  (output_state->inverse_matrix).m[1].x = _DAT_01d72650;
  (output_state->inverse_matrix).m[1].y = _DAT_01d72654;
  (output_state->inverse_matrix).m[1].z = _DAT_01d72658;
  (output_state->inverse_matrix).m[2].x = _DAT_01d7265c;
  (output_state->inverse_matrix).m[2].y = _DAT_01d72660;
  (output_state->inverse_matrix).m[2].z = _DAT_01d72664;
  output_state->projection_scale = DAT_005fba44;
  return;
}
