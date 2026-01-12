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
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  CDemonCube *this_ptr_00;
  CVector3f *extraout_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  float fVar17;
  float local_b0;
  float local_9c;
  float local_98;
  float local_94;
  CVector3f local_90;
  CVector3f local_84;
  uint local_78;
  uint local_70 [3];
  int local_64;
  int local_60;
  float local_5c;
  float local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  float local_18;
  uint local_14;
  
  fVar8 = (ray_start->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x;
  fVar1 = ray_start->y;
  fVar2 = (this_ptr->bbox_min).y;
  fVar3 = (this_ptr->cell_size).y;
  fVar4 = ray_start->z;
  fVar5 = (this_ptr->bbox_min).z;
  fVar6 = (this_ptr->cell_size).z;
  dVar16 = crt_math_c_floor_FUN_005feb90((double)fVar8);
  local_84.z = SUB84 /* extract 2-byte value */(dVar16,0);
  local_78 = (uint)((ulonglong)dVar16 >> 0x20);
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  local_3c = (int)ROUND(dVar16);
  dVar16 = crt_math_c_floor_FUN_005feb90((double)fVar8);
  local_84.y = SUB84 /* extract 2-byte value */(dVar16,0);
  local_84.z = (float)((ulonglong)dVar16 >> 0x20);
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  local_40 = (int)ROUND(dVar16);
  dVar16 = crt_math_c_floor_FUN_005feb90((double)local_b0);
  local_84.y = SUB84 /* extract 2-byte value */(dVar16,0);
  local_84.z = (float)((ulonglong)dVar16 >> 0x20);
  fVar12 = ((float10)ray_end->x - (float10)(this_ptr->bbox_min).x) /
           (float10)(this_ptr->cell_size).x;
  fVar13 = ((float10)ray_end->z - (float10)(this_ptr->bbox_min).z) /
           (float10)(this_ptr->cell_size).z;
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  local_38 = (float)(int)ROUND(dVar16);
  fVar7 = (float)fVar12;
  dVar16 = crt_math_c_floor_FUN_005feb90((double)fVar7);
  local_84.y = SUB84 /* extract 2-byte value */(dVar16,0);
  local_84.z = (float)((ulonglong)dVar16 >> 0x20);
  fVar17 = 6.737184e-39;
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  local_5c = (float)(int)ROUND(dVar16);
  dVar16 = crt_math_c_floor_FUN_005feb90((double)fVar17);
  local_84.y = SUB84 /* extract 2-byte value */(dVar16,0);
  local_84.z = (float)((ulonglong)dVar16 >> 0x20);
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  local_64 = (int)ROUND(dVar16);
  dVar16 = crt_math_c_floor_FUN_005feb90((double)(float)fVar13);
  local_84.y = SUB84 /* extract 2-byte value */(dVar16,0);
  local_84.z = (float)((ulonglong)dVar16 >> 0x20);
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  local_5c = (float)(int)ROUND(dVar16);
  if ((-1 < (int)local_38) || (-1 < (int)local_58)) {
    if ((local_3c < 0) && (local_60 < 0)) {
      return -1.0;
    }
    if (((int)local_34 < 0) && ((int)local_5c < 0)) {
      return -1.0;
    }
    iVar11 = (this_ptr->grid_coord).x;
    if (((((int)local_38 < iVar11) || ((int)local_58 < iVar11)) &&
        ((iVar11 = (this_ptr->grid_coord).y, local_3c < iVar11 || (local_60 < iVar11)))) &&
       ((iVar11 = (this_ptr->grid_coord).z, (int)local_34 < iVar11 || ((int)local_5c < iVar11)))) {
      local_90.x = ray_end->x - ray_start->x;
      local_90.y = ray_end->y - ray_start->y;
      iVar11 = 1;
      local_90.z = ray_end->z - ray_start->z;
      if ((local_38 != local_58) || ((local_3c != local_60 || (local_34 != local_5c)))) {
        fVar17 = SQRT(local_90.z * local_90.z + local_90.x * local_90.x + local_90.y * local_90.y);
        if (fVar17 <= 0.0) {
          return -1.0;
        }
        fVar12 = (float10)2.684355e+08f / (float10)fVar17;
        fVar13 = ABS((float10)local_b0 - (float10)((fVar1 - fVar2) / fVar3)) * fVar12;
        fVar15 = ABS((float10)local_9c - (float10)((fVar4 - fVar5) / fVar6)) * fVar12;
        dVar16 = crt_math_c_round_FUN_005fe6b0
                           ((double)(ABS((float10)local_94 - (float10)fVar8) * fVar12));
        local_34 = (float)(int)ROUND(dVar16);
        fVar14 = (float10)local_84.z;
        crt_math_c_round_FUN_005fe6b0((double)fVar13);
        fVar12 = (float10)0;
        dVar16 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
        local_38 = (float)(int)ROUND(dVar16);
        if (fVar14 < fVar12) {
          iVar10 = local_2c - local_4c;
          local_5c = local_9c - (float)local_2c;
          local_14 = 0xffffffff;
        }
        else {
          iVar10 = local_4c - local_2c;
          local_5c = (float)(local_2c + 1) - local_9c;
          local_14 = 1;
        }
        if (local_84.y < 0.0) {
          local_44 = -1;
          local_54 = local_30 - local_54;
          local_58 = fVar7 - (float)local_30;
        }
        else {
          local_54 = local_54 - local_30;
          local_58 = (float)(local_30 + 1) - fVar7;
          local_44 = 1;
        }
        if (local_84.z < 0.0) {
          local_40 = -1;
          iVar11 = local_28 - local_50;
          local_34 = 6.737684e-39 - (float)local_28;
        }
        else {
          iVar11 = local_50 - local_28;
          local_34 = (float)(local_28 + 1) - 6.737684e-39;
          local_40 = 1;
        }
        iVar11 = iVar10 + 1 + local_54 + iVar11;
        fVar12 = (float10)unaff_EBP * (float10)local_34;
        fVar13 = (float10)(int)local_38 * (float10)local_5c;
        fVar14 = (float10)(int)local_38 * (float10)local_58;
        fVar15 = (float10)local_3c * (float10)local_34;
        dVar16 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)unaff_EBP * (float10)local_5c -
                                    (float10)local_3c * (float10)local_58));
        local_28 = (int)ROUND(dVar16);
        dVar16 = crt_math_c_round_FUN_005fe6b0((double)(fVar12 - fVar14));
        local_28 = (int)ROUND(dVar16);
        dVar16 = crt_math_c_round_FUN_005fe6b0((double)(fVar13 - fVar15));
        local_28 = (int)ROUND(dVar16);
      }
      local_98 = 1.0001;
      fVar1 = local_34;
      iVar10 = local_2c;
      iVar9 = local_28;
      while( true ) {
        local_28 = iVar9;
        local_2c = iVar10;
        local_34 = fVar1;
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,(int)local_38,local_3c,(int)local_34);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          local_18 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                               (this_ptr_00,ray_start,&local_90,&local_84,local_70);
          if (local_18 < local_98) {
            if ((extraout_EBX != (CVector3f *)0x0) && (extraout_EBX != &local_84)) {
              extraout_EBX->x = local_84.x;
              extraout_EBX->y = local_84.y;
              extraout_EBX->z = local_84.z;
            }
            local_98 = local_18;
            if (out_intersection_type != (int *)0x0) {
              *out_intersection_type = local_70[0];
            }
          }
          if (local_98 <= 1.0) {
            return local_98;
          }
        }
        iVar11 = iVar11 + -1;
        if (iVar11 < 1) break;
        fVar1 = (float)((int)local_34 + local_4c);
        iVar10 = local_2c + local_1c;
        iVar9 = local_28 - local_48;
        if (local_30 < 0) {
          if (local_28 < 0) {
            local_38 = (float)((int)local_38 + local_20);
            local_30 = local_30 + local_1c;
            fVar1 = local_34;
            iVar10 = local_2c;
            iVar9 = local_28 + local_44;
          }
        }
        else if (-1 < local_2c) {
          local_3c = local_3c + local_50;
          local_30 = local_30 - local_48;
          fVar1 = local_34;
          iVar10 = local_2c - local_44;
          iVar9 = local_28;
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
