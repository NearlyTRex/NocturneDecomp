// Name: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
// Address: 00478950
// Address Range: [[00478950, 00478bf9]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(CKeyFramedModel * this_ptr, CVector3f * transform_vector)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
          (CKeyFramedModel *this_ptr,CVector3f *transform_vector)

{
  CVector3i **ppCVar1;
  CVector3f *pCVar2;
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
  CVector3i **local_18;
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
  local_2c = this_ptr_00;
  local_28 = this_ptr_00;
  local_1c = this_ptr_00;
  if (0 < this_ptr->frame_count) {
    do {
      local_18 = this_ptr->vertex_list + this_ptr->vertex_count * local_30 * 3;
      local_20 = 0;
      if (0 < this_ptr->poly_count) {
        local_24 = 0;
        do {
          local_14 = local_24 + (int)this_ptr->poly_vert_list;
          ppCVar1 = local_18 + *(int *)(local_14 + 0x18) * 3;
          local_48.x = (float)(int)*ppCVar1 * 0.00390625f;
          local_48.y = (float)(int)ppCVar1[1] * 0.00390625f;
          local_48.z = (float)(int)ppCVar1[2] * 0.00390625f;
          ppCVar1 = local_18 + *(int *)(local_14 + 0x24) * 3;
          local_54.x = (float)(int)*ppCVar1 * 0.00390625f;
          local_54.y = (float)(int)ppCVar1[1] * 0.00390625f;
          local_54.z = (float)(int)ppCVar1[2] * 0.00390625f;
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (local_28,&local_3c,&local_48);
          if (&local_48 != pCVar2) {
            local_48.x = pCVar2->x;
            local_48.y = pCVar2->y;
            local_48.z = pCVar2->z;
          }
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (local_2c,&local_78,&local_54);
          if (&local_54 != pCVar2) {
            local_54.x = pCVar2->x;
            local_54.y = pCVar2->y;
            local_54.z = pCVar2->z;
          }
          iVar4 = 2;
          if (2 < *(int *)(local_14 + 4)) {
            iVar3 = local_14 + 0x18;
            do {
              ppCVar1 = local_18 + *(int *)(iVar3 + 0x18) * 3;
              local_60.x = (float)(int)*ppCVar1 * 0.00390625f;
              local_60.y = (float)(int)ppCVar1[1] * 0.00390625f;
              local_60.z = (float)(int)ppCVar1[2] * 0.00390625f;
              pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 (local_1c,&local_6c,&local_60);
              if (&local_60 != pCVar2) {
                local_60.x = pCVar2->x;
                local_60.y = pCVar2->y;
                local_60.z = pCVar2->z;
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
            } while (iVar4 < *(int *)(local_14 + 4));
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
