// Name: engine_drender.cpp_CDemonRenderer_ctor_FUN_0045ed00
// Address: 0045ed00
// Address Range: [[0045ed00, 0045ed3b]]
// Convention: __cdecl
// Signature: CDemonRenderer * __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_0045ed00(CDemonRenderer *this_ptr)

#include "nocturne.h"

CDemonRenderer * __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_0045ed00(CDemonRenderer *this_ptr)

{
  this_ptr->projection_mode = 0;
  this_ptr->vertex_buffer_ptr = (SRenderVertex *)&DAT_005c5014;
  this_ptr->plane_culling_enabled = 1;
  this_ptr->face_capture_enabled = 1;
  this_ptr->alpha_mask = 0;
  this_ptr->texture_capture_enabled = 0;
  this_ptr->skip_uv_extraction = 0;
  this_ptr->face_count = 0;
  return this_ptr;
}
