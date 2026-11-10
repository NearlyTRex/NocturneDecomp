// Name: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_004620c0
// Address: 004620c0
// Address Range: [[004620c0, 00462414]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_004620c0(CKeyFramedModel *this_ptr,CVector3f *transform_vector)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_004620c0(CKeyFramedModel *this_ptr,CVector3f *transform_vector)

{
  CVector3i *pCVar1;
  CMatrix3x3f *this_ptr_00;
  int iVar2;
  byte bVar3;
  float afStackY_108c [1014];
  float local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  float local_74;
  float afStack_70 [2];
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float afStack_4c [2];
  CVector3f local_44;
  int local_38;
  CMatrix3x3f *local_34;
  CMatrix3x3f *local_30;
  int local_2c;
  int local_28;
  CMatrix3x3f *local_24;
  CVector3i *local_20;
  int local_1c;
  CDemonTriangle *local_18;
  int local_14;
  
  bVar3 = 0;
  if (&this_ptr->transform_vector != transform_vector) {
    (this_ptr->transform_vector).x = transform_vector->x;
    (this_ptr->transform_vector).y = transform_vector->y;
    (this_ptr->transform_vector).z = transform_vector->z;
  }
  this_ptr_00 = &this_ptr->rotation_matrix_workspace;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
            (this_ptr_00,&this_ptr->transform_vector);
  local_18 = this_ptr->collision_triangle_list;
  local_38 = 0;
  local_34 = this_ptr_00;
  local_30 = this_ptr_00;
  local_24 = this_ptr_00;
  if (0 < this_ptr->frame_count) {
    do {
      local_20 = this_ptr->vertex_list + this_ptr->vertex_count * local_38;
      local_28 = 0;
      if (0 < this_ptr->poly_count) {
        local_2c = 0;
        do {
          local_1c = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base)
                           .base.type + local_2c;
          pCVar1 = local_20 + *(int *)(local_1c + 0x18);
          local_80.x = (float)pCVar1->x * _DAT_005de564;
          local_80.y = (float)pCVar1->y * _DAT_005de564;
          local_80.z = (float)pCVar1->z * _DAT_005de564;
          pCVar1 = local_20 + *(int *)(local_1c + 0x24);
          local_8c.x = (float)pCVar1->x * _DAT_005de564;
          local_8c.y = (float)pCVar1->y * _DAT_005de564;
          local_8c.z = (float)pCVar1->z * _DAT_005de564;
          core_dirmat_cpp_FUN_0045b800(local_34,&local_80);
          local_44.x = local_50;
          afStack_4c[(uint)bVar3 * -2 + 3] = afStack_4c[(uint)bVar3 * -2];
          afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
               afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          if (&local_80 != (CVector3f *)(afStack_4c + 2)) {
            local_80.x = local_44.x;
            local_80.y = local_44.y;
            local_80.z = local_44.z;
          }
          core_dirmat_cpp_FUN_0045b800(local_30,&local_8c);
          local_98.x = local_a4;
          *(uint *)((int)&local_98 + (uint)bVar3 * -8 + 4) =
               *(uint *)(&stack0xffffff60 + (uint)bVar3 * -8);
          *(uint *)((int)&local_98 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
               *(uint *)(&stack0xffffff64 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (&local_8c != &local_98) {
            local_8c.x = local_98.x;
            local_8c.y = local_98.y;
            local_8c.z = local_98.z;
          }
          iVar2 = 2;
          if (2 < *(int *)(local_1c + 4)) {
            local_14 = local_1c + 0x18;
            do {
              pCVar1 = local_20 + *(int *)(local_14 + 0x18);
              local_68.x = (float)pCVar1->x * _DAT_005de564;
              local_68.y = (float)pCVar1->y * _DAT_005de564;
              local_68.z = (float)pCVar1->z * _DAT_005de564;
              core_dirmat_cpp_FUN_0045b800(local_24,&local_68);
              local_5c.x = local_74;
              *(float *)((int)&local_5c + (uint)bVar3 * -8 + 4) = afStack_70[(uint)bVar3 * -2];
              *(float *)((int)&local_5c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
                   afStack_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
              if (&local_68 != &local_5c) {
                local_68.x = local_5c.x;
                local_68.y = local_5c.y;
                local_68.z = local_5c.z;
              }
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                        (local_18,&local_80,&local_8c,&local_68);
              local_18 = local_18 + 1;
              if (&local_8c != &local_68) {
                local_8c.x = local_68.x;
                local_8c.y = local_68.y;
                local_8c.z = local_68.z;
              }
              iVar2 = iVar2 + 1;
              local_14 = local_14 + 0xc;
            } while (iVar2 < *(int *)(local_1c + 4));
          }
          local_28 = local_28 + 1;
          local_2c = local_2c + 0x48;
        } while (local_28 < this_ptr->poly_count);
      }
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->frame_count);
  }
  return;
}
