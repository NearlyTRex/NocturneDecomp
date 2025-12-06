// Name: shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0
// Address: 005173f0
// Address Range: [[005173f0, 0051752b]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_replayLodGeneration_FUN_005173f0(CLodMesh *this_ptr)

{
  CLodEdge *pCVar1;
  FILE *file_handle;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int iVar3;
  byte bVar4;
  char acStackY_1402 [1018];
  ushort auStackY_1008 [2026];
  char *filename;
  char *directory;
  char *mode;
  char *source_file;
  int iVar5;
  
  bVar4 = 0;
  shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(this_ptr);
  iVar5 = 0x5f5;
  source_file = "..\\shape\\meshlod.cpp";
  mode = "rt";
  directory = (char *)0x0;
  filename = &stack0xffffffe0;
  *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8) =
       *(uint *)("replay.txt" + (uint)bVar4 * -8 + 4);
  *(ushort *)(&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(ushort *)("replay.txt" + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(char *)((int)(&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
           ((uint)bVar4 * -2 + 1) * 2) =
       ("replay.txt" + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8)[((uint)bVar4 * -2 + 1) * 2]
  ;
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0(filename,directory,mode,source_file,iVar5);
  if (file_handle == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    return;
  }
  shape_meshlod_cpp_CLodMesh_loadReplayData_FUN_0051d180(this_ptr,file_handle);
  iVar2 = 0;
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Replaying...");
  iVar5 = g_LodReplayMode;
  g_LodReplayMode = 1;
  if (0 < this_ptr->lod_level_count) {
    iVar3 = 0;
    do {
      pCVar1 = this_ptr->lod_levels_ptr;
      iVar2 = iVar2 + 1;
      shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
                (this_ptr,*(int *)((int)pCVar1->adjacent_tri_indices + iVar3 + -0x28),
                 *(int *)((int)pCVar1->adjacent_tri_indices + iVar3 + -0x24),
                 *(float *)((int)pCVar1->adjacent_tri_indices + iVar3 + -0x18));
      iVar3 = iVar3 + 0xf0;
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar2,(float)this_ptr->lod_level_count);
      iVar5 = iVar2;
    } while (iVar2 < this_ptr->lod_level_count);
  }
  g_LodReplayMode = iVar5;
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\shape\\meshlod.cpp",0x60b);
  return;
}
