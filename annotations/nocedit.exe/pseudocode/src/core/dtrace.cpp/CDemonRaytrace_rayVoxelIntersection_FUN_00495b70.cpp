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
  int iVar6;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_EAX_01;
  uint extraout_EAX_02;
  uint extraout_EAX_03;
  float extraout_EAX_04;
  float fVar7;
  int iVar8;
  CDemonCube *this_ptr_00;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  CVector3f *extraout_EDX_04;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float unaff_ESI;
  int iVar9;
  float10 in_ST0;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float in_stack_ffffff68;
  float local_80;
  CVector3f *local_78;
  CVector3f CStack_74;
  byte local_68 [8];
  float local_60;
  float local_5c;
  float local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_44;
  uint local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int iVar20;
  
  fVar16 = (ray_start->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x;
  fVar17 = (ray_start->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar1 = ray_start->z;
  fVar2 = (this_ptr->bbox_min).z;
  fVar3 = (this_ptr->cell_size).z;
  dVar15 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar14 = (float10)dVar15;
  fVar10 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  local_38 = (float)(int)ROUND(fVar10);
  dVar15 = crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)dVar15;
  fVar10 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00));
  local_3c = (float)(int)ROUND(fVar10);
  dVar15 = crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)dVar15;
  fVar11 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,extraout_EAX_01);
  fVar10 = ((float10)ray_end->x - (float10)(this_ptr->bbox_min).x) /
           (float10)(this_ptr->cell_size).x;
  fVar12 = ((float10)ray_end->y - (float10)(this_ptr->bbox_min).y) /
           (float10)(this_ptr->cell_size).y;
  fVar13 = ((float10)ray_end->z - (float10)(this_ptr->bbox_min).z) /
           (float10)(this_ptr->cell_size).z;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,this_ptr));
  local_34 = (float)(int)ROUND(fVar11);
  fVar19 = (float)fVar13;
  dVar15 = crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)dVar15;
  fVar13 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_02,extraout_EAX_02);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_02,extraout_EAX_02));
  local_58 = (float)(int)ROUND(fVar13);
  dVar15 = crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)dVar15;
  fVar13 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_03,extraout_EAX_03);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_03,extraout_EAX_03));
  local_60 = (float)(int)ROUND(fVar13);
  crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_04,extraout_EAX_04);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_04,extraout_EAX_04));
  local_5c = (float)(int)ROUND(fVar14);
  if ((-1 < (int)local_38) || (-1 < (int)local_58)) {
    if (((int)local_3c < 0) && ((int)local_60 < 0)) {
      return -1.0;
    }
    if (((int)local_34 < 0) && ((int)local_5c < 0)) {
      return -1.0;
    }
    iVar9 = (this_ptr->grid_coord).x;
    if (((((int)local_38 < iVar9) || ((int)local_58 < iVar9)) &&
        ((iVar9 = (this_ptr->grid_coord).y, (int)local_3c < iVar9 || ((int)local_60 < iVar9)))) &&
       ((iVar9 = (this_ptr->grid_coord).z, (int)local_34 < iVar9 || ((int)local_5c < iVar9)))) {
      fVar18 = ray_end->x - ray_start->x;
      fVar4 = ray_end->y - ray_start->y;
      iVar9 = 1;
      fVar5 = ray_end->z - ray_start->z;
      fVar7 = local_38;
      local_78 = extraout_EDX_04;
      if ((local_38 != local_58) ||
         ((fVar7 = local_3c, local_3c != local_60 ||
          (fVar7 = local_34, iVar8 = local_1c, iVar6 = local_14, local_34 != local_5c)))) {
        fVar18 = SQRT(fVar5 * fVar5 + fVar18 * fVar18 + fVar4 * fVar4);
        if (0.0 >= fVar18) {
          return -1.0;
        }
        fVar13 = (float10)2.684355e+08f / (float10)fVar18;
        fVar14 = ABS((float10)(float)fVar10 - (float10)fVar16) * fVar13;
        fVar12 = ABS((float10)(float)fVar12 - (float10)fVar17) * fVar13;
        fVar13 = ABS((float10)fVar19 - (float10)((fVar1 - fVar2) / fVar3)) * fVar13;
        dVar15 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */(this_ptr,CONCAT22 /* combine 2-byte values */((short)((uint)fVar7 >> 0x10),
                                                               (ushort)(0.0 < fVar18) << 8 |
                                                               (ushort)NAN(fVar18) << 10 |
                                                               (ushort)(fVar18 == 0.0) << 0xe)));
        local_44 = (int)ROUND(fVar14);
        fVar10 = (float10)fVar4;
        dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
        local_14 = (int)ROUND(fVar12);
        fVar14 = (float10)0;
        dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
        unaff_ESI = (float)(int)ROUND(fVar13);
        if (fVar10 < fVar14) {
          local_4c = local_2c - local_4c;
          local_5c = fVar19 - (float)local_2c;
          local_14 = -1;
        }
        else {
          local_4c = local_4c - local_2c;
          local_5c = (float)(local_2c + 1) - fVar19;
          local_14 = 1;
        }
        if (local_80 < 0.0) {
          local_44 = 0xffffffff;
          iVar8 = local_30 - local_54;
          local_58 = in_stack_ffffff68 - (float)local_30;
        }
        else {
          iVar8 = local_54 - local_30;
          local_58 = (float)(local_30 + 1) - in_stack_ffffff68;
          local_44 = 1;
          local_54 = (uint)((ulonglong)dVar15 >> 0x20);
        }
        if (extraout_EAX_04 < 0.0) {
          local_40 = 0xffffffff;
          iVar9 = local_28 - local_50;
          local_34 = fVar18 - (float)local_28;
          local_54 = local_50;
        }
        else {
          iVar9 = local_50 - local_28;
          local_34 = (float)(local_28 + 1) - fVar18;
          local_40 = 1;
        }
        iVar9 = local_4c + 1 + iVar8 + iVar9;
        fVar12 = (float10)unaff_EBP * (float10)local_34;
        fVar13 = (float10)(int)unaff_ESI * (float10)local_5c;
        fVar14 = (float10)(int)unaff_ESI * (float10)local_58;
        fVar10 = (float10)unaff_EBP * (float10)local_5c - (float10)(int)local_3c * (float10)local_58
        ;
        fVar11 = (float10)(int)local_3c * (float10)local_34;
        local_38 = unaff_ESI;
        dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(local_54,unaff_ESI));
        fVar12 = fVar12 - fVar14;
        local_20 = (int)ROUND(fVar10);
        dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
        fVar13 = fVar13 - fVar11;
        local_18 = (int)ROUND(fVar12);
        crt_math_c_round_FUN_005fe6b0(dVar15);
        iVar8 = local_1c;
        iVar6 = local_14;
        unaff_EBP = (int)ROUND(fVar13);
      }
      while( true ) {
        iVar20 = unaff_EBP;
        local_14 = iVar6;
        local_1c = iVar8;
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,local_20,iStack_24,local_1c);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          ray_start = (CVector3f *)
                      core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                                (this_ptr_00,ray_start,&CStack_74,(CVector3f *)local_68,&local_54);
          if ((float)ray_start < (float)local_78) {
            if ((out_intersection_point != (CVector3f *)0x0) &&
               (out_intersection_point != (CVector3f *)(local_68 + 4))) {
              out_intersection_point->x = (float)local_68._4_4_;
              out_intersection_point->y = local_60;
              out_intersection_point->z = local_5c;
            }
            local_78 = ray_start;
            if (out_intersection_type != (int *)0x0) {
              *out_intersection_type = local_50;
            }
          }
          if ((float)local_78 <= 1.0) {
            return (float)local_78;
          }
        }
        iVar9 = iVar9 + -1;
        if (iVar9 < 1) break;
        iVar8 = local_1c + (int)local_34;
        iVar6 = local_14 + unaff_EBX;
        unaff_EBP = iVar20 - local_30;
        if (local_18 < 0) {
          if (iVar20 < 0) {
            local_20 = local_20 + (int)unaff_ESI;
            local_18 = local_18 + unaff_EBX;
            iVar8 = local_1c;
            iVar6 = local_14;
            unaff_EBP = iVar20 + local_2c;
          }
        }
        else if (-1 < local_14) {
          iStack_24 = iStack_24 + (int)local_38;
          local_18 = local_18 - local_30;
          iVar8 = local_1c;
          iVar6 = local_14 - local_2c;
          unaff_EBP = iVar20;
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
