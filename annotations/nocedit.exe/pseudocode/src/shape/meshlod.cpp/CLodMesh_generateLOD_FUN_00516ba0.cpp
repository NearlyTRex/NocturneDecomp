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
  float fVar3;
  char *pcVar4;
  char *buffer;
  CLodEdge *edge_data;
  double dVar5;
  float fVar6;
  float in_stack_ffffffec;
  
  shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(this_ptr);
  wincore_winrun_cpp_getTime_FUN_005f2dc0();
  while ((iVar1 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr),
         target_tri_count < iVar1 &&
         (iVar2 = shape_meshlod_cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(this_ptr), -1 < iVar2)
         )) {
    iVar2 = 0x516bfb;
    dVar5 = crt_math_c_round_FUN_005fe6b0((double)in_stack_ffffffec);
    edge_data = (CLodEdge *)((int)this_ptr->edges_ptr->adjacent_tri_indices + extraout_EAX + -0x28);
    fVar6 = 7.477486e-39;
    crt_stdio_c_sprintf_FUN_005fdbd0
              (g_LodMeshProgressBuffer,"Mesh degredation in progress...%d:%02d elapsed",(int)ROUND(dVar5) / 0x3c,
               (int)ROUND(dVar5) % 0x3c);
    if ((5 < iVar2) && (fVar3 = (float)(this_ptr->next_lod->tri_count - iVar1), 10 < (int)fVar3)) {
      dVar5 = crt_math_c_round_FUN_005fe6b0
                        ((double)(((float)(iVar1 - target_tri_count) * fVar6) / (float)(int)fVar3));
      iVar1 = (int)ROUND(dVar5);
      in_stack_ffffffec = fVar3;
      if (0 < iVar1) {
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
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (buffer,", est %d:%02d remaining",iVar1 / 0x3c,iVar1 % 0x3c);
        in_stack_ffffffec = fVar3;
      }
    }
    iVar1 = shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520(this_ptr,0,display_mode);
    if (iVar1 == 0) break;
    shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
              (this_ptr,edge_data->vertex_idx_1,edge_data->vertex_idx_2,edge_data->collapse_error);
    shape_meshlod_cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(this_ptr,edge_data);
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  shape_meshlod_cpp_CLodMesh_saveReplayData_FUN_0051d250(this_ptr,this_ptr->precompute_file);
  shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(this_ptr);
  return;
}
