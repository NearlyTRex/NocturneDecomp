// Name: shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
// Address: 00517000
// Address Range: [[00517000, 005172b8]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(CLodMesh *this_ptr)

{
  CLodMesh *pCVar1;
  float fVar2;
  SLodSamplePoint *pSVar3;
  SLodSamplePoint *pSVar4;
  CVector3f *pCVar5;
  uint *puVar6;
  CLodVert *pCVar7;
  float fVar8;
  int *piVar9;
  CLodVert *pCVar10;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar11;
  int sample_point_index;
  CVector3f *pCVar12;
  char *pcVar13;
  float *pfVar14;
  CVector3f local_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x56f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::createOrigSamplePoints unless we have an original mesh!");
  }
  pCVar1 = this_ptr->next_lod;
  fVar8 = (float)(pCVar1->vertex_count + pCVar1->edge_count + pCVar1->tri_count);
  this_ptr->sample_point_count = (int)fVar8;
  pSVar3 = (SLodSamplePoint *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((int)fVar8 * 0x1c + 4,"..\\shape\\meshlod.cpp",0x577);
  pSVar4 = pSVar3;
  if (pSVar3 != (SLodSamplePoint *)0x0) {
    pSVar4 = (SLodSamplePoint *)&(pSVar3->position).y;
    (pSVar3->position).x = fVar8;
  }
  this_ptr->sample_points_ptr = pSVar4;
  if (pSVar4 == (SLodSamplePoint *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x578;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  sample_point_index = 0;
  iVar11 = 0;
  local_18 = 0;
  while (0 < this_ptr->next_lod->vertex_count) {
    pcVar13 = this_ptr->next_lod->vertex_data->lod_workspace + iVar11 + -0x10;
    puVar6 = (uint *)((int)&(this_ptr->sample_points_ptr->position).x + local_18);
    if ((char *)puVar6 != pcVar13) {
      *puVar6 = *(uint *)pcVar13;
      puVar6[1] = *(uint *)(pcVar13 + 4);
      puVar6[2] = *(uint *)(pcVar13 + 8);
    }
    iVar11 = iVar11 + 0x4c4;
    puVar6[6] = 0x3f800000;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
    local_14 = local_14 + 0x1c;
  }
  iVar11 = 0;
  local_14 = sample_point_index * 0x1c;
  local_1c = 0;
  while( true ) {
    pCVar1 = this_ptr->next_lod;
    if (pCVar1->edge_count <= iVar11) break;
    piVar9 = (int *)((int)pCVar1->edges_ptr->adjacent_tri_indices + local_1c + -0x28);
    pfVar14 = (float *)((int)&(this_ptr->sample_points_ptr->position).x + local_14);
    pCVar7 = pCVar1->vertex_data + piVar9[1];
    pCVar10 = pCVar1->vertex_data + *piVar9;
    fVar8 = ((pCVar10->position).y + (pCVar7->position).y) * 0.5f;
    fVar2 = ((pCVar10->position).z + (pCVar7->position).z) * 0.5f;
    if (pfVar14 != (float *)&stack0xffffffbc) {
      *pfVar14 = ((pCVar10->position).x + (pCVar7->position).x) / 2f;
      pfVar14[1] = fVar8;
      pfVar14[2] = fVar2;
    }
    iVar11 = iVar11 + 1;
    pfVar14[6] = 0.9;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
    local_18 = local_18 + 0xf0;
    local_14 = unaff_EBP + 0x1c;
  }
  iVar11 = 0;
  local_20 = sample_point_index * 0x1c;
  while( true ) {
    pCVar1 = this_ptr->next_lod;
    if (pCVar1->tri_count < 1) break;
    pCVar12 = (CVector3f *)((int)&(this_ptr->sample_points_ptr->position).x + local_20);
    pCVar5 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
                       (pCVar1,&local_2c,
                        (CLodFace *)((int)pCVar1->tri_data->attribute_indices + iVar11));
    if (pCVar12 != pCVar5) {
      pCVar12->x = pCVar5->x;
      pCVar12->y = pCVar5->y;
      pCVar12->z = pCVar5->z;
    }
    iVar11 = iVar11 + 0x8c;
    pCVar12[2].x = 0.8;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
    local_20 = local_18 + 0x1c;
  }
  if (sample_point_index == this_ptr->sample_point_count) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0x5c8;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
  return;
}
