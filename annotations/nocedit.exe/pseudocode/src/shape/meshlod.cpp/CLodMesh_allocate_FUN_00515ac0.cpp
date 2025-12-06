// Name: shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
// Address: 00515ac0
// Address Range: [[00515ac0, 00515b93]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0(CLodMesh * this_ptr, int vertex_count, int tri_count, int submesh_count)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0
          (CLodMesh *this_ptr,int vertex_count,int tri_count,int submesh_count)

{
  CLodVert *pCVar1;
  CLodFace *pCVar2;
  SLodSubmesh *pSVar3;
  int in_stack_00000014;
  
  shape_meshlod_cpp_CLodMesh_free_FUN_00515970(this_ptr);
  this_ptr->max_vertex_count = tri_count;
  this_ptr->vertex_count = tri_count;
  this_ptr->max_tri_count = submesh_count;
  this_ptr->tri_count = submesh_count;
  this_ptr->submesh_count = in_stack_00000014;
  pCVar1 = (CLodVert *)
           shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (this_ptr->max_vertex_count,0x4c4,"..\\shape\\meshlod.cpp",0x231);
  this_ptr->vertex_data = pCVar1;
  pCVar2 = (CLodFace *)
           shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (this_ptr->max_tri_count,0x8c,"..\\shape\\meshlod.cpp",0x232);
  this_ptr->tri_data = pCVar2;
  pSVar3 = (SLodSubmesh *)
           shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (this_ptr->submesh_count,0x48,"..\\shape\\meshlod.cpp",0x233);
  this_ptr->submesh_data = pSVar3;
  if ((((this_ptr->max_vertex_count < 1) || (this_ptr->vertex_data != (CLodVert *)0x0)) &&
      ((this_ptr->max_tri_count < 1 || (this_ptr->tri_data != (CLodFace *)0x0)))) &&
     ((this_ptr->submesh_count < 1 || (this_ptr->submesh_data != (SLodSubmesh *)0x0)))) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0x23a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("No mem!");
  return;
}
