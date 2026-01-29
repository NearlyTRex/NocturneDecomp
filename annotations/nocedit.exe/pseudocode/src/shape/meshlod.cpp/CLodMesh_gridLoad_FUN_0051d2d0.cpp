// Name: shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0
// Address: 0051d2d0
// Address Range: [[0051d2d0, 0051d419]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_gridLoad_FUN_0051d2d0(CLodMesh *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_gridLoad_FUN_0051d2d0(CLodMesh *this_ptr,_FILE *file_handle)

{
  SSpatialGrid *pSVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;
  
  pSVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->spatial_grid_ptr,0x4004,"..\\shape\\meshlod.cpp",0x146f);
  this_ptr->spatial_grid_ptr = pSVar1;
  if (pSVar1 == (SSpatialGrid *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1470;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  _fscanf(file_handle,"%d\n",&local_14);
  if (local_14 != 0x10) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1474;
    core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::gridLoad - file is old!");
  }
  iVar4 = 0;
  do {
    iVar5 = (int)this_ptr->spatial_grid_ptr->cell_start_indices[0][0] + iVar4;
    iVar4 = iVar4 + 4;
    _fscanf(file_handle,"%d\n",iVar5);
  } while (iVar4 != 0x4004);
  piVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->spatial_grid_data,this_ptr->spatial_grid_ptr->triangle_count << 2,
                      "..\\shape\\meshlod.cpp",0x147a);
  this_ptr->spatial_grid_data = piVar2;
  if (piVar2 == (int *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x147b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  iVar4 = 0;
  for (iVar5 = 0; iVar5 < this_ptr->spatial_grid_ptr->triangle_count; iVar5 = iVar5 + 1) {
    iVar3 = (int)this_ptr->spatial_grid_data + iVar4;
    iVar4 = iVar4 + 4;
    _fscanf(file_handle,"%d\n",iVar3);
  }
  return;
}
