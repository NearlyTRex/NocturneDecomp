// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40
// Address: 0046cb40
// Address Range: [[0046cb40, 0046cc92]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

{
  _DAT_01c35e38 = camera_state->viewport_center_x;
  _DAT_01c35e3c = camera_state->viewport_center_y;
  _DAT_01c35e40 = camera_state->viewport_right;
  _DAT_01c35e44 = camera_state->viewport_bottom;
  _DAT_01c38b78 = camera_state->camera_origin_x;
  _DAT_01c38b7c = camera_state->camera_origin_y;
  _DAT_01c38b80 = camera_state->camera_origin_z;
  _DAT_01c38b84 = camera_state->camera_pitch;
  _DAT_01c38b88 = camera_state->camera_yaw;
  _DAT_01c38b8c = camera_state->camera_roll;
  _DAT_01c35e48 = camera_state->clip_left;
  _DAT_01c35e50 = camera_state->clip_right;
  _DAT_01c35e4c = camera_state->clip_top;
  _DAT_01c35e54 = camera_state->clip_bottom;
  _DAT_01c38b6c = camera_state->relative_x;
  _DAT_01c38b70 = camera_state->relative_y;
  _DAT_01c38b74 = camera_state->relative_z;
  _DAT_01c38b9c = (camera_state->transform_matrix).m[0].x;
  _DAT_01c38ba0 = (camera_state->transform_matrix).m[0].y;
  _DAT_01c38ba4 = (camera_state->transform_matrix).m[0].z;
  _DAT_01c38ba8 = (camera_state->transform_matrix).m[1].x;
  _DAT_01c38bac = (camera_state->transform_matrix).m[1].y;
  _DAT_01c38bb0 = (camera_state->transform_matrix).m[1].z;
  _DAT_01c38bb4 = (camera_state->transform_matrix).m[2].x;
  _DAT_01c38bb8 = (camera_state->transform_matrix).m[2].y;
  _DAT_01c38bbc = (camera_state->transform_matrix).m[2].z;
  _DAT_01d04fb8 = (camera_state->inverse_matrix).m[0].x;
  _DAT_01d04fbc = (camera_state->inverse_matrix).m[0].y;
  _DAT_01d04fc0 = (camera_state->inverse_matrix).m[0].z;
  _DAT_01d04fc4 = (camera_state->inverse_matrix).m[1].x;
  _DAT_01d04fc8 = (camera_state->inverse_matrix).m[1].y;
  _DAT_01d04fcc = (camera_state->inverse_matrix).m[1].z;
  _DAT_01d04fd0 = (camera_state->inverse_matrix).m[2].x;
  _DAT_01d04fd4 = (camera_state->inverse_matrix).m[2].y;
  _DAT_01d04fd8 = (camera_state->inverse_matrix).m[2].z;
  DAT_006141e4 = camera_state->projection_scale;
  return;
}
