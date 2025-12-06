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
  CVector3i *pCVar1;
  int iVar2;
  float fVar3;
  CVector3f *pCVar4;
  CMatrix3x3f *matrix;
  CDemonTriangle *triangle;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  int iVar5;
  byte auStack_c4 [36];
  float fStack_a0;
  float fStack_9c;
  float local_98;
  CVector3f local_8c;
  byte auStack_7c [24];
  byte local_64 [12];
  float local_58;
  float local_54;
  byte local_50 [8];
  byte auStack_48 [16];
  CVector3f local_38;
  CVector3i *local_2c;
  float local_28;
  CMatrix3x3f *local_24;
  CMatrix3x3f *local_20;
  int local_1c;
  int local_18;
  float fStack_14;
  
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  fStack_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                        ((CBoundingBox3D *)(this_ptr->frame_bounds + frame_index * 2),ray_origin,
                         ray_direction,(CVector3f *)0x0);
  if ((0.0 <= fStack_14) && (fStack_14 <= 1.0)) {
    local_1c = 0x40000000;
    if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
      local_2c = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(this_ptr,frame_index)
      ;
      local_20 = (CMatrix3x3f *)0x0;
      if (0 < this_ptr->poly_count) {
        local_1c = 0;
        do {
          local_18 = local_1c + (int)this_ptr->poly_vert_list;
          pCVar1 = local_2c + *(int *)(local_18 + 0x18);
          local_64._8_4_ = (float)pCVar1->x * 0.00390625f;
          local_58 = (float)pCVar1->y * 0.00390625f;
          local_54 = (float)pCVar1->z * 0.00390625f;
          pCVar1 = local_2c + *(int *)(local_18 + 0x24);
          local_50._0_4_ = (float)pCVar1->x * 0.00390625f;
          local_50._4_4_ = (float)pCVar1->y * 0.00390625f;
          auStack_48._0_4_ = (float)pCVar1->z * 0.00390625f;
          iVar5 = 2;
          if (2 < *(int *)(local_18 + 4)) {
            iVar2 = local_18 + 0x18;
            do {
              pCVar1 = local_2c + *(int *)(iVar2 + 0x18);
              local_38.x = (float)pCVar1->x * 0.00390625f;
              local_38.y = (float)pCVar1->y * 0.00390625f;
              local_38.z = (float)pCVar1->z * 0.00390625f;
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                        ((CDemonTriangle *)auStack_c4,(CVector3f *)(local_64 + 8),
                         (CVector3f *)local_50,&local_38);
              if ((CVector3f *)(local_50 + 4) != &local_38) {
                local_50._4_4_ = local_38.y;
                auStack_48._0_4_ = local_38.z;
                auStack_48._4_4_ = local_2c;
              }
              fVar3 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                                ((CDemonTriangle *)(auStack_c4 + 4),ray_origin,ray_direction);
              if (((fVar3 <= fStack_14) && (0.0 <= fVar3)) &&
                 ((fVar3 <= 1.0 && (fStack_14 = fVar3, output_normal != (CVector3f *)0x0)))) {
                local_8c.x = -fStack_a0;
                local_8c.y = -fStack_9c;
                local_8c.z = -local_98;
                if (output_normal != &local_8c) {
                  output_normal->x = local_8c.x;
                  output_normal->y = local_8c.y;
                  output_normal->z = local_8c.z;
                }
              }
              iVar2 = iVar2 + 0xc;
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(local_18 + 4));
          }
          local_1c = local_1c + 0x48;
          local_20 = (CMatrix3x3f *)((int)local_20 + 1);
        } while ((int)local_20 < this_ptr->poly_count);
      }
    }
    else {
      matrix = &this_ptr->rotation_matrix_workspace;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (matrix,(CVector3f *)auStack_7c,ray_origin);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (matrix,(CVector3f *)(local_50 + 8),ray_direction);
      triangle = this_ptr->collision_triangle_list +
                 frame_index * this_ptr->collision_triangle_count;
      iVar5 = 0;
      local_24 = matrix;
      if (0 < this_ptr->collision_triangle_count) {
        do {
          fVar3 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                            (triangle,(CVector3f *)(auStack_7c + 8),(CVector3f *)(auStack_48 + 4));
          if ((((fVar3 <= unaff_EBP) && (0.0 <= fVar3)) && (fVar3 <= 1.0)) &&
             (unaff_EBP = fVar3, output_normal != (CVector3f *)0x0)) {
            auStack_7c._0_4_ = -(triangle->normal).x;
            auStack_7c._4_4_ = -(triangle->normal).y;
            auStack_7c._8_4_ = -(triangle->normal).z;
            pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                               (local_20,(CVector3f *)local_64,(CVector3f *)auStack_7c);
            if (output_normal != pCVar4) {
              output_normal->x = pCVar4->x;
              output_normal->y = pCVar4->y;
              output_normal->z = pCVar4->z;
            }
          }
          iVar5 = iVar5 + 1;
          triangle = triangle + 1;
        } while (iVar5 < this_ptr->collision_triangle_count);
      }
    }
    local_28 = fStack_14;
  }
  return local_28;
}
