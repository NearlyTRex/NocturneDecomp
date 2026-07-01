// Name: shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
// Address: 00517000
// MANUAL RECONSTRUCTION
// Address Range: [[00517000, 005172b8]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh *this_ptr)

{
  CLodMesh *pCVar1;
  int *piVar2;
  SLodSamplePoint *pSVar3;
  SLodSamplePoint *pSVar4;
  CLodEdge *pCVar7;
  CLodVert *pCVar6;
  CLodVert *pCVar8;
  CVector3f *pCVar4;
  int iVar7;
  int iVar5;
  int sample_point_index;
  int local_1c;
  int local_18;
  CVector3f local_38;

  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 1391;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::createOrigSamplePoints unless we have an original mesh!");
  }
  pCVar1 = this_ptr->next_lod;
  iVar7 = pCVar1->vertex_count + pCVar1->edge_count + pCVar1->tri_count;
  this_ptr->sample_point_count = iVar7;
  piVar2 = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                     (iVar7 * sizeof(SLodSamplePoint) + 4,"..\\shape\\meshlod.cpp",1399);
  pSVar3 = (SLodSamplePoint *)piVar2;
  if (piVar2 != (int *)0x0) {
    pSVar3 = (SLodSamplePoint *)(piVar2 + 1);
    *piVar2 = iVar7;
  }
  this_ptr->sample_points_ptr = pSVar3;
  if (pSVar3 == (SLodSamplePoint *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 1400;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  sample_point_index = 0;
  for (local_18 = 0; local_18 < this_ptr->next_lod->vertex_count; local_18 = local_18 + 1) {
    pSVar4 = this_ptr->sample_points_ptr + sample_point_index;
    pSVar4->position = this_ptr->next_lod->vertex_data[local_18].position;
    pSVar4->weight = 1.0f;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
  }
  for (iVar5 = 0; iVar5 < this_ptr->next_lod->edge_count; iVar5 = iVar5 + 1) {
    pCVar1 = this_ptr->next_lod;
    pCVar7 = pCVar1->edges_ptr + iVar5;
    pCVar8 = pCVar1->vertex_data + pCVar7->vertex_idx_1;
    pCVar6 = pCVar1->vertex_data + pCVar7->vertex_idx_2;
    pSVar4 = this_ptr->sample_points_ptr + sample_point_index;
    pSVar4->position.x = ((pCVar8->position).x + (pCVar6->position).x) / 2.0f;
    pSVar4->position.y = ((pCVar8->position).y + (pCVar6->position).y) * 0.5f;
    pSVar4->position.z = ((pCVar8->position).z + (pCVar6->position).z) * 0.5f;
    pSVar4->weight = 0.9f;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
  }
  for (local_1c = 0; local_1c < this_ptr->next_lod->tri_count; local_1c = local_1c + 1) {
    pCVar1 = this_ptr->next_lod;
    pSVar4 = this_ptr->sample_points_ptr + sample_point_index;
    pCVar4 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
                       (pCVar1,&local_38,pCVar1->tri_data + local_1c);
    pSVar4->position = *pCVar4;
    pSVar4->weight = 0.8f;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
  }
  if (sample_point_index == this_ptr->sample_point_count) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 1480;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
  return;
}
