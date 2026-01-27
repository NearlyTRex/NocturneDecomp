// Name: engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0
// Address: 0048a6c0
// Address Range: [[0048a6c0, 0048a6fb]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0(CDemonRenderer * this_ptr)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_0048a6c0(CDemonRenderer *this_ptr)

{
  this_ptr->projection_mode = 0;
  this_ptr->vertex_buffer_ptr = g_RenderVertexBuffer;
  this_ptr->plane_culling_enabled = 1;
  this_ptr->face_capture_enabled = 1;
  this_ptr->alpha_mask = 0;
  this_ptr->texture_capture_enabled = 0;
  this_ptr->unk = 0;
  this_ptr->face_count = 0;
  return;
}
