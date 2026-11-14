// Name: engine_drender.cpp_CDemonRenderer_ctor_FUN_00469510
// Address: 00469510
// Address Range: [[00469510, 0046954b]]
// Convention: __cdecl
// Signature: CDemonRenderer * __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_00469510(CDemonRenderer *this_ptr)

#include "nocturne.h"

CDemonRenderer * __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_00469510(CDemonRenderer *this_ptr)

{
  this_ptr->projection_mode = 0;
  this_ptr->vertex_buffer_ptr = (SRenderVertex *)&DAT_00622014;
  this_ptr->plane_culling_enabled = 1;
  this_ptr->face_capture_enabled = 1;
  this_ptr->alpha_mask = 0;
  this_ptr->texture_capture_enabled = 0;
  this_ptr->skip_uv_extraction = 0;
  this_ptr->shadow_pass_active = 0;
  return this_ptr;
}
