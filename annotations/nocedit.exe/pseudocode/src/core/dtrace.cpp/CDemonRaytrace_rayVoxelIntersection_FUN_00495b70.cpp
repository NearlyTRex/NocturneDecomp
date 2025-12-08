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
  CDemonCube *this_ptr_00;
  float *extraout_EBX;
  BADSPACEBASE *in_ESP;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar22;
  CVector3f local_b0;
  double local_a4;
  ulonglong local_9c;
  ulonglong local_94;
  ulonglong local_8c;
  ulonglong local_84;
  ulonglong local_7c;
  int iStack_74;
  uint local_70;
  int iStack_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  uint local_44;
  float local_40;
  float local_3c;
  int local_38;
  
  local_b0.z = (ray_start->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x;
  local_b0.y = (ray_start->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z;
  local_a4 = (double)CONCAT44 /* combine 2-byte values */(local_a4._4_4_,
                              (ray_start->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y);
  local_7c = crt_math_c_floor_FUN_005feb90((double)local_b0.z);
  dVar12 = crt_math_c_round_FUN_005fe6b0(local_7c);
  local_40 = (float)(int)ROUND(dVar12);
  dVar12 = (double)local_b0.y;
  local_84 = crt_math_c_floor_FUN_005feb90(dVar12);
  fVar18 = (float)((ulonglong)dVar12 >> 0x20);
  dVar12 = crt_math_c_round_FUN_005fe6b0(local_84);
  local_4c = (int)ROUND(dVar12);
  dVar12 = (double)fVar18;
  local_8c = crt_math_c_floor_FUN_005feb90(dVar12);
  fVar8 = ((float10)ray_end->x - (float10)(this_ptr->bbox_min).x) / (float10)(this_ptr->cell_size).x
  ;
  fVar9 = ((float10)ray_end->y - (float10)(this_ptr->bbox_min).y) / (float10)(this_ptr->cell_size).y
  ;
  fVar21 = (float)((ulonglong)dVar12 >> 0x20);
  dVar12 = crt_math_c_round_FUN_005fe6b0(local_8c);
  local_4c = (int)ROUND(dVar12);
  local_b0.y = (float)fVar8;
  fVar20 = (float)fVar9;
  dVar12 = (double)local_b0.y;
  local_94 = crt_math_c_floor_FUN_005feb90(dVar12);
  fVar19 = (float)((ulonglong)dVar12 >> 0x20);
  fVar18 = 6.737184e-39;
  dVar12 = crt_math_c_round_FUN_005fe6b0(local_94);
  local_7c = (double)CONCAT44 /* combine 2-byte values */((int)ROUND(dVar12),(int)local_7c);
  dVar12 = (double)fVar18;
  local_9c = crt_math_c_floor_FUN_005feb90(dVar12);
  fVar17 = (float)((ulonglong)dVar12 >> 0x20);
  fVar16 = 6.73724e-39;
  dVar13 = crt_math_c_round_FUN_005fe6b0(local_9c);
  dVar12 = (double)fVar21;
  local_8c._4_4_ = (int)ROUND(dVar13);
  local_a4 = crt_math_c_floor_FUN_005feb90(dVar12);
  fVar15 = (float)((ulonglong)dVar12 >> 0x20);
  fVar14 = 6.737297e-39;
  dVar12 = crt_math_c_round_FUN_005fe6b0(local_a4);
  fVar18 = (float)(int)ROUND(dVar12);
  local_8c = (double)CONCAT44 /* combine 2-byte values */(local_8c._4_4_,fVar18);
  if ((-1 < local_68) || (-1 < local_8c._4_4_)) {
    if ((iStack_6c < 0) && ((longlong)local_94 < 0)) {
      return -1.0;
    }
    if (((int)local_64 < 0) && ((int)fVar18 < 0)) {
      return -1.0;
    }
    iVar7 = (this_ptr->grid_coord).x;
    if ((((local_68 < iVar7) || (local_8c._4_4_ < iVar7)) &&
        ((iVar7 = (this_ptr->grid_coord).y, iStack_6c < iVar7 || (local_94._4_4_ < iVar7)))) &&
       ((iVar7 = (this_ptr->grid_coord).z, (int)local_64 < iVar7 || ((int)fVar18 < iVar7)))) {
      fVar1 = ray_end->x - ray_start->x;
      fVar2 = ray_end->y - ray_start->y;
      uVar22 = CONCAT44 /* combine 2-byte values */(fVar2,fVar1);
      iVar7 = 1;
      fVar3 = ray_end->z - ray_start->z;
      if ((local_68 != local_8c._4_4_) ||
         ((iStack_6c != local_94._4_4_ ||
          (fVar4 = local_64, iVar5 = local_5c, iVar6 = local_58, local_64 != fVar18)))) {
        fVar18 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
        if (fVar18 <= 0.0) {
          return -1.0;
        }
        fVar8 = (float10)2.684355e+08f / (float10)fVar18;
        fVar9 = ABS((float10)fVar14 - (float10)fVar17) * fVar8;
        fVar11 = ABS((float10)fVar19 - (float10)fVar15) * fVar8;
        dVar12 = crt_math_c_round_FUN_005fe6b0
                           ((double)(ABS((float10)fVar21 - (float10)fVar16) * fVar8));
        local_64 = (float)(int)ROUND(dVar12);
        fVar10 = (float10)local_b0.y;
        fVar18 = 6.737684e-39;
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
        local_3c = (float)(int)ROUND(dVar12);
        fVar8 = (float10)0;
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
        local_68 = (int)ROUND(dVar12);
        if (fVar10 < fVar8) {
          iVar5 = local_5c - (int)local_7c;
          fVar19 = fVar19 - (float)local_5c;
          local_44 = 0xffffffff;
        }
        else {
          iVar5 = (int)local_7c - local_5c;
          fVar19 = (float)(local_5c + 1) - fVar19;
          local_44 = 1;
        }
        if (local_b0.x < 0.0) {
          iStack_74 = -1;
          iVar6 = local_60 - (int)local_84;
          fVar20 = fVar20 - (float)local_60;
        }
        else {
          iVar6 = (int)local_84 - local_60;
          fVar20 = (float)(local_60 + 1) - fVar20;
          iStack_74 = 1;
        }
        local_8c = (double)CONCAT44 /* combine 2-byte values */(fVar20,fVar19);
        if (local_b0.y < 0.0) {
          local_70 = 0xffffffff;
          iVar7 = local_58 - local_84._4_4_;
          local_64 = fVar18 - (float)local_58;
        }
        else {
          iVar7 = local_84._4_4_ - local_58;
          local_64 = (float)(local_58 + 1) - fVar18;
          local_70 = 1;
        }
        iVar7 = iVar5 + 1 + iVar6 + iVar7;
        fVar8 = (float10)(int)local_40 * (float10)local_64;
        fVar9 = (float10)local_68 * (float10)fVar19;
        fVar10 = (float10)local_68 * (float10)fVar20;
        fVar11 = (float10)iStack_6c * (float10)local_64;
        local_38 = local_68;
        dVar12 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)(int)local_40 * (float10)fVar19 -
                                    (float10)iStack_6c * (float10)fVar20));
        local_58 = (int)ROUND(dVar12);
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar8 - fVar10));
        local_58 = (int)ROUND(dVar12);
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar9 - fVar11));
        fVar4 = local_64;
        iVar5 = local_5c;
        iVar6 = (int)ROUND(dVar12);
      }
      while( true ) {
        local_58 = iVar6;
        local_5c = iVar5;
        local_64 = fVar4;
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,local_68,iStack_6c,(int)local_64);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          local_40 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                               (this_ptr_00,ray_start,(CVector3f *)&stack0xffffff44,&local_b0,
                                (uint *)&local_9c);
          if (local_40 < (float)uVar22) {
            if ((extraout_EBX != (float *)0x0) && (extraout_EBX != &local_b0.y)) {
              *extraout_EBX = local_b0.y;
              extraout_EBX[1] = local_b0.z;
              extraout_EBX[2] = local_a4._0_4_;
            }
            if (out_intersection_type != (int *)0x0) {
              *out_intersection_type = local_9c._4_4_;
            }
            uVar22 = (ulonglong)(uint)local_40;
          }
          local_3c = local_40;
          if ((float)uVar22 <= 1.0) {
            return (float)uVar22;
          }
        }
        iVar7 = iVar7 + -1;
        if (iVar7 < 1) break;
        fVar4 = (float)((int)local_64 + (int)local_7c);
        iVar5 = local_5c + local_4c;
        iVar6 = local_58 - local_7c._4_4_;
        if (local_60 < 0) {
          if (local_58 < 0) {
            local_68 = local_68 + local_50;
            local_60 = local_60 + local_4c;
            fVar4 = local_64;
            iVar5 = local_5c;
            iVar6 = local_58 + iStack_74;
          }
        }
        else if (-1 < local_5c) {
          iStack_6c = iStack_6c + local_84._4_4_;
          local_60 = local_60 - local_7c._4_4_;
          fVar4 = local_64;
          iVar5 = local_5c - iStack_74;
          iVar6 = local_58;
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
