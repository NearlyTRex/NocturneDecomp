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
  int *piVar1;
  CVector3f *pCVar2;
  CMatrix3x3f *pCVar3;
  BADSPACEBASE *in_ESP;
  CDemonTriangle *this_ptr_00;
  int unaff_ESI;
  int iVar4;
  int unaff_EDI;
  int iVar5;
  int unaff_retaddr;
  CVector3f local_60;
  byte local_54 [8];
  byte local_4c [8];
  byte local_44 [8];
  float local_3c;
  CVector3f CStack_38;
  int local_2c;
  CMatrix3x3f *local_28;
  CMatrix3x3f *local_24;
  int local_20;
  int local_1c;
  CMatrix3x3f *local_18;
  int local_14;
  
  if (&this_ptr->transform_vector != transform_vector) {
    (this_ptr->transform_vector).x = transform_vector->x;
    (this_ptr->transform_vector).y = transform_vector->y;
    (this_ptr->transform_vector).z = transform_vector->z;
  }
  pCVar3 = &this_ptr->rotation_matrix_workspace;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(pCVar3,&this_ptr->transform_vector);
  local_2c = 0;
  this_ptr_00 = (CDemonTriangle *)transform_vector[0x737].y;
  local_28 = pCVar3;
  local_24 = pCVar3;
  local_18 = pCVar3;
  if (0 < (int)transform_vector[0x15].y) {
    do {
      local_14 = (int)transform_vector[0x16].y + (int)transform_vector[0x15].z * local_2c * 0xc;
      local_1c = 0;
      if (0 < (int)transform_vector[0x16].z) {
        local_20 = 0;
        do {
          pCVar3 = (CMatrix3x3f *)(local_20 + (int)transform_vector[0x17].x);
          piVar1 = (int *)((int)pCVar3->m[2].x * 0xc + local_14);
          local_44._0_4_ = (float)*piVar1 * 0.00390625f;
          local_44._4_4_ = (float)piVar1[1] * 0.00390625f;
          local_3c = (float)piVar1[2] * 0.00390625f;
          piVar1 = (int *)((int)pCVar3[1].m[0].x * 0xc + local_14);
          local_54._4_4_ = (float)*piVar1 * 0.00390625f;
          local_4c._0_4_ = (float)piVar1[1] * 0.00390625f;
          local_4c._4_4_ = (float)piVar1[2] * 0.00390625f;
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (local_24,&CStack_38,(CVector3f *)local_44);
          if ((CVector3f *)(local_44 + 4) != pCVar2) {
            local_44._4_4_ = pCVar2->x;
            local_3c = pCVar2->y;
            CStack_38.x = pCVar2->z;
          }
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (local_24,(CVector3f *)&stack0xffffff90,(CVector3f *)local_4c);
          if ((CVector3f *)(local_4c + 4) != pCVar2) {
            local_4c._4_4_ = pCVar2->x;
            local_44._0_4_ = pCVar2->y;
            local_44._4_4_ = pCVar2->z;
          }
          iVar5 = 2;
          if (2 < *(int *)(unaff_ESI + 4)) {
            iVar4 = unaff_ESI + 0x18;
            do {
              piVar1 = (int *)(*(int *)(iVar4 + 0x18) * 0xc + unaff_EDI);
              local_54._0_4_ = (float)*piVar1 * 0.00390625f;
              local_54._4_4_ = (float)piVar1[1] * 0.00390625f;
              local_4c._0_4_ = (float)piVar1[2] * 0.00390625f;
              pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 (pCVar3,&local_60,(CVector3f *)local_54);
              if ((CVector3f *)(local_54 + 4) != pCVar2) {
                local_54._4_4_ = pCVar2->x;
                local_4c._0_4_ = pCVar2->y;
                local_4c._4_4_ = pCVar2->z;
              }
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                        (this_ptr_00,&CStack_38,(CVector3f *)local_44,(CVector3f *)(local_54 + 4));
              this_ptr_00 = this_ptr_00 + 1;
              if (local_44 + 4 != local_4c) {
                local_44._4_4_ = local_4c._0_4_;
                local_3c = (float)local_4c._4_4_;
                CStack_38.x = (float)local_44._0_4_;
              }
              iVar5 = iVar5 + 1;
              iVar4 = iVar4 + 0xc;
            } while (iVar5 < *(int *)(unaff_retaddr + 4));
          }
          local_20 = local_20 + 0x48;
          local_1c = local_1c + 1;
        } while (local_1c < (int)transform_vector[0x16].z);
      }
      local_2c = local_2c + 1;
    } while (local_2c < (int)transform_vector[0x15].y);
  }
  return;
}
