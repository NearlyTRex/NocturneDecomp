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
  float fStack_2c;
  int local_20;
  int local_18;
  
  shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(this_ptr);
  local_20 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  fStack_2c = 0.0;
  while( true ) {
    iVar1 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr);
    if (iVar1 <= target_tri_count) break;
    iVar2 = shape_meshlod_cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(this_ptr);
    if (iVar2 < 0) break;
    uVar5 = 0x516bfb;
    dVar4 = crt_math_c_round_FUN_005fe6b0((double)fStack_2c);
    edge_data = (CLodEdge *)((int)this_ptr->edges_ptr->adjacent_tri_indices + extraout_EAX + -0x28);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (g_LodMeshProgressBuffer,"Mesh degredation in progress...%d:%02d elapsed",(int)ROUND(dVar4) / 0x3c,
               (int)ROUND(dVar4) % 0x3c,uVar5);
    if ((5 < local_18) && (iVar2 = this_ptr->next_lod->tri_count - iVar1, 10 < iVar2)) {
      uVar5 = 0x516c6a;
      dVar4 = crt_math_c_round_FUN_005fe6b0
                        ((double)(((float)(iVar1 - target_tri_count) * fStack_2c) / (float)iVar2));
      local_20 = (int)ROUND(dVar4);
      if (0 < local_20) {
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
                  (buffer,", est %d:%02d remaining",local_20 / 0x3c,local_20 % 0x3c,uVar5);
      }
    }
    iVar1 = shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520(this_ptr,0,display_mode);
    if (iVar1 == 0) break;
    shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
              (this_ptr,edge_data->vertex_idx_1,edge_data->vertex_idx_2,edge_data->collapse_error);
    shape_meshlod_cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(this_ptr,edge_data);
    iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    local_20 = iVar1 - local_20;
    if (local_20 < 0) {
      local_20 = 0;
    }
    fStack_2c = (float)local_20 * (float)1.52587890625e-05 * (float)0.055555555555555601 + fStack_2c;
    local_20 = iVar1;
  }
  shape_meshlod_cpp_CLodMesh_saveReplayData_FUN_0051d250(this_ptr,this_ptr->precompute_file);
  shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(this_ptr);
  return;
}
