// Name: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00
// Address: 004b1d00
// Address Range: [[004b1d00, 004b1de7]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00(CGround *this_ptr,int column,int row)

{
  core_texlist_cpp_CTextureList_captureTexture_FUN_00544db0
            (this_ptr->texture_list,
             (uint)(ushort)this_ptr->terrain_data[row * this_ptr->width + column].color);
  g_SRenderVertex_ARRAY_005c5014[this_ptr->vertex_indices[1]].u = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[this_ptr->vertex_indices[1]].v = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[this_ptr->vertex_indices[0]].u = 0x80000;
  g_SRenderVertex_ARRAY_005c5014[this_ptr->vertex_indices[0]].v = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[this_ptr->vertex_indices[3]].u = 0x80000;
  g_SRenderVertex_ARRAY_005c5014[this_ptr->vertex_indices[3]].v = 0x80000;
  g_SRenderVertex_ARRAY_005c5014[this_ptr->vertex_indices[2]].u = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[this_ptr->vertex_indices[2]].v = 0x80000;
  return;
}
