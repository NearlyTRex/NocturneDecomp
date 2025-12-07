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
  int iVar3;
  int iVar4;
  CDemonCube *this_ptr_00;
  int in_EDX;
  float fVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  float10 in_ST0;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  double dVar12;
  float fStack_dc;
  float fStack_cc;
  float fStack_c4;
  byte auStack_c0 [8];
  ulonglong local_b8;
  byte local_b0 [8];
  float local_a8;
  CDemonRaytrace *local_a4;
  CDemonRaytrace *local_9c;
  int local_98;
  CDemonRaytrace *local_94;
  int local_90;
  CDemonRaytrace *local_8c;
  float local_88;
  CDemonRaytrace *local_84;
  int local_80;
  CDemonRaytrace *local_7c;
  int local_78;
  int iStack_74;
  uint local_70;
  int iStack_6c;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  uint local_44;
  float local_40;
  float local_3c;
  float local_38;
  
  local_a8 = (ray_start->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x;
  local_a4 = (CDemonRaytrace *)((ray_start->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y);
  local_b0._4_4_ = (ray_start->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z;
  local_b8 = (double)local_a8;
  auStack_c0._4_4_ = 0x495bce;
  dVar11 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  local_7c = this_ptr;
  local_b8 = (double)CONCAT44 /* combine 2-byte values */(local_b8._4_4_,0x495be2);
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,this_ptr));
  local_40 = (float)(int)ROUND(dVar12);
  auStack_c0 = (byte  [8])(double)(float)local_b0._4_4_;
  dVar12 = crt_math_c_floor_FUN_005feb90(dVar11);
  local_84 = this_ptr;
  auStack_c0._0_4_ = 0x495c0b;
  local_80 = in_EDX;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,this_ptr));
  local_4c = (int)ROUND(dVar11);
  dVar11 = (double)(float)auStack_c0._4_4_;
  dVar12 = crt_math_c_floor_FUN_005feb90(dVar12);
  fVar9 = (float10)dVar12;
  local_8c = this_ptr;
  fVar7 = ((float10)ray_end->x - (float10)(this_ptr->bbox_min).x) / (float10)(this_ptr->cell_size).x
  ;
  fVar1 = (ray_end->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar8 = ((float10)ray_end->z - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z
  ;
  fStack_c4 = (float)((ulonglong)dVar11 >> 0x20);
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,this_ptr));
  local_4c = (int)ROUND(dVar11);
  local_b0._4_4_ = (uint)fVar7;
  dVar11 = (double)(float)local_b0._4_4_;
  local_b8._4_4_ = (float)fVar8;
  dVar12 = crt_math_c_floor_FUN_005feb90((double)fVar9);
  local_94 = this_ptr;
  fStack_cc = (float)((ulonglong)dVar11 >> 0x20);
  local_90 = in_EDX;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,this_ptr));
  local_78 = (int)ROUND(dVar11);
  dVar11 = crt_math_c_floor_FUN_005feb90(dVar12);
  local_9c = this_ptr;
  local_98 = in_EDX;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,this_ptr));
  local_88 = (float)(int)ROUND(dVar12);
  crt_math_c_floor_FUN_005feb90(dVar11);
  local_a4 = this_ptr;
  fStack_dc = (float)((ulonglong)(double)fStack_c4 >> 0x20);
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,this_ptr));
  local_8c = (CDemonRaytrace *)(int)ROUND(dVar11);
  if ((-1 < (int)local_68) || (-1 < (int)local_88)) {
    if ((iStack_6c < 0) && (local_90 < 0)) {
      return -1.0;
    }
    if (((int)local_64 < 0) && ((int)local_8c < 0)) {
      return -1.0;
    }
    iVar6 = (this_ptr->grid_coord).x;
    if (((((int)local_68 < iVar6) || ((int)local_88 < iVar6)) &&
        ((iVar6 = (this_ptr->grid_coord).y, iStack_6c < iVar6 || (local_90 < iVar6)))) &&
       ((iVar6 = (this_ptr->grid_coord).z, (int)local_64 < iVar6 || ((int)local_8c < iVar6)))) {
      auStack_c0._0_4_ = ray_end->x - ray_start->x;
      auStack_c0._4_4_ = ray_end->y - ray_start->y;
      iVar6 = 1;
      fVar2 = ray_end->z - ray_start->z;
      local_b8 = (double)CONCAT44 /* combine 2-byte values */(local_b8._4_4_,fVar2);
      if ((local_68 != local_88) ||
         ((iStack_6c != local_90 ||
          (fVar5 = local_64, iVar3 = local_5c, iVar4 = local_58,
          (CDemonRaytrace *)local_64 != local_8c)))) {
        fVar2 = SQRT(fVar2 * fVar2 +
                     (float)auStack_c0._0_4_ * (float)auStack_c0._0_4_ +
                     (float)auStack_c0._4_4_ * (float)auStack_c0._4_4_);
        if (fVar2 <= 0.0) {
          return -1.0;
        }
        fVar9 = (float10)2.684355e+08f / (float10)fVar2;
        fVar8 = ABS((float10)fStack_cc - (float10)fStack_dc) * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)(ABS((float10)fStack_c4 - (float10)6.73724e-39) * fVar9));
        local_64 = (float)(int)ROUND(dVar11);
        fVar7 = (float10)(float)local_b0._4_4_;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)(ABS((float10)6.737297e-39 - (float10)3.107556e-05) * fVar9));
        local_3c = (float)(int)ROUND(dVar11);
        fVar9 = (float10)0;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
        local_68 = (float)(int)ROUND(dVar11);
        if (fVar7 < fVar9) {
          iVar3 = local_5c - (int)local_7c;
          local_8c = (CDemonRaytrace *)(fStack_cc - (float)local_5c);
          local_44 = 0xffffffff;
        }
        else {
          iVar3 = (int)local_7c - local_5c;
          local_8c = (CDemonRaytrace *)((float)(local_5c + 1) - fStack_cc);
          local_44 = 1;
        }
        if ((float)local_b0._0_4_ < 0.0) {
          iStack_74 = -1;
          iVar4 = local_60 - (int)local_84;
          local_88 = fVar1 - (float)local_60;
        }
        else {
          iVar4 = (int)local_84 - local_60;
          local_88 = (float)(local_60 + 1) - fVar1;
          iStack_74 = 1;
        }
        if ((float)local_b0._4_4_ < 0.0) {
          local_70 = 0xffffffff;
          iVar6 = local_58 - local_80;
          local_64 = 6.737684e-39 - (float)local_58;
        }
        else {
          iVar6 = local_80 - local_58;
          local_64 = (float)(local_58 + 1) - 6.737684e-39;
          local_70 = 1;
        }
        iVar6 = iVar3 + 1 + iVar4 + iVar6;
        fVar9 = (float10)(int)local_40 * (float10)local_64;
        fVar7 = (float10)(int)local_68 * (float10)(float)local_8c;
        fVar8 = (float10)(int)local_68 * (float10)local_88;
        fVar10 = (float10)iStack_6c * (float10)local_64;
        local_38 = local_68;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)(int)local_40 * (float10)(float)local_8c -
                                    (float10)iStack_6c * (float10)local_88));
        local_58 = (int)ROUND(dVar11);
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)(fVar9 - fVar8));
        local_58 = (int)ROUND(dVar11);
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)(fVar7 - fVar10));
        fVar5 = local_64;
        iVar3 = local_5c;
        iVar4 = (int)ROUND(dVar11);
      }
      while( true ) {
        local_58 = iVar4;
        local_5c = iVar3;
        local_64 = fVar5;
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,(int)local_68,iStack_6c,(int)local_64);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          local_40 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                               (this_ptr_00,ray_start,(CVector3f *)(auStack_c0 + 4),
                                (CVector3f *)local_b0,(uint *)&local_9c);
          if (local_40 < (float)auStack_c0._0_4_) {
            if ((out_intersection_point != (CVector3f *)0x0) &&
               (out_intersection_point != (CVector3f *)(local_b0 + 4))) {
              out_intersection_point->x = (float)local_b0._4_4_;
              out_intersection_point->y = local_a8;
              out_intersection_point->z = (float)local_a4;
            }
            auStack_c0._0_4_ = local_40;
            if (out_intersection_type != (int *)0x0) {
              *out_intersection_type = local_98;
            }
          }
          local_3c = local_40;
          if ((float)auStack_c0._0_4_ <= 1.0) {
            return (float)auStack_c0._0_4_;
          }
        }
        iVar6 = iVar6 + -1;
        if (iVar6 < 1) break;
        fVar5 = (float)((int)&local_7c->rendering_mode + (int)local_64);
        iVar3 = local_5c + local_4c;
        iVar4 = local_58 - local_78;
        if (local_60 < 0) {
          if (local_58 < 0) {
            local_68 = (float)((int)local_68 + local_50);
            local_60 = local_60 + local_4c;
            fVar5 = local_64;
            iVar3 = local_5c;
            iVar4 = local_58 + iStack_74;
          }
        }
        else if (-1 < local_5c) {
          iStack_6c = iStack_6c + local_80;
          local_60 = local_60 - local_78;
          fVar5 = local_64;
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
