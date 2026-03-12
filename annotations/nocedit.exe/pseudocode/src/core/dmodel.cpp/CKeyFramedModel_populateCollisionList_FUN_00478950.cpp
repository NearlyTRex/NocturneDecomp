// Name: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
// Address: 00478950
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
  int iVar3;
  int iVar4;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  int local_30;
  CMatrix3x3f *local_2c;
  CMatrix3x3f *local_28;
  int local_24;
  int local_20;
  CMatrix3x3f *local_1c;
  CVector3i *local_18;
  int local_14;
  
  if (&this_ptr->transform_vector != transform_vector) {
    (this_ptr->transform_vector).x = transform_vector->x;
    (this_ptr->transform_vector).y = transform_vector->y;
    (this_ptr->transform_vector).z = transform_vector->z;
  }
  this_ptr_00 = &this_ptr->rotation_matrix_workspace;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (this_ptr_00,&this_ptr->transform_vector);
  local_30 = 0;
  this_ptr_01 = this_ptr->collision_triangle_list;
  if (0 < this_ptr->frame_count) {
    do {
      iVar5 = this_ptr->vertex_count * local_30;
      pCVar3 = this_ptr->vertex_list;
      local_20 = 0;
      if (0 < this_ptr->poly_count) {
        local_24 = 0;
        do {
          pSVar4 = this_ptr->poly_vert_list;
          pCVar1 = pCVar3 + iVar5 + *(int *)((int)&pSVar4->vertices[0].vertex_index + local_24);
          local_48.x = (float)pCVar1->x * 0.00390625f;
          local_48.y = (float)pCVar1->y * 0.00390625f;
          local_48.z = (float)pCVar1->z * 0.00390625f;
          pCVar6 = pCVar3 + iVar5 + *(int *)((int)&pSVar4->vertices[1].vertex_index + local_24);
          local_54.x = (float)pCVar6->x * 0.00390625f;
          local_54.y = (float)pCVar6->y * 0.00390625f;
          local_54.z = (float)pCVar6->z * 0.00390625f;
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (this_ptr_00,&local_3c,&local_48);
          if (&local_48 != pCVar2) {
            local_48.x = pCVar2->x;
            local_48.y = pCVar2->y;
            local_48.z = pCVar2->z;
          }
          pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (this_ptr_00,&local_78,&local_54);
          if (&local_54 != pCVar7) {
            local_54.x = pCVar7->x;
            local_54.y = pCVar7->y;
            local_54.z = pCVar7->z;
          }
          iVar4 = 2;
          if (2 < *(int *)((int)pSVar4->vertices + local_24 + -0x14)) {
            iVar3 = (int)&pSVar4->vertices[0].vertex_index + local_24;
            do {
              pCVar6 = pCVar3 + iVar5 + *(int *)(iVar3 + 0x18);
              local_60.x = (float)pCVar6->x * 0.00390625f;
              local_60.y = (float)pCVar6->y * 0.00390625f;
              local_60.z = (float)pCVar6->z * 0.00390625f;
              pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 (this_ptr_00,&local_6c,&local_60);
              if (&local_60 != pCVar7) {
                local_60.x = pCVar7->x;
                local_60.y = pCVar7->y;
                local_60.z = pCVar7->z;
              }
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                        (this_ptr_01,&local_48,&local_54,&local_60);
              this_ptr_01 = this_ptr_01 + 1;
              if (&local_54 != &local_60) {
                local_54.x = local_60.x;
                local_54.y = local_60.y;
                local_54.z = local_60.z;
              }
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + 0xc;
            } while (iVar4 < *(int *)((int)pSVar4->vertices + local_24 + -0x14));
          }
          local_24 = local_24 + 0x48;
          local_20 = local_20 + 1;
        } while (local_20 < this_ptr->poly_count);
      }
      local_30 = local_30 + 1;
    } while (local_30 < this_ptr->frame_count);
  }
  return;
}
