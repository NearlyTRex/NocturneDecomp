// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040
// Address: 00485040
// Address Range: [[00485040, 00485192]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

{
  _DAT_01c4eff8 = camera_state->viewport_center_x;
  _DAT_01c4effc = camera_state->viewport_center_y;
  _DAT_01c4f000 = camera_state->viewport_right;
  _DAT_01c4f004 = camera_state->viewport_bottom;
  _DAT_01c51d38 = camera_state->camera_origin_x;
  _DAT_01c51d3c = camera_state->camera_origin_y;
  _DAT_01c51d40 = camera_state->camera_origin_z;
  _DAT_01c51d44 = camera_state->camera_pitch;
  _DAT_01c51d48 = camera_state->camera_yaw;
  _DAT_01c51d4c = camera_state->camera_roll;
  _DAT_01c4f008 = camera_state->clip_left;
  _DAT_01c4f010 = camera_state->clip_right;
  _DAT_01c4f00c = camera_state->clip_top;
  _DAT_01c4f014 = camera_state->clip_bottom;
  _DAT_01c51d2c = camera_state->relative_x;
  _DAT_01c51d30 = camera_state->relative_y;
  _DAT_01c51d34 = camera_state->relative_z;
  _DAT_01c51d5c = (camera_state->transform_matrix).m[0].x;
  _DAT_01c51d60 = (camera_state->transform_matrix).m[0].y;
  _DAT_01c51d64 = (camera_state->transform_matrix).m[0].z;
  _DAT_01c51d68 = (camera_state->transform_matrix).m[1].x;
  _DAT_01c51d6c = (camera_state->transform_matrix).m[1].y;
  _DAT_01c51d70 = (camera_state->transform_matrix).m[1].z;
  _DAT_01c51d74 = (camera_state->transform_matrix).m[2].x;
  _DAT_01c51d78 = (camera_state->transform_matrix).m[2].y;
  _DAT_01c51d7c = (camera_state->transform_matrix).m[2].z;
  _DAT_01d1dd18 = (camera_state->inverse_matrix).m[0].x;
  _DAT_01d1dd1c = (camera_state->inverse_matrix).m[0].y;
  _DAT_01d1dd20 = (camera_state->inverse_matrix).m[0].z;
  _DAT_01d1dd24 = (camera_state->inverse_matrix).m[1].x;
  _DAT_01d1dd28 = (camera_state->inverse_matrix).m[1].y;
  _DAT_01d1dd2c = (camera_state->inverse_matrix).m[1].z;
  _DAT_01d1dd30 = (camera_state->inverse_matrix).m[2].x;
  _DAT_01d1dd34 = (camera_state->inverse_matrix).m[2].y;
  _DAT_01d1dd38 = (camera_state->inverse_matrix).m[2].z;
  DAT_0061b4c4 = camera_state->projection_scale;
  return;
}
