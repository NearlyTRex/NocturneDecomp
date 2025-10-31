// Name: engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0
// Address: 0048a6c0
// Address Range: [[0048a6c0, 0048a6fb]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0(CDemonRenderer * this_ptr)
// Cross-references:
//   engine_drender.cpp_staticInit_FUN_0048a6b0 (0048a6b0) at 0048a6b5 [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_0048a6c0(CDemonRenderer *this_ptr)

{
  this_ptr->projection_mode = 0;
  this_ptr->vertex_buffer_ptr = g_RenderVertexBuffer;
  this_ptr->plane_culling_enabled = 1;
  this_ptr->face_capture_enabled = 1;
  this_ptr->alpha_mask = 0;
  this_ptr->texture_capture_enabled = 0;
  this_ptr->field8_0x20 = 0;
  this_ptr->face_count = 0;
  return;
}


// Assembly code:
// 0048a6c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0
//   XREF to: Stack[0x4] (READ)
// 0048a6c4: MOV dword ptr [EAX + 0x8],0x0
// 0048a6cb: MOV dword ptr [EAX],0x688014
//   XREF to: 00688014 (DATA)
// 0048a6d1: MOV dword ptr [EAX + 0xc],0x1
// 0048a6d8: MOV dword ptr [EAX + 0x10],0x1
// 0048a6df: MOV dword ptr [EAX + 0x14],0x0
// 0048a6e6: MOV dword ptr [EAX + 0x1c],0x0
// 0048a6ed: MOV dword ptr [EAX + 0x20],0x0
// 0048a6f4: MOV dword ptr [EAX + 0x4],0x0
// 0048a6fb: RET
