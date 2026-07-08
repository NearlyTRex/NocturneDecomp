// Name: shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
// Address: 0051a8c0
// MANUAL RECONSTRUCTION
// Address Range: [[0051a8c0, 0051a97f]]
// Convention: __cdecl
// Signature: CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(CLodMesh *this_ptr,CLodMesh *source_mesh)

#include "nocturne.h"

CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(CLodMesh *this_ptr,CLodMesh *source_mesh)

{
  byte bVar11;
  
  bVar11 = 0;
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0
            (this_ptr,source_mesh->vertex_count,source_mesh->tri_count,
             source_mesh->lod_texture_count);
  memcpy(this_ptr->vertex_data,source_mesh->vertex_data,this_ptr->vertex_count * sizeof(*this_ptr->vertex_data));
  memcpy(this_ptr->tri_data,source_mesh->tri_data,this_ptr->tri_count * sizeof(*this_ptr->tri_data));
  memcpy(this_ptr->lod_textures,source_mesh->lod_textures,this_ptr->lod_texture_count * sizeof(*this_ptr->lod_textures));
  memcpy(&this_ptr->active_attribute_count,&source_mesh->active_attribute_count,0xc);
  memcpy(this_ptr->attribute_enabled_flags,source_mesh->attribute_enabled_flags,0x10);
  return this_ptr;
}
