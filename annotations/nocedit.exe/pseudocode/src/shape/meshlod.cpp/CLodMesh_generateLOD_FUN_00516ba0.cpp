// Name: shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0
// Address: 00516ba0
// Address Range: [[00516ba0, 00516d46]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(CLodMesh *this_ptr,int target_tri_count,uint display_mode)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(CLodMesh *this_ptr,int target_tri_count,uint display_mode)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *buffer;
  CLodEdge *edge_data;
  double dVar5;
  uint uVar6;
  float fVar7;
  float local_30;
  int local_24;
  
  shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(this_ptr);
  local_24 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  local_30 = 0.0;
  while( true ) {
    iVar2 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr);
    if (iVar2 <= target_tri_count) break;
    iVar3 = shape_meshlod_cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(this_ptr);
    if (iVar3 < 0) break;
    fVar7 = 7.477411e-39;
    dVar5 = round((double)local_30);
    iVar1 = (int)ROUND(dVar5);
    edge_data = this_ptr->edges_ptr + iVar3;
    _sprintf
              (g_LodMeshProgressBuffer,"Mesh degredation in progress...%d:%02d elapsed",iVar1 / 0x3c,iVar1 % 0x3c
              );
    if ((5 < iVar1) && (iVar3 = this_ptr->next_lod->tri_count - iVar2, 10 < iVar3)) {
      uVar6 = 0x516c6a;
      dVar5 = round
                        ((double)(((float)(iVar2 - target_tri_count) * fVar7) / (float)iVar3));
      iVar2 = (int)ROUND(dVar5);
      if (0 < iVar2) {
        pcVar4 = g_LodMeshProgressBuffer;
        do {
          buffer = pcVar4;
          if (*pcVar4 == '\0') goto LAB_00516cb3;
          if (*pcVar4 == '\0') break;
          buffer = pcVar4 + 1;
          if (*buffer == '\0') goto LAB_00516cb3;
          pcVar4 = pcVar4 + 2;
        } while (*buffer != '\0');
        buffer = (char *)0x0;
LAB_00516cb3:
        _sprintf
                  (buffer,", est %d:%02d remaining",iVar2 / 0x3c,iVar2 % 0x3c,uVar6);
      }
    }
    iVar2 = shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520(this_ptr,0,display_mode);
    if (iVar2 == 0) break;
    shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
              (this_ptr,edge_data->vertex_idx_1,edge_data->vertex_idx_2,edge_data->collapse_error);
    shape_meshlod_cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(this_ptr,edge_data);
    iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    local_24 = iVar2 - local_24;
    if (local_24 < 0) {
      local_24 = 0;
    }
    local_30 = (float)local_24 * (float)1.52587890625e-05 * (float)0.055555555555555601 + local_30;
    local_24 = iVar2;
  }
  shape_meshlod_cpp_CLodMesh_saveReplayData_FUN_0051d250(this_ptr,this_ptr->precompute_file);
  shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(this_ptr);
  return;
}
