// Name: core_skeledit.cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0
// Address: 0058e3e0
// MANUAL RECONSTRUCTION
// Address Range: [[0058e3e0, 0058e4df]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0(CDeformableModel *this_ptr,float scale)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0(CDeformableModel *this_ptr,float scale)

{
  CVector3f *pCVar1;
  int iVar2;
  SVert *pSVar3;
  int iVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  int local_18;

  local_18 = 0;
  if (0 < this_ptr->num_lods) {
    do {
      for (iVar4 = 0; iVar4 < this_ptr->vertex_count[local_18]; iVar4 = iVar4 + 1) {
        pSVar3 = &this_ptr->vertex_data_ptr[local_18][iVar4];
        pCVar1 = &pSVar3->position;
        for (iVar2 = 0; iVar2 < (int)(uint)pSVar3->num_bone_influences; iVar2 = iVar2 + 1) {
          pCVar1->y = pCVar1->y * scale;
          pCVar1->z = pCVar1->z * scale;
          pCVar1->x = pCVar1->x * scale;
          pCVar1 = pCVar1 + 1;
        }
      }
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
