// Name: core_skeledit.cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0
// Address: 0058e3e0
// Address Range: [[0058e3e0, 0058e4df]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0(CDeformableModel *this_ptr,float scale)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0(CDeformableModel *this_ptr,float scale)

{
  float *pfVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  int iVar7;
  int local_18;
  int local_14;
  
  __STK();
  local_18 = 0;
  if (0 < this_ptr->num_lods) {
    local_14 = 0;
    do {
      iVar7 = 0;
      for (iVar4 = 0; iVar4 < *(int *)((int)this_ptr->vertex_count + local_14); iVar4 = iVar4 + 1) {
        pbVar3 = (byte *)(*(int *)((int)this_ptr->vertex_data_ptr + local_14) + iVar7);
        pfVar1 = (float *)(pbVar3 + 0x10);
        for (iVar2 = 0; iVar2 < (int)(uint)*pbVar3; iVar2 = iVar2 + 1) {
          pfVar1[1] = pfVar1[1] * scale;
          pfVar1[2] = pfVar1[2] * scale;
          *pfVar1 = *pfVar1 * scale;
          pfVar1 = pfVar1 + 3;
        }
        iVar7 = iVar7 + 0x34;
      }
      local_14 = local_14 + 4;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->num_lods);
  }
  pCVar5 = this_ptr->vertex_pool;
  do {
    pCVar6 = pCVar5 + 1;
    pCVar5->y = pCVar5->y * scale;
    pCVar5->z = pCVar5->z * scale;
    pCVar5->x = pCVar5->x * scale;
    pCVar5 = pCVar6;
  } while ((CBoundingBox3D *)pCVar6 != this_ptr->bbox_pool);
  (this_ptr->model_scale).x = (this_ptr->model_scale).x * scale;
  (this_ptr->model_scale).y = (this_ptr->model_scale).y * scale;
  (this_ptr->model_scale).z = (this_ptr->model_scale).z * scale;
  return;
}
