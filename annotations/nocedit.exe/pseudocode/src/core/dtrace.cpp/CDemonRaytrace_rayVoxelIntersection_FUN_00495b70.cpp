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
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CDemonCube *this_ptr_00;
  float fVar6;
  float *extraout_EBX;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  double dVar13;
  double value;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  ulonglong local_84;
  ulonglong local_7c;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_58;
  
  fVar20 = ray_start->z;
  fVar17 = (this_ptr->bbox_min).z;
  fVar6 = (this_ptr->cell_size).z;
  dVar12 = crt_math_c_floor_FUN_005feb90
                     ((double)((ray_start->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  crt_math_c_round_FUN_005fe6b0(dVar12);
  dVar14 = (double)((fVar20 - fVar17) / fVar6);
  local_84 = crt_math_c_floor_FUN_005feb90(dVar14);
  fVar20 = (float)((ulonglong)dVar14 >> 0x20);
  crt_math_c_round_FUN_005fe6b0(local_84);
  dVar14 = (double)fVar20;
  dVar13 = crt_math_c_floor_FUN_005feb90(dVar14);
  fVar8 = ((float10)ray_end->x - (float10)(this_ptr->bbox_min).x) / (float10)(this_ptr->cell_size).x
  ;
  fVar9 = ((float10)ray_end->y - (float10)(this_ptr->bbox_min).y) / (float10)(this_ptr->cell_size).y
  ;
  fVar19 = (float)((ulonglong)dVar14 >> 0x20);
  crt_math_c_round_FUN_005fe6b0(dVar13);
  fVar20 = (float)fVar9;
  dVar14 = (double)(float)fVar8;
  dVar13 = crt_math_c_floor_FUN_005feb90(dVar14);
  fVar18 = (float)((ulonglong)dVar14 >> 0x20);
  fVar17 = 6.737184e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar13);
  iVar1 = (int)ROUND(dVar14);
  local_7c._0_4_ = SUB84 /* extract 2-byte value */(dVar12,0);
  dVar14 = (double)fVar17;
  dVar12 = crt_math_c_floor_FUN_005feb90(dVar14);
  fVar16 = (float)((ulonglong)dVar14 >> 0x20);
  fVar15 = 6.73724e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar12);
  iVar5 = (int)ROUND(dVar14);
  dVar14 = (double)fVar19;
  value = crt_math_c_floor_FUN_005feb90(dVar14);
  fVar6 = (float)((ulonglong)dVar14 >> 0x20);
  fVar17 = 6.737297e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0(value);
  local_8c = (int)ROUND(dVar14);
  if ((-1 < local_68) || (-1 < iVar5)) {
    local_90 = (int)((ulonglong)dVar13 >> 0x20);
    if ((iStack_6c < 0) && ((longlong)dVar13 < 0)) {
      return -1.0;
    }
    if ((local_64 < 0) && (local_8c < 0)) {
      return -1.0;
    }
    iVar7 = (this_ptr->grid_coord).x;
    if ((((local_68 < iVar7) || (iVar5 < iVar7)) &&
        ((iVar7 = (this_ptr->grid_coord).y, iStack_6c < iVar7 || (local_90 < iVar7)))) &&
       ((iVar7 = (this_ptr->grid_coord).z, local_64 < iVar7 || (local_8c < iVar7)))) {
      fVar2 = ray_end->x - ray_start->x;
      fVar3 = ray_end->y - ray_start->y;
      iVar7 = 1;
      fVar4 = ray_end->z - ray_start->z;
      uVar21 = (ulonglong)(uint)fVar4;
      local_94 = SUB84 /* extract 2-byte value */(dVar13,0);
      local_98 = (int)((ulonglong)dVar12 >> 0x20);
      if ((local_68 != iVar5) || ((iStack_6c != local_90 || (local_64 != local_8c)))) {
        fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
        if (fVar2 <= 0.0) {
          return -1.0;
        }
        fVar8 = (float10)2.684355e+08f / (float10)fVar2;
        fVar9 = ABS((float10)fVar17 - (float10)fVar16) * fVar8;
        fVar11 = ABS((float10)fVar18 - (float10)fVar6) * fVar8;
        crt_math_c_round_FUN_005fe6b0((double)(ABS((float10)fVar19 - (float10)fVar15) * fVar8));
        fVar10 = (float10)fVar19;
        crt_math_c_round_FUN_005fe6b0((double)fVar9);
        fVar8 = (float10)0;
        dVar14 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
        local_84 = (double)CONCAT44 /* combine 2-byte values */((int)ROUND(dVar14),(int)local_84);
        if (fVar10 < fVar8) {
          iVar5 = iStack_74 - local_94;
          fVar6 = 6.737663e-39 - (float)iStack_74;
        }
        else {
          iVar5 = local_94 - iStack_74;
          fVar6 = (float)(iStack_74 + 1) - 6.737663e-39;
        }
        local_9c = SUB84 /* extract 2-byte value */(dVar12,0);
        if (fVar20 < 0.0) {
          local_8c = -1;
          local_9c = iVar1 - local_9c;
          fVar17 = fVar17 - (float)iVar1;
        }
        else {
          local_9c = local_9c - iVar1;
          fVar17 = (float)(iVar1 + 1) - fVar17;
          local_8c = 1;
        }
        if (fVar19 < 0.0) {
          iVar7 = local_70 - local_98;
          local_7c._0_4_ = 6.737684e-39 - (float)local_70;
        }
        else {
          iVar7 = local_98 - local_70;
          local_7c._0_4_ = (float)(local_70 + 1) - 6.737684e-39;
        }
        iVar7 = iVar5 + 1 + local_9c + iVar7;
        fVar8 = (float10)local_58 * (float10)(float)local_7c;
        fVar10 = (float10)(int)ROUND(dVar14);
        fVar9 = fVar10 * (float10)fVar6;
        fVar10 = fVar10 * (float10)fVar17;
        fVar11 = (float10)(int)local_84 * (float10)(float)local_7c;
        crt_math_c_round_FUN_005fe6b0
                  ((double)((float10)local_58 * (float10)fVar6 -
                           (float10)(int)local_84 * (float10)fVar17));
        crt_math_c_round_FUN_005fe6b0((double)(fVar8 - fVar10));
        dVar14 = crt_math_c_round_FUN_005fe6b0((double)(fVar9 - fVar11));
        local_70 = (int)ROUND(dVar14);
      }
      local_7c = CONCAT44 /* combine 2-byte values */(iVar1,(float)local_7c);
      fVar17 = 1.0001;
      while( true ) {
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,local_84._4_4_,(int)local_84,(int)(float)local_7c);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          fVar6 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                            (this_ptr_00,ray_start,(CVector3f *)&stack0xffffff28,
                             (CVector3f *)&stack0xffffff34,(uint *)&stack0xffffff48);
          if (fVar6 < fVar17) {
            if ((extraout_EBX != (float *)0x0) && (extraout_EBX != (float *)&stack0xffffff34)) {
              *extraout_EBX = fVar18;
              extraout_EBX[1] = fVar20;
              extraout_EBX[2] = fVar19;
            }
            fVar17 = fVar6;
            if (out_intersection_type != (int *)0x0) {
              *out_intersection_type = (uint)uVar21;
            }
          }
          if (fVar17 <= 1.0) {
            return fVar17;
          }
        }
        iVar7 = iVar7 + -1;
        if (iVar7 < 1) break;
        if (local_7c < 0) {
          if (-1 < local_70) goto LAB_004961a7;
          local_84 = (double)CONCAT44 /* combine 2-byte values */(local_84._4_4_ + local_68,(int)local_84);
          local_70 = local_70 + local_8c;
          local_7c = CONCAT44 /* combine 2-byte values */(local_7c._4_4_ + local_64,(float)local_7c);
        }
        else if (iStack_74 < 0) {
LAB_004961a7:
          local_7c = CONCAT44 /* combine 2-byte values */(local_7c._4_4_,(int)(float)local_7c + local_94);
          iStack_74 = iStack_74 + local_64;
          local_70 = local_70 - local_90;
        }
        else {
          local_84 = (double)CONCAT44 /* combine 2-byte values */(local_84._4_4_,(int)local_84 + local_98);
          local_7c = CONCAT44 /* combine 2-byte values */(local_7c._4_4_ - local_90,(float)local_7c);
          iStack_74 = iStack_74 - local_8c;
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
