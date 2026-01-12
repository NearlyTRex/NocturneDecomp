// Name: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
// Address: 004781d0
// Address Range: [[004781d0, 0047864a]]
// Convention: __cdecl
// Signature: float core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0(CKeyFramedModel * this_ptr, int frame_index, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * output_normal)

#include "nocturne.h"

float __cdecl
core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0
          (CKeyFramedModel *this_ptr,int frame_index,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *output_normal)

{
  float fVar1;
  CVector3i *pCVar2;
  CVector3f *pCVar3;
  CMatrix3x3f *matrix;
  CDemonTriangle *triangle;
  BADSPACEBASE *in_ESP;
  int iVar4;
  CDemonTriangle CStack_cc;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f local_64;
  byte local_58 [8];
  float local_50;
  CVector3f CStack_4c;
  CVector3f local_40;
  CVector3i *local_34;
  float local_30;
  CMatrix3x3f *local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  fVar1 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                    ((CBoundingBox3D *)(this_ptr->frame_bounds + frame_index * 2),ray_origin,
                     ray_direction,(CVector3f *)0x0);
  if ((fVar1 < 0.0) || (1.0 < fVar1)) {
    local_30 = 2.0;
  }
  else {
    local_1c = 2.0;
    if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
      local_34 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(this_ptr,frame_index)
      ;
      local_28 = 0;
      if (0 < this_ptr->poly_count) {
        local_24 = 0;
        do {
          local_20 = local_24 + (int)this_ptr->poly_vert_list;
          pCVar2 = local_34 + *(int *)(local_20 + 0x18);
          local_64.x = (float)pCVar2->x * 0.00390625f;
          local_64.y = (float)pCVar2->y * 0.00390625f;
          local_64.z = (float)pCVar2->z * 0.00390625f;
          pCVar2 = local_34 + *(int *)(local_20 + 0x24);
          local_58._0_4_ = (float)pCVar2->x * 0.00390625f;
          local_58._4_4_ = (float)pCVar2->y * 0.00390625f;
          local_50 = (float)pCVar2->z * 0.00390625f;
          iVar4 = 2;
          if (2 < *(int *)(local_20 + 4)) {
            local_18 = local_20 + 0x18;
            do {
              pCVar2 = local_34 + *(int *)(local_18 + 0x18);
              local_40.x = (float)pCVar2->x * 0.00390625f;
              local_40.y = (float)pCVar2->y * 0.00390625f;
              local_40.z = (float)pCVar2->z * 0.00390625f;
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                        (&CStack_cc,&local_64,(CVector3f *)local_58,&local_40);
              if ((CVector3f *)(local_58 + 4) != &local_40) {
                local_58._0_4_ = local_40.x;
                local_58._4_4_ = local_40.y;
                local_50 = local_40.z;
              }
              fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                                (&CStack_cc,ray_origin,ray_direction);
              if (((fVar1 <= local_1c) && (0.0 <= fVar1)) &&
                 ((fVar1 <= 1.0 && (local_1c = fVar1, output_normal != (CVector3f *)0x0)))) {
                local_94.x = -CStack_cc.normal.x;
                local_94.y = -CStack_cc.normal.y;
                local_94.z = -CStack_cc.normal.z;
                if (output_normal != &local_94) {
                  output_normal->x = local_94.x;
                  output_normal->y = local_94.y;
                  output_normal->z = local_94.z;
                }
              }
              local_18 = local_18 + 0xc;
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(local_20 + 4));
          }
          local_24 = local_24 + 0x48;
          local_28 = local_28 + 1;
        } while (local_28 < this_ptr->poly_count);
      }
    }
    else {
      matrix = &this_ptr->rotation_matrix_workspace;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (matrix,&CStack_7c,ray_origin);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (matrix,&CStack_4c,ray_direction);
      triangle = this_ptr->collision_triangle_list +
                 frame_index * this_ptr->collision_triangle_count;
      iVar4 = 0;
      local_2c = matrix;
      if (0 < this_ptr->collision_triangle_count) {
        do {
          fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800(triangle,&CStack_7c,&CStack_4c)
          ;
          if ((((fVar1 <= local_1c) && (0.0 <= fVar1)) && (fVar1 <= 1.0)) &&
             (local_1c = fVar1, output_normal != (CVector3f *)0x0)) {
            local_88.x = -(triangle->normal).x;
            local_88.y = -(triangle->normal).y;
            local_88.z = -(triangle->normal).z;
            pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                               (local_2c,&CStack_70,&local_88);
            if (output_normal != pCVar3) {
              output_normal->x = pCVar3->x;
              output_normal->y = pCVar3->y;
              output_normal->z = pCVar3->z;
            }
          }
          iVar4 = iVar4 + 1;
          triangle = triangle + 1;
        } while (iVar4 < this_ptr->collision_triangle_count);
      }
    }
    local_30 = local_1c;
  }
  return local_30;
}
