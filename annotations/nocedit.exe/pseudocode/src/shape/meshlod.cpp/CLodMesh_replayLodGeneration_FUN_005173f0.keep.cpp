// Name: shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0
// Address: 005173f0
// MANUAL RECONSTRUCTION
// Address Range: [[005173f0, 0051752b] [0060c51c, 0060c536]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_replayLodGeneration_FUN_005173f0(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_replayLodGeneration_FUN_005173f0(CLodMesh *this_ptr)

{
  int iVar1;
  _FILE *file_handle;
  int iVar3;
  int iVar2;
  byte bVar3;
  char local_24 [4];
  char acStack_1c [4];
  CLodEdge *pCVar1;

  bVar3 = 0;
  shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(this_ptr);
  local_24[0] = g_ReplayLodFilename[0];
  local_24[1] = g_ReplayLodFilename[1];
  local_24[2] = g_ReplayLodFilename[2];
  local_24[3] = g_ReplayLodFilename[3];
  acStack_1c[0] = g_ReplayLodFilename[8];
  acStack_1c[1] = g_ReplayLodFilename[9];
  acStack_1c[(uint)bVar3 * -4 + 2] = g_ReplayLodFilename[(uint)bVar3 * -4 + 10];
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (local_24,(char *)0x0,"rt","..\\shape\\meshlod.cpp",1525);
  if (file_handle == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",local_24);
    return;
  }
  shape_meshlod_cpp_CLodMesh_loadReplayData_FUN_0051d180(this_ptr,file_handle);
  iVar3 = 0;
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Replaying...");
  iVar1 = g_LodReplayMode;
  g_LodReplayMode = 1;
  if (0 < this_ptr->lod_level_count) {
    iVar2 = 0;
    do {
      pCVar1 = this_ptr->lod_levels_ptr + iVar2;
      iVar3 = iVar3 + 1;
      shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
                (this_ptr,pCVar1->vertex_idx_1,pCVar1->vertex_idx_2,pCVar1->collapse_error);
      iVar2 = iVar2 + 1;
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar3,(float)this_ptr->lod_level_count);
    } while (iVar3 < this_ptr->lod_level_count);
  }
  g_LodReplayMode = iVar1;
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\shape\\meshlod.cpp",1547);
  return;
}
