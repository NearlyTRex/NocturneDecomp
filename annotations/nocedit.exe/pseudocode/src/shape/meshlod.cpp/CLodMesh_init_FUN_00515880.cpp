// Name: shape_meshlod.cpp_CLodMesh_init_FUN_00515880
// Address: 00515880
// Address Range: [[00515880, 00515944]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_init_FUN_00515880(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_init_FUN_00515880(CLodMesh *this_ptr)

{
  this_ptr->vertex_count = 0;
  this_ptr->max_vertex_count = 0;
  this_ptr->vertex_data = (CLodVert *)0x0;
  this_ptr->tri_count = 0;
  this_ptr->max_tri_count = 0;
  this_ptr->tri_data = (CLodFace *)0x0;
  this_ptr->next_lod = (CLodMesh *)0x0;
  this_ptr->sample_point_count = 0;
  this_ptr->sample_points_ptr = (SLodSamplePoint *)0x0;
  this_ptr->edge_count = 0;
  this_ptr->edges_ptr = (CLodEdge *)0x0;
  this_ptr->lod_level_count = 0;
  this_ptr->lod_levels_ptr = (CLodEdge *)0x0;
  this_ptr->active_attribute_count = 0;
  memset(this_ptr->attribute_enabled_flags,0,0x10);
  this_ptr->sort_attribute_count = 0;
  this_ptr->extra_attribute_count = 0;
  this_ptr->lod_texture_count = 0;
  this_ptr->lod_textures = (SMRGLTextureLod *)0x0;
  this_ptr->spatial_grid_ptr = (SSpatialGrid *)0x0;
  this_ptr->spatial_grid_data = (int *)0x0;
  this_ptr->scale_factor = 1.0;
  (this_ptr->center_offset).z = 0.0;
  (this_ptr->center_offset).y = (this_ptr->center_offset).z;
  (this_ptr->center_offset).x = (this_ptr->center_offset).y;
  this_ptr->precompute_file = (_FILE *)0x0;
  return;
}
