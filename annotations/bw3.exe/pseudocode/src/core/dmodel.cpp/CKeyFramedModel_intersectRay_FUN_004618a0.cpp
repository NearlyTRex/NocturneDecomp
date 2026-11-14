// Name: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004618a0
// Address: 004618a0
// Address Range: [[004618a0, 00461dfe]]
// Convention: __cdecl
// Signature: float __cdecl core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004618a0(CKeyFramedModel *this_ptr,int frame_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *output_normal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004618a0(CKeyFramedModel *this_ptr,int frame_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *output_normal)

{
  CMatrix3x3f *pCVar1;
  CVector3i *pCVar2;
  CDemonTriangle *triangle;
  byte bVar3;
  float afStackY_10c8 [992];
  float *pfVar4;
  CDemonTriangle local_118;
  CVector3f local_e0;
  CVector3f local_d4;
  float local_c8;
  float afStack_c4 [2];
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  float local_98;
  float afStack_94 [5];
  CVector3f local_80;
  float local_74;
  float local_70 [2];
  CVector3f local_68;
  float local_5c;
  float afStack_58 [4];
  float local_48;
  float local_44;
  CMatrix3x3f *local_3c;
  CMatrix3x3f *local_38;
  int local_34;
  int local_30;
  int local_2c;
  CVector3i *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar3 = 0;
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  local_18 = (float)core_box_cpp_FUN_0041e220
                              (this_ptr->frame_bounds + frame_index,ray_origin,ray_direction,0);
  if ((0.0 <= local_18) && (local_18 <= 1.0)) {
    local_44 = 2.0;
    if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
      local_28 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60(this_ptr,frame_index)
      ;
      local_34 = 0;
      if (0 < this_ptr->poly_count) {
        local_30 = 0;
        do {
          local_24 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base)
                           .base.type + local_30;
          pCVar2 = local_28 + *(int *)(local_24 + 0x18);
          local_b0.x = (float)pCVar2->x * _DAT_005de564;
          local_b0.y = (float)pCVar2->y * _DAT_005de564;
          local_b0.z = (float)pCVar2->z * _DAT_005de564;
          pCVar2 = local_28 + *(int *)(local_24 + 0x24);
          local_80.x = (float)pCVar2->x * _DAT_005de564;
          local_80.y = (float)pCVar2->y * _DAT_005de564;
          local_80.z = (float)pCVar2->z * _DAT_005de564;
          local_20 = 2;
          if (2 < *(int *)(local_24 + 4)) {
            local_1c = local_24 + 0x18;
            do {
              pCVar2 = local_28 + *(int *)(local_1c + 0x18);
              local_68.x = (float)pCVar2->x * _DAT_005de564;
              local_68.y = (float)pCVar2->y * _DAT_005de564;
              local_68.z = (float)pCVar2->z * _DAT_005de564;
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                        (&local_118,&local_b0,&local_80,&local_68);
              if (&local_80 != &local_68) {
                local_80.x = local_68.x;
                local_80.y = local_68.y;
                local_80.z = local_68.z;
              }
              local_18 = core_dtri_cpp_rayTriangleIntersection_FUN_00478ac0
                                   (&local_118,ray_origin,ray_direction);
              if (((local_18 <= local_44) && (0.0 <= local_18)) &&
                 ((local_18 <= 1.0 && (local_44 = local_18, output_normal != (CVector3f *)0x0)))) {
                local_70[0] = -local_118.normal.y;
                local_70[1] = -local_118.normal.z;
                local_74 = -local_118.normal.x;
                local_e0.x = -local_118.normal.x;
                *(float *)((int)&local_e0 + (uint)bVar3 * -8 + 4) = local_70[(uint)bVar3 * -2];
                *(float *)((int)&local_e0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
                     local_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
                if (&local_e0 != output_normal) {
                  output_normal->x = local_e0.x;
                  output_normal->y = local_e0.y;
                  output_normal->z = local_e0.z;
                }
              }
              local_20 = local_20 + 1;
              local_1c = local_1c + 0xc;
            } while (local_20 < *(int *)(local_24 + 4));
          }
          local_30 = local_30 + 0x48;
          local_34 = local_34 + 1;
        } while (local_34 < this_ptr->poly_count);
      }
    }
    else {
      local_3c = &this_ptr->rotation_matrix_workspace;
      core_dirmat_cpp_FUN_0045b870(local_3c,ray_origin);
      local_d4.x = local_5c;
      *(float *)((int)&local_d4 + (uint)bVar3 * -8 + 4) = afStack_58[(uint)bVar3 * -2];
      *(float *)((int)&local_d4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_dirmat_cpp_FUN_0045b870(local_3c,ray_direction);
      local_a4.x = local_98;
      *(float *)((int)&local_a4 + (uint)bVar3 * -8 + 4) = afStack_94[(uint)bVar3 * -2];
      *(float *)((int)&local_a4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      triangle = this_ptr->collision_triangle_list +
                 frame_index * this_ptr->collision_triangle_count;
      local_2c = 0;
      if (0 < this_ptr->collision_triangle_count) {
        local_38 = local_3c;
        do {
          local_18 = core_dtri_cpp_rayTriangleIntersection_FUN_00478ac0
                               (triangle,&local_d4,&local_a4);
          pCVar1 = local_38;
          if ((((local_18 <= local_44) && (0.0 <= local_18)) && (local_18 <= 1.0)) &&
             (local_44 = local_18, output_normal != (CVector3f *)0x0)) {
            afStack_58[2] = -(triangle->normal).x;
            pfVar4 = &local_c8;
            afStack_58[3] = -(triangle->normal).y;
            local_48 = -(triangle->normal).z;
            local_c8 = afStack_58[2];
            afStack_c4[(uint)bVar3 * -2] = afStack_58[(uint)bVar3 * -2 + 3];
            afStack_c4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
                 afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
            core_dirmat_cpp_FUN_0045b800(pCVar1,pfVar4);
            local_bc.x = afStack_94[2];
            *(float *)((int)&local_bc + (uint)bVar3 * -8 + 4) = afStack_94[(uint)bVar3 * -2 + 3];
            *(float *)((int)&local_bc + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
                 afStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
            if (&local_bc != output_normal) {
              output_normal->x = local_bc.x;
              output_normal->y = local_bc.y;
              output_normal->z = local_bc.z;
            }
          }
          local_2c = local_2c + 1;
          triangle = triangle + 1;
        } while (local_2c < this_ptr->collision_triangle_count);
      }
    }
    return local_44;
  }
  return 2.0;
}
