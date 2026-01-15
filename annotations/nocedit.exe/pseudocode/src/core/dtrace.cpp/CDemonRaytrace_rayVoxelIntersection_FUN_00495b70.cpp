// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
// Address: 00495b70
// Address Range: [[00495b70, 00496219]]
// Convention: __cdecl
// Signature: float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, int * out_intersection_type)

#include "nocturne.h"

float __cdecl
core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
          (CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end,
          CVector3f *out_intersection_point,int *out_intersection_type)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CDemonCube *this_ptr_00;
  CVector3f *extraout_EBX;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_b0;
  float local_9c;
  float local_98;
  CVector3f local_90;
  CVector3f local_84;
  float local_78;
  float fStack_74;
  uint local_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  fVar15 = (ray_start->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x;
  fVar14 = ray_start->z;
  fVar1 = (this_ptr->bbox_min).z;
  fVar2 = (this_ptr->cell_size).z;
  dVar13 = crt_math_c_floor_FUN_005feb90((double)fVar15);
  local_84.z = SUB84 /* extract 2-byte value */(dVar13,0);
  local_78 = (float)((ulonglong)dVar13 >> 0x20);
  dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
  local_3c = (int)ROUND(dVar13);
  dVar13 = crt_math_c_floor_FUN_005feb90((double)fVar15);
  local_84.y = SUB84 /* extract 2-byte value */(dVar13,0);
  local_84.z = (float)((ulonglong)dVar13 >> 0x20);
  dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
  local_40 = (int)ROUND(dVar13);
  dVar13 = crt_math_c_floor_FUN_005feb90((double)local_b0);
  local_84.y = SUB84 /* extract 2-byte value */(dVar13,0);
  local_84.z = (float)((ulonglong)dVar13 >> 0x20);
  fVar9 = ((float10)ray_end->x - (float10)(this_ptr->bbox_min).x) / (float10)(this_ptr->cell_size).x
  ;
  fVar10 = ((float10)ray_end->z - (float10)(this_ptr->bbox_min).z) /
           (float10)(this_ptr->cell_size).z;
  dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
  local_38 = (int)ROUND(dVar13);
  fVar3 = (float)fVar9;
  dVar13 = crt_math_c_floor_FUN_005feb90((double)fVar3);
  local_84.y = SUB84 /* extract 2-byte value */(dVar13,0);
  local_84.z = (float)((ulonglong)dVar13 >> 0x20);
  fVar16 = 6.737184e-39;
  dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
  local_5c = (int)ROUND(dVar13);
  dVar13 = crt_math_c_floor_FUN_005feb90((double)fVar16);
  local_84.y = SUB84 /* extract 2-byte value */(dVar13,0);
  local_84.z = (float)((ulonglong)dVar13 >> 0x20);
  dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
  local_64 = (int)ROUND(dVar13);
  dVar13 = crt_math_c_floor_FUN_005feb90((double)(float)fVar10);
  local_84.y = SUB84 /* extract 2-byte value */(dVar13,0);
  local_84.z = (float)((ulonglong)dVar13 >> 0x20);
  fVar16 = 6.737297e-39;
  dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
  local_60 = (int)ROUND(dVar13);
  if ((-1 < local_3c) || (-1 < local_5c)) {
    if ((local_40 < 0) && (local_64 < 0)) {
      return -1.0;
    }
    if ((local_38 < 0) && (local_60 < 0)) {
      return -1.0;
    }
    iVar8 = (this_ptr->grid_coord).x;
    if ((((local_3c < iVar8) || (local_5c < iVar8)) &&
        ((iVar8 = (this_ptr->grid_coord).y, local_40 < iVar8 || (local_64 < iVar8)))) &&
       ((iVar8 = (this_ptr->grid_coord).z, local_38 < iVar8 || (local_60 < iVar8)))) {
      fVar4 = ray_end->x - ray_start->x;
      local_90.x = ray_end->y - ray_start->y;
      iVar8 = 1;
      local_90.y = ray_end->z - ray_start->z;
      if ((local_3c != local_5c) || ((local_40 != local_64 || (local_38 != local_60)))) {
        fVar4 = SQRT(local_90.y * local_90.y + fVar4 * fVar4 + local_90.x * local_90.x);
        if (fVar4 <= 0.0) {
          return -1.0;
        }
        fVar9 = (float10)2.684355e+08f / (float10)fVar4;
        fVar11 = ABS((float10)fVar16 - (float10)fVar15) * fVar9;
        fVar12 = ABS((float10)(float)fVar10 - (float10)local_b0) * fVar9;
        fVar15 = 6.737663e-39;
        dVar13 = crt_math_c_round_FUN_005fe6b0
                           ((double)(ABS((float10)fVar3 - (float10)((fVar14 - fVar1) / fVar2)) *
                                    fVar9));
        local_50 = (float)(int)ROUND(dVar13);
        fVar10 = (float10)fVar3;
        fVar14 = 6.737684e-39;
        dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
        local_28 = (int)ROUND(dVar13);
        fVar9 = (float10)0;
        dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
        local_54 = (int)ROUND(dVar13);
        if (fVar10 < fVar9) {
          local_68 = local_48 - local_68;
          local_78 = fVar15 - (float)local_48;
          local_30 = -1;
        }
        else {
          local_68 = local_68 - local_48;
          local_78 = (float)(local_48 + 1) - fVar15;
          local_30 = 1;
        }
        if (local_9c < 0.0) {
          local_60 = -1;
          iVar8 = local_4c - local_70;
          fStack_74 = fVar16 - (float)local_4c;
        }
        else {
          iVar8 = local_70 - local_4c;
          fStack_74 = (float)(local_4c + 1) - fVar16;
          local_60 = 1;
        }
        if (fVar3 < 0.0) {
          local_5c = -1;
          iStack_6c = local_44 - iStack_6c;
          local_50 = fVar14 - (float)local_44;
        }
        else {
          iStack_6c = iStack_6c - local_44;
          local_50 = (float)(local_44 + 1) - fVar14;
          local_5c = 1;
        }
        iVar8 = local_68 + 1 + iVar8 + iStack_6c;
        fVar9 = (float10)local_2c * (float10)local_50;
        fVar10 = (float10)local_54 * (float10)local_78;
        fVar11 = (float10)local_54 * (float10)fStack_74;
        fVar12 = (float10)local_58 * (float10)local_50;
        iStack_24 = local_54;
        dVar13 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)local_2c * (float10)local_78 -
                                    (float10)local_58 * (float10)fStack_74));
        local_44 = (int)ROUND(dVar13);
        dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar9 - fVar11));
        local_44 = (int)ROUND(dVar13);
        dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar10 - fVar12));
        local_44 = (int)ROUND(dVar13);
      }
      local_98 = 1.0001;
      iVar5 = local_34;
      iVar6 = local_2c;
      iVar7 = local_28;
      while( true ) {
        local_28 = iVar7;
        local_2c = iVar6;
        local_34 = iVar5;
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,local_38,local_3c,local_34);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          local_18 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                               (this_ptr_00,ray_start,&local_90,&local_84,&local_70);
          if (local_18 < local_98) {
            if ((extraout_EBX != (CVector3f *)0x0) && (extraout_EBX != &local_84)) {
              extraout_EBX->x = local_84.x;
              extraout_EBX->y = local_84.y;
              extraout_EBX->z = local_84.z;
            }
            local_98 = local_18;
            if (out_intersection_type != (int *)0x0) {
              *out_intersection_type = local_70;
            }
          }
          local_14 = local_18;
          if (local_98 <= 1.0) {
            return local_98;
          }
        }
        iVar8 = iVar8 + -1;
        if (iVar8 < 1) break;
        iVar5 = local_34 + local_4c;
        iVar6 = local_2c + local_1c;
        iVar7 = local_28 - local_48;
        if (local_30 < 0) {
          if (local_28 < 0) {
            local_38 = local_38 + local_20;
            local_30 = local_30 + local_1c;
            iVar5 = local_34;
            iVar6 = local_2c;
            iVar7 = local_28 + local_44;
          }
        }
        else if (-1 < local_2c) {
          local_3c = local_3c + (int)local_50;
          local_30 = local_30 - local_48;
          iVar5 = local_34;
          iVar6 = local_2c - local_44;
          iVar7 = local_28;
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
