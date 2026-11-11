// Name: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0
// Address: 0046cca0
// Address Range: [[0046cca0, 0046cdf3]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

{
  output_state->viewport_center_x = _DAT_01c35e38;
  output_state->viewport_center_y = _DAT_01c35e3c;
  output_state->viewport_right = _DAT_01c35e40;
  output_state->viewport_bottom = _DAT_01c35e44;
  output_state->camera_origin_x = _DAT_01c38b78;
  output_state->camera_origin_y = _DAT_01c38b7c;
  output_state->camera_origin_z = _DAT_01c38b80;
  output_state->camera_pitch = _DAT_01c38b84;
  output_state->camera_yaw = _DAT_01c38b88;
  output_state->camera_roll = _DAT_01c38b8c;
  output_state->clip_left = _DAT_01c35e48;
  output_state->clip_right = _DAT_01c35e50;
  output_state->clip_top = _DAT_01c35e4c;
  output_state->clip_bottom = _DAT_01c35e54;
  output_state->relative_x = _DAT_01c38b6c;
  output_state->relative_y = _DAT_01c38b70;
  output_state->relative_z = _DAT_01c38b74;
  (output_state->transform_matrix).m[0].x = _DAT_01c38b9c;
  (output_state->transform_matrix).m[0].y = _DAT_01c38ba0;
  (output_state->transform_matrix).m[0].z = _DAT_01c38ba4;
  (output_state->transform_matrix).m[1].x = _DAT_01c38ba8;
  (output_state->transform_matrix).m[1].y = _DAT_01c38bac;
  (output_state->transform_matrix).m[1].z = _DAT_01c38bb0;
  (output_state->transform_matrix).m[2].x = _DAT_01c38bb4;
  (output_state->transform_matrix).m[2].y = _DAT_01c38bb8;
  (output_state->transform_matrix).m[2].z = _DAT_01c38bbc;
  (output_state->inverse_matrix).m[0].x = _DAT_01d04fb8;
  (output_state->inverse_matrix).m[0].y = _DAT_01d04fbc;
  (output_state->inverse_matrix).m[0].z = _DAT_01d04fc0;
  (output_state->inverse_matrix).m[1].x = _DAT_01d04fc4;
  (output_state->inverse_matrix).m[1].y = _DAT_01d04fc8;
  (output_state->inverse_matrix).m[1].z = _DAT_01d04fcc;
  (output_state->inverse_matrix).m[2].x = _DAT_01d04fd0;
  (output_state->inverse_matrix).m[2].y = _DAT_01d04fd4;
  (output_state->inverse_matrix).m[2].z = _DAT_01d04fd8;
  output_state->projection_scale = DAT_006141e4;
  return;
}
