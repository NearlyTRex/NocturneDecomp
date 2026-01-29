// Name: shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180
// Address: 0051d180
// Address Range: [[0051d180, 0051d24c]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_loadReplayData_FUN_0051d180(CLodMesh *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_loadReplayData_FUN_0051d180(CLodMesh *this_ptr,_FILE *file_handle)

{
  CLodEdge *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (this_ptr->lod_levels_ptr != (CLodEdge *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->lod_levels_ptr,"..\\shape\\meshlod.cpp",0x1441);
  }
  _fscanf(file_handle,"%d\n",&this_ptr->lod_level_count);
  pCVar1 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (this_ptr->lod_level_count,0xf0,"..\\shape\\meshlod.cpp",0x1446);
  this_ptr->lod_levels_ptr = pCVar1;
  if (pCVar1 == (CLodEdge *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1447;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  iVar4 = 0;
  if (0 < this_ptr->lod_level_count) {
    iVar3 = 0;
    do {
      iVar2 = (int)this_ptr->lod_levels_ptr->adjacent_tri_indices + iVar3 + -0x28;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xf0;
      _fscanf(file_handle,"%d,%d,%lg,%g\n",iVar2,iVar2 + 4,iVar2 + 8,iVar2 + 0x10);
    } while (iVar4 < this_ptr->lod_level_count);
  }
  return;
}
