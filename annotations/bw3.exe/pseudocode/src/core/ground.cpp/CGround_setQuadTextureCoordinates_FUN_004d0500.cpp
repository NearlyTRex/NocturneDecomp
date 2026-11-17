// Name: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004d0500
// Address: 004d0500
// Address Range: [[004d0500, 004d05e7]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004d0500(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004d0500(CGround *this_ptr,int column,int row)

{
  core_texlist_cpp_CTextureList_captureTexture_FUN_00569520
            (this_ptr->texture_list,
             (uint)(ushort)this_ptr->terrain_data[row * this_ptr->width + column].color);
  g_SRenderVertex_ARRAY_0060b014[this_ptr->vertex_indices[1]].u = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[this_ptr->vertex_indices[1]].v = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[this_ptr->vertex_indices[0]].u = 0x80000;
  g_SRenderVertex_ARRAY_0060b014[this_ptr->vertex_indices[0]].v = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[this_ptr->vertex_indices[3]].u = 0x80000;
  g_SRenderVertex_ARRAY_0060b014[this_ptr->vertex_indices[3]].v = 0x80000;
  g_SRenderVertex_ARRAY_0060b014[this_ptr->vertex_indices[2]].u = 0xf80000;
  g_SRenderVertex_ARRAY_0060b014[this_ptr->vertex_indices[2]].v = 0x80000;
  return;
}
