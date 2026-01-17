// Name: shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
// Address: 00517000
// Address Range: [[00517000, 005172b8]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh *this_ptr)

{
  CLodMesh *pCVar1;
  int *piVar2;
  SLodSamplePoint *pSVar3;
  CVector3f *pCVar4;
  uint *puVar5;
  CLodVert *pCVar6;
  int iVar7;
  CLodVert *pCVar8;
  int sample_point_index;
  CVector3f *pCVar9;
  char *pcVar10;
  float *pfVar11;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  CVector3f local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CLodVert *local_14;
  
  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x56f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::createOrigSamplePoints unless we have an original mesh!");
  }
  pCVar1 = this_ptr->next_lod;
  iVar7 = pCVar1->vertex_count + pCVar1->edge_count + pCVar1->tri_count;
  this_ptr->sample_point_count = iVar7;
  piVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (iVar7 * 0x1c + 4,"..\\shape\\meshlod.cpp",0x577);
  pSVar3 = (SLodSamplePoint *)0x0;
  if (piVar2 != (int *)0x0) {
    pSVar3 = (SLodSamplePoint *)(piVar2 + 1);
    *piVar2 = iVar7;
  }
  this_ptr->sample_points_ptr = pSVar3;
  if (pSVar3 == (SLodSamplePoint *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x578;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  sample_point_index = 0;
  iVar7 = 0;
  local_24 = 0;
  for (local_18 = 0; local_18 < this_ptr->next_lod->vertex_count; local_18 = local_18 + 1) {
    pcVar10 = this_ptr->next_lod->vertex_data->lod_workspace + iVar7 + -0x10;
    puVar5 = (uint *)((int)&(this_ptr->sample_points_ptr->position).x + local_24);
    if ((char *)puVar5 != pcVar10) {
      *puVar5 = *(uint *)pcVar10;
      puVar5[1] = *(uint *)(pcVar10 + 4);
      puVar5[2] = *(uint *)(pcVar10 + 8);
    }
    iVar7 = iVar7 + 0x4c4;
    puVar5[6] = 0x3f800000;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
    local_24 = local_24 + 0x1c;
  }
  iVar7 = 0;
  local_20 = sample_point_index * 0x1c;
  local_28 = 0;
  while( true ) {
    pCVar1 = this_ptr->next_lod;
    if (pCVar1->edge_count <= iVar7) break;
    piVar2 = (int *)((int)pCVar1->edges_ptr->adjacent_tri_indices + local_28 + -0x28);
    pfVar11 = (float *)((int)&(this_ptr->sample_points_ptr->position).x + local_20);
    local_14 = pCVar1->vertex_data;
    pCVar6 = local_14 + piVar2[1];
    pCVar8 = local_14 + *piVar2;
    local_44 = (pCVar8->position).x + (pCVar6->position).x;
    local_50 = local_44 / 2.0f;
    local_40 = (pCVar8->position).y + (pCVar6->position).y;
    local_3c = (pCVar8->position).z + (pCVar6->position).z;
    local_4c = local_40 * 0.5f;
    local_48 = local_3c * 0.5f;
    if (pfVar11 != &local_50) {
      *pfVar11 = local_50;
      pfVar11[1] = local_4c;
      pfVar11[2] = local_48;
    }
    iVar7 = iVar7 + 1;
    pfVar11[6] = 0.9;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
    local_28 = local_28 + 0xf0;
    local_20 = local_20 + 0x1c;
  }
  iVar7 = 0;
  local_2c = sample_point_index * 0x1c;
  local_1c = 0;
  while( true ) {
    pCVar1 = this_ptr->next_lod;
    if (pCVar1->tri_count <= local_1c) break;
    pCVar9 = (CVector3f *)((int)&(this_ptr->sample_points_ptr->position).x + local_2c);
    pCVar4 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
                       (pCVar1,&local_38,
                        (CLodFace *)((int)pCVar1->tri_data->attribute_indices + iVar7));
    if (pCVar9 != pCVar4) {
      pCVar9->x = pCVar4->x;
      pCVar9->y = pCVar4->y;
      pCVar9->z = pCVar4->z;
    }
    iVar7 = iVar7 + 0x8c;
    pCVar9[2].x = 0.8;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
    local_1c = local_1c + 1;
    local_2c = local_2c + 0x1c;
  }
  if (sample_point_index == this_ptr->sample_point_count) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0x5c8;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
  return;
}
