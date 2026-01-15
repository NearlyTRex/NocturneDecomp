// Name: shape_meshlod.cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0
// Address: 0051d4a0
// Address Range: [[0051d4a0, 0051d51e]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(CLodMesh * this_ptr, CLodEdge * edge_data)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(CLodMesh *this_ptr,CLodEdge *edge_data)

{
  CLodEdge *pCVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar2 = this_ptr->lod_level_count + 1;
  this_ptr->lod_level_count = iVar2;
  pCVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->lod_levels_ptr,iVar2 * 0xf0,"..\\shape\\meshlod.cpp",0x14a4);
  this_ptr->lod_levels_ptr = pCVar1;
  if (pCVar1 == (CLodEdge *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x14a5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory");
  }
  pCVar1 = this_ptr->lod_levels_ptr + this_ptr->lod_level_count + -1;
  for (iVar2 = 0x3c; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar1->vertex_idx_1 = edge_data->vertex_idx_1;
    edge_data = (CLodEdge *)((int)edge_data + (uint)bVar3 * -8 + 4);
    pCVar1 = (CLodEdge *)((int)pCVar1 + (uint)bVar3 * -8 + 4);
  }
  return;
}
