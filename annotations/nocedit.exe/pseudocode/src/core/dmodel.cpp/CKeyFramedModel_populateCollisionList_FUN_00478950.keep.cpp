// Name: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
// Address: 00478950
// MANUAL RECONSTRUCTION
// Address Range: [[00478950, 00478bf9]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(CKeyFramedModel *this_ptr,CVector3f *transform_vector)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(CKeyFramedModel *this_ptr,CVector3f *transform_vector)

{
  CVector3i *pCVar3;
  SMRGLPrimitiveQuad *pSVar4;
  int iVar5;
  CVector3i *pCVar1;
  CVector3i *pCVar6;
  CVector3f *pCVar2;
  CVector3f *pCVar7;
  CMatrix3x3f *this_ptr_00;
  CDemonTriangle *this_ptr_01;
  int iVar4;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  int local_30;
  int local_20;

  if (&this_ptr->transform_vector != transform_vector) {
    this_ptr->transform_vector = *transform_vector;
  }
  this_ptr_00 = &this_ptr->rotation_matrix_workspace;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (this_ptr_00,&this_ptr->transform_vector);
  this_ptr_01 = this_ptr->collision_triangle_list;
  if (0 < this_ptr->frame_count) {
    for (local_30 = 0; local_30 < this_ptr->frame_count; local_30 = local_30 + 1) {
      iVar5 = this_ptr->vertex_count * local_30;
      pCVar3 = this_ptr->vertex_list;
      if (0 < this_ptr->poly_count) {
        for (local_20 = 0; local_20 < this_ptr->poly_count; local_20 = local_20 + 1) {
          pSVar4 = this_ptr->poly_vert_list + local_20;
          pCVar1 = pCVar3 + iVar5 + pSVar4->vertices[0].vertex_index;
          local_48.x = (float)pCVar1->x * 0.00390625f;
          local_48.y = (float)pCVar1->y * 0.00390625f;
          local_48.z = (float)pCVar1->z * 0.00390625f;
          pCVar6 = pCVar3 + iVar5 + pSVar4->vertices[1].vertex_index;
          local_54.x = (float)pCVar6->x * 0.00390625f;
          local_54.y = (float)pCVar6->y * 0.00390625f;
          local_54.z = (float)pCVar6->z * 0.00390625f;
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (this_ptr_00,&local_3c,&local_48);
          if (&local_48 != pCVar2) {
            local_48 = *pCVar2;
          }
          pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (this_ptr_00,&local_78,&local_54);
          if (&local_54 != pCVar7) {
            local_54 = *pCVar7;
          }
          if (2 < pSVar4->base.base.count) {
            for (iVar4 = 2; iVar4 < pSVar4->base.base.count; iVar4 = iVar4 + 1) {
              pCVar6 = pCVar3 + iVar5 + pSVar4->vertices[iVar4].vertex_index;
              local_60.x = (float)pCVar6->x * 0.00390625f;
              local_60.y = (float)pCVar6->y * 0.00390625f;
              local_60.z = (float)pCVar6->z * 0.00390625f;
              pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 (this_ptr_00,&local_6c,&local_60);
              if (&local_60 != pCVar7) {
                local_60 = *pCVar7;
              }
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                        (this_ptr_01,&local_48,&local_54,&local_60);
              this_ptr_01 = this_ptr_01 + 1;
              local_54 = local_60;
            }
          }
        }
      }
    }
  }
  return;
}
