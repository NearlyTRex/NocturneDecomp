// Name: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0
// Address: 004851a0
// Address Range: [[004851a0, 004852f3]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0(CDemonRenderer *this_ptr,SCameraViewportState *output_state)

{
  output_state->viewport_center_x = _DAT_01c4eff8;
  output_state->viewport_center_y = _DAT_01c4effc;
  output_state->viewport_right = _DAT_01c4f000;
  output_state->viewport_bottom = _DAT_01c4f004;
  output_state->camera_origin_x = _DAT_01c51d38;
  output_state->camera_origin_y = _DAT_01c51d3c;
  output_state->camera_origin_z = _DAT_01c51d40;
  output_state->camera_pitch = _DAT_01c51d44;
  output_state->camera_yaw = _DAT_01c51d48;
  output_state->camera_roll = _DAT_01c51d4c;
  output_state->clip_left = _DAT_01c4f008;
  output_state->clip_right = _DAT_01c4f010;
  output_state->clip_top = _DAT_01c4f00c;
  output_state->clip_bottom = _DAT_01c4f014;
  output_state->relative_x = _DAT_01c51d2c;
  output_state->relative_y = _DAT_01c51d30;
  output_state->relative_z = _DAT_01c51d34;
  (output_state->transform_matrix).m[0].x = _DAT_01c51d5c;
  (output_state->transform_matrix).m[0].y = _DAT_01c51d60;
  (output_state->transform_matrix).m[0].z = _DAT_01c51d64;
  (output_state->transform_matrix).m[1].x = _DAT_01c51d68;
  (output_state->transform_matrix).m[1].y = _DAT_01c51d6c;
  (output_state->transform_matrix).m[1].z = _DAT_01c51d70;
  (output_state->transform_matrix).m[2].x = _DAT_01c51d74;
  (output_state->transform_matrix).m[2].y = _DAT_01c51d78;
  (output_state->transform_matrix).m[2].z = _DAT_01c51d7c;
  (output_state->inverse_matrix).m[0].x = _DAT_01d1dd18;
  (output_state->inverse_matrix).m[0].y = _DAT_01d1dd1c;
  (output_state->inverse_matrix).m[0].z = _DAT_01d1dd20;
  (output_state->inverse_matrix).m[1].x = _DAT_01d1dd24;
  (output_state->inverse_matrix).m[1].y = _DAT_01d1dd28;
  (output_state->inverse_matrix).m[1].z = _DAT_01d1dd2c;
  (output_state->inverse_matrix).m[2].x = _DAT_01d1dd30;
  (output_state->inverse_matrix).m[2].y = _DAT_01d1dd34;
  (output_state->inverse_matrix).m[2].z = _DAT_01d1dd38;
  output_state->projection_scale = DAT_0061b4c4;
  return;
}
