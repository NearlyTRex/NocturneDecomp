// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
// Address: 00495b70
// Address Range: [[00495b70, 00496219]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end,CVector3f *out_intersection_point,int *out_intersection_type)

#include "nocturne.h"

float __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end,CVector3f *out_intersection_point,int *out_intersection_type)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CDemonCube *this_ptr_00;
  int iVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_b0;
  float local_a0 [5];
  float local_8c;
  float local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  fVar9 = (ray_start->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x;
  fVar1 = (ray_start->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z;
  dVar6 = floor((double)fVar9);
  local_78 = SUB84(dVar6,0);
  iStack_74 = (int)((ulonglong)dVar6 >> 0x20);
  fVar12 = 6.736953e-39;
  dVar6 = round(dVar6);
  local_3c = (int)ROUND(dVar6);
  dVar6 = floor((double)fVar9);
  local_7c = SUB84(dVar6,0);
  local_78 = (int)((ulonglong)dVar6 >> 0x20);
  dVar6 = round(dVar6);
  local_44 = (float)(int)ROUND(dVar6);
  dVar6 = floor((double)fVar12);
  local_80 = SUB84(dVar6,0);
  local_7c = (int)((ulonglong)dVar6 >> 0x20);
  fVar9 = (ray_end->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x;
  fVar11 = (ray_end->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  dVar6 = round(dVar6);
  local_40 = (int)ROUND(dVar6);
  local_a0[0] = fVar9;
  dVar6 = floor((double)fVar9);
  local_84 = SUB84(dVar6,0);
  local_80 = (int)((ulonglong)dVar6 >> 0x20);
  fVar10 = 6.737184e-39;
  dVar6 = round(dVar6);
  local_68 = (int)ROUND(dVar6);
  dVar6 = floor((double)fVar10);
  local_88 = SUB84(dVar6,0);
  local_84 = (int)((ulonglong)dVar6 >> 0x20);
  fVar9 = 6.73724e-39;
  dVar6 = round(dVar6);
  iStack_74 = (int)ROUND(dVar6);
  dVar6 = floor((double)local_b0);
  local_8c = SUB84(dVar6,0);
  local_88 = (float)((ulonglong)dVar6 >> 0x20);
  fVar8 = 6.737297e-39;
  dVar6 = round(dVar6);
  iStack_74 = (int)ROUND(dVar6);
  if ((-1 < local_50) || (-1 < local_70)) {
    if ((local_54 < 0) && (local_78 < 0)) {
      return -1.0;
    }
    if ((local_4c < 0) && (iStack_74 < 0)) {
      return -1.0;
    }
    iVar5 = (this_ptr->grid_coord).x;
    if ((((local_50 < iVar5) || (local_70 < iVar5)) &&
        ((iVar5 = (this_ptr->grid_coord).y, local_54 < iVar5 || (local_78 < iVar5)))) &&
       ((iVar5 = (this_ptr->grid_coord).z, local_4c < iVar5 || (iStack_74 < iVar5)))) {
      fVar2 = ray_end->x - ray_start->x;
      fVar7 = ray_end->y - ray_start->y;
      iVar5 = 1;
      local_a0[0] = ray_end->z - ray_start->z;
      if ((local_50 != local_70) || ((local_54 != local_78 || (local_4c != iStack_74)))) {
        fVar2 = SQRT(local_a0[0] * local_a0[0] + fVar2 * fVar2 + fVar7 * fVar7);
        if (fVar2 <= 0.0) {
          return -1.0;
        }
        fVar11 = fVar8 - fVar11;
        fVar9 = fVar12 - fVar9;
        fVar2 = 2.684355e+08f / fVar2;
        fVar7 = 6.737663e-39;
        dVar6 = round((double)(ABS(fVar1 - fVar10) * fVar2));
        local_64 = (float)(int)ROUND(dVar6);
        dVar6 = round((double)(ABS(fVar11) * fVar2));
        local_3c = (int)ROUND(dVar6);
        dVar6 = round((double)(ABS(fVar9) * fVar2));
        local_68 = (int)ROUND(dVar6);
        if (fVar1 < 0.0) {
          iVar3 = local_5c - local_7c;
          local_8c = fVar7 - (float)local_5c;
          local_44 = -NAN;
        }
        else {
          iVar3 = local_7c - local_5c;
          local_8c = (float)(local_5c + 1) - fVar7;
          local_44 = 1.4013e-45;
        }
        if (local_b0 < 0.0) {
          iStack_74 = -1;
          iVar4 = local_60 - local_84;
          local_88 = fVar8 - (float)local_60;
        }
        else {
          iVar4 = local_84 - local_60;
          local_88 = (float)(local_60 + 1) - fVar8;
          iStack_74 = 1;
        }
        if (fVar1 < 0.0) {
          local_70 = -1;
          iVar5 = local_58 - local_80;
          local_64 = 6.737684e-39 - (float)local_58;
        }
        else {
          iVar5 = local_80 - local_58;
          local_64 = (float)(local_58 + 1) - 6.737684e-39;
          local_70 = 1;
        }
        iVar5 = iVar3 + 1 + iVar4 + iVar5;
        fVar10 = (float)local_40 * local_64;
        fVar11 = (float)local_68 * local_8c;
        fVar8 = (float)local_68 * local_88;
        fVar9 = (float)iStack_6c * local_64;
        local_38 = local_68;
        dVar6 = round
                          ((double)((float)local_40 * local_8c - (float)iStack_6c * local_88));
        local_58 = (int)ROUND(dVar6);
        dVar6 = round((double)(fVar10 - fVar8));
        local_58 = (int)ROUND(dVar6);
        dVar6 = round((double)(fVar11 - fVar9));
        local_58 = (int)ROUND(dVar6);
      }
      fVar9 = 1.0001;
      fVar11 = local_64;
      iVar3 = local_5c;
      iVar4 = local_58;
      while( true ) {
        local_58 = iVar4;
        local_5c = iVar3;
        local_64 = fVar11;
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,local_68,iStack_6c,(int)local_64);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          local_48 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                               (this_ptr_00,ray_start,(CVector3f *)&stack0xffffff40,
                                (CVector3f *)&stack0xffffff4c,(uint *)local_a0);
          if (local_48 < fVar9) {
            if ((out_intersection_point != (CVector3f *)0x0) &&
               (out_intersection_point != (CVector3f *)&stack0xffffff4c)) {
              out_intersection_point->x = fVar12;
              out_intersection_point->y = local_b0;
              out_intersection_point->z = fVar1;
            }
            fVar9 = local_48;
            if (out_intersection_type != (int *)0x0) {
              *out_intersection_type = (int)local_a0[0];
            }
          }
          local_44 = local_48;
          if (fVar9 <= 1.0) {
            return fVar9;
          }
        }
        iVar5 = iVar5 + -1;
        if (iVar5 < 1) break;
        fVar11 = (float)((int)local_64 + local_7c);
        iVar3 = local_5c + local_4c;
        iVar4 = local_58 - local_78;
        if (local_60 < 0) {
          if (local_58 < 0) {
            local_68 = local_68 + local_50;
            local_60 = local_60 + local_4c;
            fVar11 = local_64;
            iVar3 = local_5c;
            iVar4 = local_58 + iStack_74;
          }
        }
        else if (-1 < local_5c) {
          iStack_6c = iStack_6c + local_80;
          local_60 = local_60 - local_78;
          fVar11 = local_64;
          iVar3 = local_5c - iStack_74;
          iVar4 = local_58;
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
