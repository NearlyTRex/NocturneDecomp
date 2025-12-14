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
  float fVar3;
  int *piVar4;
  SLodSamplePoint *pSVar5;
  CVector3f *pCVar6;
  uint *puVar7;
  CLodVert *pCVar8;
  int iVar9;
  CLodVert *pCVar10;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int sample_point_index;
  CVector3f *pCVar11;
  char *pcVar12;
  float *pfVar13;
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
  iVar9 = pCVar1->vertex_count + pCVar1->edge_count + pCVar1->tri_count;
  this_ptr->sample_point_count = iVar9;
  piVar4 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (iVar9 * 0x1c + 4,"..\\shape\\meshlod.cpp",0x577);
  pSVar5 = (SLodSamplePoint *)0x0;
  if (piVar4 != (int *)0x0) {
    pSVar5 = (SLodSamplePoint *)(piVar4 + 1);
    *piVar4 = iVar9;
  }
  this_ptr->sample_points_ptr = pSVar5;
  if (pSVar5 == (SLodSamplePoint *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x578;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  sample_point_index = 0;
  iVar9 = 0;
  local_18 = 0;
  while (0 < this_ptr->next_lod->vertex_count) {
    pcVar12 = this_ptr->next_lod->vertex_data->lod_workspace + iVar9 + -0x10;
    puVar7 = (uint *)((int)&(this_ptr->sample_points_ptr->position).x + local_18);
    if ((char *)puVar7 != pcVar12) {
      *puVar7 = *(uint *)pcVar12;
      puVar7[1] = *(uint *)(pcVar12 + 4);
      puVar7[2] = *(uint *)(pcVar12 + 8);
    }
    iVar9 = iVar9 + 0x4c4;
    puVar7[6] = 0x3f800000;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
    local_14 = local_14 + 0x1c;
  }
  iVar9 = 0;
  local_14 = sample_point_index * 0x1c;
  local_1c = 0;
  while( true ) {
    pCVar1 = this_ptr->next_lod;
    if (pCVar1->edge_count <= iVar9) break;
    piVar4 = (int *)((int)pCVar1->edges_ptr->adjacent_tri_indices + local_1c + -0x28);
    pfVar13 = (float *)((int)&(this_ptr->sample_points_ptr->position).x + local_14);
    pCVar8 = pCVar1->vertex_data + piVar4[1];
    pCVar10 = pCVar1->vertex_data + *piVar4;
    fVar2 = ((pCVar10->position).y + (pCVar8->position).y) * 0.5f;
    fVar3 = ((pCVar10->position).z + (pCVar8->position).z) * 0.5f;
    if (pfVar13 != (float *)&stack0xffffffbc) {
      *pfVar13 = ((pCVar10->position).x + (pCVar8->position).x) / 2f;
      pfVar13[1] = fVar2;
      pfVar13[2] = fVar3;
    }
    iVar9 = iVar9 + 1;
    pfVar13[6] = 0.9;
    shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
              (this_ptr,sample_point_index);
    sample_point_index = sample_point_index + 1;
    local_18 = local_18 + 0xf0;
    local_14 = unaff_EBP + 0x1c;
  }
  iVar9 = 0;
  local_20 = sample_point_index * 0x1c;
  while( true ) {
    pCVar1 = this_ptr->next_lod;
    if (pCVar1->tri_count < 1) break;
    pCVar11 = (CVector3f *)((int)&(this_ptr->sample_points_ptr->position).x + local_20);
    pCVar6 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
                       (pCVar1,&local_2c,
                        (CLodFace *)((int)pCVar1->tri_data->attribute_indices + iVar9));
    if (pCVar11 != pCVar6) {
      pCVar11->x = pCVar6->x;
      pCVar11->y = pCVar6->y;
      pCVar11->z = pCVar6->z;
    }
    iVar9 = iVar9 + 0x8c;
    pCVar11[2].x = 0.8;
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
