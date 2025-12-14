// Name: shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0
// Address: 0051d2d0
// Address Range: [[0051d2d0, 0051d419]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0(CLodMesh * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_gridLoad_FUN_0051d2d0(CLodMesh *this_ptr,FILE *file_handle)

{
  SSpatialGrid *pSVar1;
  int *piVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  
  pSVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->spatial_grid_ptr,0x4004,"..\\shape\\meshlod.cpp",0x146f);
  this_ptr->spatial_grid_ptr = pSVar1;
  if (pSVar1 == (SSpatialGrid *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1470;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&stack0xfffffff4);
  if (unaff_ESI != 0x10) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1474;
    core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::gridLoad - file is old!");
  }
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 4;
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  } while (iVar3 != 0x4004);
  piVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->spatial_grid_data,this_ptr->spatial_grid_ptr->triangle_count << 2,
                      "..\\shape\\meshlod.cpp",0x147a);
  this_ptr->spatial_grid_data = piVar2;
  if (piVar2 == (int *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x147b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  for (iVar3 = 0; iVar3 < this_ptr->spatial_grid_ptr->triangle_count; iVar3 = iVar3 + 1) {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  }
  return;
}
