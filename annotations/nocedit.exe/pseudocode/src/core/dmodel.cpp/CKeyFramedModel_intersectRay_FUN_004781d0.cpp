// Name: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
// Address: 004781d0
// Address Range: [[004781d0, 0047864a]]
// Convention: __cdecl
// Signature: float __cdecl core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0(CKeyFramedModel *this_ptr,int frame_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *output_normal)

#include "nocturne.h"

float __cdecl core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0(CKeyFramedModel *this_ptr,int frame_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *output_normal)

{
  SMRGLPrimitiveQuad *pSVar1;
  float fVar2;
  CVector3i *pCVar3;
  CVector3i *pCVar1;
  CVector3i *pCVar4;
  CVector3f *pCVar2;
  CMatrix3x3f *this_ptr_00;
  CDemonTriangle *triangle;
  int iVar3;
  int iVar5;
  CDemonTriangle local_d0;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3i *local_38;
  float local_34;
  CMatrix3x3f *local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  fVar2 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                    ((CBoundingBox3D *)(this_ptr->frame_bounds + frame_index * 2),ray_origin,
                     ray_direction,(CVector3f *)0x0);
  if ((fVar2 < 0.0) || (1.0 < fVar2)) {
    local_34 = 2.0;
  }
  else {
    local_20 = 2.0;
    if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
      pCVar3 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(this_ptr,frame_index);
      local_2c = 0;
      if (0 < this_ptr->poly_count) {
        local_28 = 0;
        do {
          pSVar1 = this_ptr->poly_vert_list;
          pCVar1 = pCVar3 + *(int *)((int)&pSVar1->vertices[0].vertex_index + local_28);
          local_68.x = (float)pCVar1->x * 0.00390625f;
          local_68.y = (float)pCVar1->y * 0.00390625f;
          local_68.z = (float)pCVar1->z * 0.00390625f;
          pCVar4 = pCVar3 + *(int *)((int)&pSVar1->vertices[1].vertex_index + local_28);
          local_5c.x = (float)pCVar4->x * 0.00390625f;
          local_5c.y = (float)pCVar4->y * 0.00390625f;
          local_5c.z = (float)pCVar4->z * 0.00390625f;
          iVar3 = 2;
          if (2 < *(int *)((int)pSVar1->vertices + local_28 + -0x14)) {
            local_1c = (int)&pSVar1->vertices[0].vertex_index + local_28;
            do {
              pCVar4 = pCVar3 + *(int *)(local_1c + 0x18);
              local_44.x = (float)pCVar4->x * 0.00390625f;
              local_44.y = (float)pCVar4->y * 0.00390625f;
              local_44.z = (float)pCVar4->z * 0.00390625f;
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                        (&local_d0,&local_68,&local_5c,&local_44);
              if (&local_5c != &local_44) {
                local_5c.x = local_44.x;
                local_5c.y = local_44.y;
                local_5c.z = local_44.z;
              }
              fVar2 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                                (&local_d0,ray_origin,ray_direction);
              if (((fVar2 <= local_20) && (0.0 <= fVar2)) &&
                 ((fVar2 <= 1.0 && (local_20 = fVar2, output_normal != (CVector3f *)0x0)))) {
                local_98.x = -local_d0.normal.x;
                local_98.y = -local_d0.normal.y;
                local_98.z = -local_d0.normal.z;
                if (output_normal != &local_98) {
                  output_normal->x = local_98.x;
                  output_normal->y = local_98.y;
                  output_normal->z = local_98.z;
                }
              }
              local_1c = local_1c + 0xc;
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)((int)pSVar1->vertices + local_28 + -0x14));
          }
          local_28 = local_28 + 0x48;
          local_2c = local_2c + 1;
        } while (local_2c < this_ptr->poly_count);
      }
    }
    else {
      this_ptr_00 = &this_ptr->rotation_matrix_workspace;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (this_ptr_00,&local_80,ray_origin);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (this_ptr_00,&local_50,ray_direction);
      triangle = this_ptr->collision_triangle_list +
                 frame_index * this_ptr->collision_triangle_count;
      iVar5 = 0;
      if (0 < this_ptr->collision_triangle_count) {
        do {
          fVar2 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800(triangle,&local_80,&local_50);
          if ((((fVar2 <= local_20) && (0.0 <= fVar2)) && (fVar2 <= 1.0)) &&
             (local_20 = fVar2, output_normal != (CVector3f *)0x0)) {
            local_8c.x = -(triangle->normal).x;
            local_8c.y = -(triangle->normal).y;
            local_8c.z = -(triangle->normal).z;
            pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                               (this_ptr_00,&local_74,&local_8c);
            if (output_normal != pCVar2) {
              output_normal->x = pCVar2->x;
              output_normal->y = pCVar2->y;
              output_normal->z = pCVar2->z;
            }
          }
          iVar5 = iVar5 + 1;
          triangle = triangle + 1;
        } while (iVar5 < this_ptr->collision_triangle_count);
      }
    }
    local_34 = local_20;
  }
  return local_34;
}
