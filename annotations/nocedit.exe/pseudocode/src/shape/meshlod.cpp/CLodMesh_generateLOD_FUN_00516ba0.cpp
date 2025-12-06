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
  CLodMesh *pCVar1;
  int iVar2;
  int iVar3;
  uint extraout_EDX;
  int unaff_EBX;
  char *pcVar4;
  char *buffer;
  CLodEdge *edge_data;
  float10 fVar5;
  double dVar6;
  float in_stack_ffffffe0;
  float in_stack_ffffffe8;
  
  shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(this_ptr);
  pCVar1 = (CLodMesh *)wincore_winrun_cpp_getTime_FUN_005f2dc0();
  while ((iVar2 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr),
         target_tri_count < iVar2 &&
         (iVar3 = shape_meshlod_cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(this_ptr), -1 < iVar3)
         )) {
    fVar5 = (float10)in_stack_ffffffe0;
    dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,iVar3 * 0xf0));
    edge_data = (CLodEdge *)
                ((int)this_ptr->edges_ptr->adjacent_tri_indices + SUB84 /* extract 2-byte value */(dVar6,0) + -0x28);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (g_LodMeshProgressBuffer,"Mesh degredation in progress...%d:%02d elapsed",(int)ROUND(fVar5) / 0x3c,
               (int)ROUND(fVar5) % 0x3c,pCVar1);
    if ((5 < unaff_EBX) && (iVar3 = this_ptr->next_lod->tri_count - iVar2, 10 < iVar3)) {
      fVar5 = ((float10)(iVar2 - target_tri_count) * (float10)in_stack_ffffffe8) / (float10)iVar3;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(target_tri_count,iVar3));
      unaff_EBX = (int)ROUND(fVar5);
      if (0 < unaff_EBX) {
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
                  (buffer,", est %d:%02d remaining",unaff_EBX / 0x3c,unaff_EBX % 0x3c);
      }
    }
    iVar2 = shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520(this_ptr,0,display_mode);
    if (iVar2 == 0) break;
    in_stack_ffffffe8 = (float)edge_data->vertex_idx_1;
    in_stack_ffffffe0 = 7.477731e-39;
    pCVar1 = this_ptr;
    shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
              (this_ptr,(int)in_stack_ffffffe8,edge_data->vertex_idx_2,edge_data->collapse_error);
    shape_meshlod_cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(this_ptr,edge_data);
    display_mode = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  shape_meshlod_cpp_CLodMesh_saveReplayData_FUN_0051d250(this_ptr,this_ptr->precompute_file);
  shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(this_ptr);
  return;
}
