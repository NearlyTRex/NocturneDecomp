// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
// Address: 00495b70
// Address Range: [[00495b70, 00496219]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end,CVector3f *out_intersection_point,int *out_intersection_type)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

float __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end,CVector3f *out_intersection_point,int *out_intersection_type)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  CDemonCube *this_ptr_00;
  int iVar11;
  float local_98;
  CVector3f local_90;
  CVector3f local_84;
  double local_78;
  uint local_70 [2];
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  fVar1 = (ray_start->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x;
  fVar2 = (ray_start->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar3 = (ray_start->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z;
  local_78 = floor((double)fVar1);
  local_38 = (int)ROUND(ROUND(local_78));
  local_78 = floor((double)fVar2);
  local_3c = (int)ROUND(ROUND(local_78));
  local_78 = floor((double)fVar3);
  fVar4 = (ray_end->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x;
  fVar5 = (ray_end->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar6 = (ray_end->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z;
  local_34 = (int)ROUND(ROUND(local_78));
  local_78 = floor((double)fVar4);
  local_58 = (int)ROUND(ROUND(local_78));
  local_78 = floor((double)fVar5);
  local_60 = (int)ROUND(ROUND(local_78));
  local_78 = floor((double)fVar6);
  local_5c = (int)ROUND(ROUND(local_78));
  if ((-1 < local_38) || (-1 < local_58)) {
    if ((local_3c < 0) && (local_60 < 0)) {
      return -1.0;
    }
    if ((local_34 < 0) && (local_5c < 0)) {
      return -1.0;
    }
    iVar11 = (this_ptr->grid_coord).x;
    if ((((local_38 < iVar11) || (local_58 < iVar11)) &&
        ((iVar11 = (this_ptr->grid_coord).y, local_3c < iVar11 || (local_60 < iVar11)))) &&
       ((iVar11 = (this_ptr->grid_coord).z, local_34 < iVar11 || (local_5c < iVar11)))) {
      local_90.x = ray_end->x - ray_start->x;
      local_90.y = ray_end->y - ray_start->y;
      iVar11 = 1;
      local_90.z = ray_end->z - ray_start->z;
      if ((local_38 != local_58) || ((local_3c != local_60 || (local_34 != local_5c)))) {
        fVar7 = SQRT(local_90.z * local_90.z + local_90.x * local_90.x + local_90.y * local_90.y);
        if (fVar7 <= 0.0) {
          return -1.0;
        }
        fVar7 = 2.684355e+08f / fVar7;
        local_48 = (int)ROUND(ROUND(ABS(fVar4 - fVar1) * fVar7));
        local_1c = (int)ROUND(ROUND(ABS(fVar5 - fVar2) * fVar7));
        local_44 = (float)(int)ROUND(ROUND(ABS(fVar6 - fVar3) * fVar7));
        if (local_90.x < 0.0) {
          iVar9 = local_38 - local_58;
          local_68 = fVar1 - (float)local_38;
          local_20 = -1;
        }
        else {
          iVar9 = local_58 - local_38;
          local_68 = (float)(local_38 + 1) - fVar1;
          local_20 = 1;
        }
        if (local_90.y < 0.0) {
          local_50 = -1;
          iVar10 = local_3c - local_60;
          local_64 = fVar2 - (float)local_3c;
        }
        else {
          iVar10 = local_60 - local_3c;
          local_64 = (float)(local_3c + 1) - fVar2;
          local_50 = 1;
        }
        if (local_90.z < 0.0) {
          local_4c = -1;
          iVar11 = local_34 - local_5c;
          local_40 = fVar3 - (float)local_34;
        }
        else {
          iVar11 = local_5c - local_34;
          local_40 = (float)(local_34 + 1) - fVar3;
          local_4c = 1;
        }
        iVar11 = iVar9 + 1 + iVar10 + iVar11;
        local_30 = (int)ROUND(ROUND((float)local_1c * local_68 - (float)local_48 * local_64));
        local_2c = (int)ROUND(ROUND((float)local_1c * local_40 - (float)(int)local_44 * local_64));
        local_28 = (int)ROUND(ROUND((float)(int)local_44 * local_68 - (float)local_48 * local_40));
        local_14 = local_44;
      }
      local_98 = 1.0001;
      iVar9 = local_34;
      iVar10 = local_2c;
      iVar8 = local_28;
      while( true ) {
        local_28 = iVar8;
        local_2c = iVar10;
        local_34 = iVar9;
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,local_38,local_3c,local_34);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          local_18 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                               (this_ptr_00,ray_start,&local_90,&local_84,local_70);
          if (local_18 < local_98) {
            if ((out_intersection_point != (CVector3f *)0x0) &&
               (out_intersection_point != &local_84)) {
              out_intersection_point->x = local_84.x;
              out_intersection_point->y = local_84.y;
              out_intersection_point->z = local_84.z;
            }
            local_98 = local_18;
            if (out_intersection_type != (int *)0x0) {
              *out_intersection_type = local_70[0];
            }
          }
          local_14 = local_18;
          if (local_98 <= 1.0) {
            return local_98;
          }
        }
        iVar11 = iVar11 + -1;
        if (iVar11 < 1) break;
        iVar9 = local_34 + local_4c;
        iVar10 = local_2c + local_1c;
        iVar8 = local_28 - local_48;
        if (local_30 < 0) {
          if (local_28 < 0) {
            local_38 = local_38 + local_20;
            local_30 = local_30 + local_1c;
            iVar9 = local_34;
            iVar10 = local_2c;
            iVar8 = local_28 + (int)local_44;
          }
        }
        else if (-1 < local_2c) {
          local_3c = local_3c + local_50;
          local_30 = local_30 - local_48;
          iVar9 = local_34;
          iVar10 = local_2c - (int)local_44;
          iVar8 = local_28;
        }
      }
      if (out_intersection_type != (int *)0x0) {
        *out_intersection_type = 1;
        return -1.0;
      }
    }
  }
  return -1.0;
}
