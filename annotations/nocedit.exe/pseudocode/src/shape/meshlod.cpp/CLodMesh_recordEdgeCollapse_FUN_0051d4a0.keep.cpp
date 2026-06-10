// Name: shape_meshlod.cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0
// Address: 0051d4a0
// MANUAL RECONSTRUCTION
// Address Range: [[0051d4a0, 0051d51e]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(CLodMesh *this_ptr,CLodEdge *edge_data)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(CLodMesh *this_ptr,CLodEdge *edge_data)

{
  CLodEdge *pCVar1;
  int iVar2;

  iVar2 = this_ptr->lod_level_count + 1;
  this_ptr->lod_level_count = iVar2;
  pCVar1 = (CLodEdge *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->lod_levels_ptr,iVar2 * 0xf0,"..\\shape\\meshlod.cpp",0x14a4);
  this_ptr->lod_levels_ptr = pCVar1;
  if (pCVar1 == (CLodEdge *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x14a5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory");
  }
  pCVar1 = this_ptr->lod_levels_ptr + this_ptr->lod_level_count + -1;
  *pCVar1 = *edge_data;
  return;
}
