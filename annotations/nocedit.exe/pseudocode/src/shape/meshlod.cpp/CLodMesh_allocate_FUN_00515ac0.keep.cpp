// Name: shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
// Address: 00515ac0
// MANUAL RECONSTRUCTION
// Address Range: [[00515ac0, 00515b93]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0(CLodMesh *this_ptr,int vertex_count,int tri_count,int lod_texture_count)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0(CLodMesh *this_ptr,int vertex_count,int tri_count,int lod_texture_count)

{
  CLodVert *pCVar1;
  CLodFace *pCVar2;
  SMRGLTextureLod *pSVar3;
  
  shape_meshlod_cpp_CLodMesh_free_FUN_00515970(this_ptr);
  this_ptr->max_vertex_count = vertex_count;
  this_ptr->vertex_count = vertex_count;
  this_ptr->max_tri_count = tri_count;
  this_ptr->tri_count = tri_count;
  this_ptr->lod_texture_count = lod_texture_count;
  pCVar1 = (CLodVert *)shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (this_ptr->max_vertex_count,sizeof(CLodVert),"..\\shape\\meshlod.cpp",561);
  this_ptr->vertex_data = pCVar1;
  pCVar2 = (CLodFace *)shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (this_ptr->max_tri_count,sizeof(CLodFace),"..\\shape\\meshlod.cpp",562);
  this_ptr->tri_data = pCVar2;
  pSVar3 = (SMRGLTextureLod *)shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (this_ptr->lod_texture_count,sizeof(SMRGLTextureLod),"..\\shape\\meshlod.cpp",563);
  this_ptr->lod_textures = pSVar3;
  if ((((this_ptr->max_vertex_count < 1) || (this_ptr->vertex_data != (CLodVert *)0x0)) &&
      ((this_ptr->max_tri_count < 1 || (this_ptr->tri_data != (CLodFace *)0x0)))) &&
     ((this_ptr->lod_texture_count < 1 || (this_ptr->lod_textures != (SMRGLTextureLod *)0x0)))) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 570;
  core_main_c_displayErrorAndQuit_FUN_00506f10("No mem!");
  return;
}
