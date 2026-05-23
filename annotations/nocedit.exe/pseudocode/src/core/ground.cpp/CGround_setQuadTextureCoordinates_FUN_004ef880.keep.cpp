// Name: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880
// Address: 004ef880
// MANUAL RECONSTRUCTION
// Address Range: [[004ef880, 004ef967]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004ef880(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004ef880(CGround *this_ptr,int column,int row)

{
  core_texlist_cpp_CTextureList_captureTexture_FUN_005dc270
            (this_ptr->texture_list,
             (uint)(ushort)this_ptr->terrain_data[row * this_ptr->width + column].color);
  g_RenderVertexBuffer[this_ptr->vertex_indices[1]].u = 0xf8 << 16;
  g_RenderVertexBuffer[this_ptr->vertex_indices[1]].v = 0xf8 << 16;
  g_RenderVertexBuffer[this_ptr->vertex_indices[0]].u = 0x8 << 16;
  g_RenderVertexBuffer[this_ptr->vertex_indices[0]].v = 0xf8 << 16;
  g_RenderVertexBuffer[this_ptr->vertex_indices[3]].u = 0x8 << 16;
  g_RenderVertexBuffer[this_ptr->vertex_indices[3]].v = 0x8 << 16;
  g_RenderVertexBuffer[this_ptr->vertex_indices[2]].u = 0xf8 << 16;
  g_RenderVertexBuffer[this_ptr->vertex_indices[2]].v = 0x8 << 16;
  return;
}
