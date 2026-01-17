// Name: shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0
// Address: 00516ba0
// Address Range: [[00516ba0, 00516d46]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0(CLodMesh * this_ptr, int target_tri_count, uint display_mode)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0
          (CLodMesh *this_ptr,int target_tri_count,uint display_mode)

{
  int iVar1;
  int iVar2;
  int extraout_EAX;
  char *pcVar3;
  char *buffer;
  CLodEdge *edge_data;
  double dVar4;
  uint uVar5;
  float fVar6;
  float local_30;
  int local_24;
  
  shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(this_ptr);
  local_24 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  local_30 = 0.0;
  while( true ) {
    iVar1 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr);
    if (iVar1 <= target_tri_count) break;
    iVar2 = shape_meshlod_cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(this_ptr);
    if (iVar2 < 0) break;
    fVar6 = 7.477411e-39;
    dVar4 = crt_math_c_round_FUN_005fe6b0((double)local_30);
    iVar2 = (int)ROUND(dVar4);
    edge_data = (CLodEdge *)((int)this_ptr->edges_ptr->adjacent_tri_indices + extraout_EAX + -0x28);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (g_LodMeshProgressBuffer,"Mesh degredation in progress...%d:%02d elapsed",iVar2 / 0x3c,iVar2 % 0x3c
              );
    if ((5 < iVar2) && (iVar2 = this_ptr->next_lod->tri_count - iVar1, 10 < iVar2)) {
      uVar5 = 0x516c6a;
      dVar4 = crt_math_c_round_FUN_005fe6b0
                        ((double)(((float)(iVar1 - target_tri_count) * fVar6) / (float)iVar2));
      iVar1 = (int)ROUND(dVar4);
      if (0 < iVar1) {
        pcVar3 = g_LodMeshProgressBuffer;
        do {
          buffer = pcVar3;
          if (*pcVar3 == '\0') goto LAB_00516cb3;
          if (*pcVar3 == '\0') break;
          buffer = pcVar3 + 1;
          if (*buffer == '\0') goto LAB_00516cb3;
          pcVar3 = pcVar3 + 2;
        } while (*buffer != '\0');
        buffer = (char *)0x0;
LAB_00516cb3:
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (buffer,", est %d:%02d remaining",iVar1 / 0x3c,iVar1 % 0x3c,uVar5);
      }
    }
    iVar1 = shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520(this_ptr,0,display_mode);
    if (iVar1 == 0) break;
    shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
              (this_ptr,edge_data->vertex_idx_1,edge_data->vertex_idx_2,edge_data->collapse_error);
    shape_meshlod_cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(this_ptr,edge_data);
    iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    local_24 = iVar1 - local_24;
    if (local_24 < 0) {
      local_24 = 0;
    }
    local_30 = (float)local_24 * (float)1.52587890625e-05 * (float)0.055555555555555601 + local_30;
    local_24 = iVar1;
  }
  shape_meshlod_cpp_CLodMesh_saveReplayData_FUN_0051d250(this_ptr,this_ptr->precompute_file);
  shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(this_ptr);
  return;
}
