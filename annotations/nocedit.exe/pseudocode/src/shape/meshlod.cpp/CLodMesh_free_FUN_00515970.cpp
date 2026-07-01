// Name: shape_meshlod.cpp_CLodMesh_free_FUN_00515970
// Address: 00515970
// Address Range: [[00515970, 00515ab4]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_free_FUN_00515970(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_free_FUN_00515970(CLodMesh *this_ptr)

{
  CLodMesh *ptr;
  
  shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(this_ptr);
  if (this_ptr->vertex_data != (CLodVert *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->vertex_data,"..\\shape\\meshlod.cpp",535);
  }
  if (this_ptr->tri_data != (CLodFace *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->tri_data,"..\\shape\\meshlod.cpp",536);
  }
  if (this_ptr->edges_ptr != (CLodEdge *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->edges_ptr,"..\\shape\\meshlod.cpp",537);
  }
  if (this_ptr->spatial_grid_data != (int *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->spatial_grid_data,"..\\shape\\meshlod.cpp",538);
  }
  if (this_ptr->spatial_grid_ptr != (SSpatialGrid *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->spatial_grid_ptr,"..\\shape\\meshlod.cpp",539);
  }
  if (this_ptr->lod_levels_ptr != (CLodEdge *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->lod_levels_ptr,"..\\shape\\meshlod.cpp",540);
  }
  if (this_ptr->lod_textures != (SMRGLTextureLod *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->lod_textures,"..\\shape\\meshlod.cpp",541);
  }
  g_CurrentDebugLine = 0x21f;
  g_CurrentDebugFilename = "..\\shape\\meshlod.cpp";
  if (this_ptr->sample_points_ptr != (SLodSamplePoint *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(&this_ptr->sample_points_ptr[-1].weight);
  }
  g_CurrentDebugLine = 0x220;
  g_CurrentDebugFilename = "..\\shape\\meshlod.cpp";
  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    shape_meshlod_cpp_CLodMesh_init_FUN_00515880(this_ptr);
    return;
  }
  ptr = shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(this_ptr->next_lod,0);
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  shape_meshlod_cpp_CLodMesh_init_FUN_00515880(this_ptr);
  return;
}
