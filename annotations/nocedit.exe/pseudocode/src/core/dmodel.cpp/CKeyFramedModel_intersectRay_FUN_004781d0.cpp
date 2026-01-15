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
  CVector3f *pCVar2;
  CMatrix3x3f *matrix;
  CDemonTriangle *triangle;
  int iVar3;
  CDemonTriangle CStack_cc;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f local_64;
  CVector3f local_58;
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
  if ((fStack_14 < 0.0) || (1.0 < fStack_14)) {
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
          pCVar1 = local_34 + *(int *)(local_20 + 0x18);
          local_64.x = (float)pCVar1->x * 0.00390625f;
          local_64.y = (float)pCVar1->y * 0.00390625f;
          local_64.z = (float)pCVar1->z * 0.00390625f;
          pCVar1 = local_34 + *(int *)(local_20 + 0x24);
          local_58.x = (float)pCVar1->x * 0.00390625f;
          local_58.y = (float)pCVar1->y * 0.00390625f;
          local_58.z = (float)pCVar1->z * 0.00390625f;
          iVar3 = 2;
          if (2 < *(int *)(local_20 + 4)) {
            local_18 = local_20 + 0x18;
            do {
              pCVar1 = local_34 + *(int *)(local_18 + 0x18);
              local_40.x = (float)pCVar1->x * 0.00390625f;
              local_40.y = (float)pCVar1->y * 0.00390625f;
              local_40.z = (float)pCVar1->z * 0.00390625f;
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                        (&CStack_cc,&local_64,&local_58,&local_40);
              if (&local_58 != &local_40) {
                local_58.x = local_40.x;
                local_58.y = local_40.y;
                local_58.z = local_40.z;
              }
              fStack_14 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                                    (&CStack_cc,ray_origin,ray_direction);
              if (((fStack_14 <= local_1c) && (0.0 <= fStack_14)) &&
                 ((fStack_14 <= 1.0 && (local_1c = fStack_14, output_normal != (CVector3f *)0x0))))
              {
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
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(local_20 + 4));
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
      iVar3 = 0;
      local_2c = matrix;
      if (0 < this_ptr->collision_triangle_count) {
        do {
          fStack_14 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                                (triangle,&CStack_7c,&CStack_4c);
          if ((((fStack_14 <= local_1c) && (0.0 <= fStack_14)) && (fStack_14 <= 1.0)) &&
             (local_1c = fStack_14, output_normal != (CVector3f *)0x0)) {
            local_88.x = -(triangle->normal).x;
            local_88.y = -(triangle->normal).y;
            local_88.z = -(triangle->normal).z;
            pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                               (local_2c,&CStack_70,&local_88);
            if (output_normal != pCVar2) {
              output_normal->x = pCVar2->x;
              output_normal->y = pCVar2->y;
              output_normal->z = pCVar2->z;
            }
          }
          iVar3 = iVar3 + 1;
          triangle = triangle + 1;
        } while (iVar3 < this_ptr->collision_triangle_count);
      }
    }
    local_30 = local_1c;
  }
  return local_30;
}
