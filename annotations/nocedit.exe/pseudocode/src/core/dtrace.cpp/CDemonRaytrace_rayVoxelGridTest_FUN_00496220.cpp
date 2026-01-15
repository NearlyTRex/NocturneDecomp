// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
// Address: 00496220
// Address Range: [[00496220, 004966ed]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220(CDemonRaytrace * this_ptr, CVector3f * start_pos, CVector3f * end_pos)

#include "nocturne.h"

int __cdecl
core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
          (CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *extraout_EAX;
  int iVar5;
  CDemonCube *this_ptr_00;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  float local_a0;
  byte local_94 [12];
  byte local_88 [12];
  float local_7c;
  int iStack_78;
  float fStack_74;
  uint local_70;
  int local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_14;
  
  local_50 = (start_pos->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar7 = (float10)1 / (float10)(this_ptr->cell_size).x;
  fVar8 = ((float10)start_pos->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->cell_size).z;
  fVar9 = ((float10)start_pos->x - (float10)(this_ptr->bbox_min).x) * fVar7;
  fVar7 = ((float10)end_pos->x - (float10)(this_ptr->bbox_min).x) * fVar7;
  local_58 = (float)fVar8;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)local_50);
  fVar10 = (float10)dVar11;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  local_38 = (int)ROUND(fVar10);
  local_30 = (float)(int)ROUND(dVar11);
  local_54 = (float)fVar9;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
  local_38 = (int)ROUND(dVar11);
  join_0x00000008_0x00000000_ = crt_math_c_floor_FUN_005feb90((double)fVar7);
  fVar7 = ((float10)end_pos->y - (float10)(this_ptr->bbox_min).y) / (float10)(this_ptr->cell_size).y
  ;
  dVar11 = crt_math_c_round_FUN_005fe6b0(join_0x00000008_0x00000000_);
  local_60 = (float)(int)ROUND(dVar11);
  local_88._4_8_ = crt_math_c_floor_FUN_005feb90((double)fVar7);
  fVar7 = ((float10)end_pos->z - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z
  ;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)local_88._4_8_);
  local_6c = (int)ROUND(dVar11);
  local_88._4_8_ = crt_math_c_floor_FUN_005feb90((double)fVar7);
  iVar6 = 1;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)local_88._4_8_);
  fVar1 = *extraout_EAX - start_pos->x;
  local_64 = (float)(int)ROUND(dVar11);
  local_94._0_4_ = extraout_EAX[1] - start_pos->y;
  local_94._4_4_ = extraout_EAX[2] - start_pos->z;
  if (((local_30 != local_60) || (local_34 != local_6c)) ||
     (iVar5 = local_28, iVar3 = local_20, iVar4 = local_1c, local_2c != local_64)) {
    fVar2 = SQRT((float)local_94._4_4_ * (float)local_94._4_4_ +
                 fVar1 * fVar1 + (float)local_94._0_4_ * (float)local_94._0_4_);
    if (fVar2 <= 0.0) {
      return 0;
    }
    fVar8 = (float10)fVar1;
    fVar7 = (float10)2.684355e+08f / (float10)fVar2;
    fVar9 = ABS((float10)(float)local_94._0_4_) * fVar7;
    fVar10 = ABS((float10)(float)local_94._4_4_) * fVar7;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)(ABS(fVar8) * fVar7));
    local_40 = (int)ROUND(dVar11);
    fVar7 = (float10)0;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
    fVar9 = (float10)dVar11;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
    local_4c = (int)ROUND(fVar9);
    local_44 = (int)ROUND(dVar11);
    if (fVar8 < fVar7) {
      iVar5 = local_3c - local_6c;
      local_54 = -NAN;
      local_7c = local_5c - (float)local_3c;
    }
    else {
      iVar5 = local_6c - local_3c;
      local_54 = 1.4013e-45;
      local_7c = (float)(local_3c + 1) - local_5c;
    }
    if (local_a0 < 0.0) {
      iStack_78 = local_40 - iStack_78;
      local_58 = -NAN;
      local_64 = local_60 - (float)local_40;
    }
    else {
      iStack_78 = iStack_78 - local_40;
      local_58 = 1.4013e-45;
      local_64 = (float)(local_40 + 1) - local_60;
    }
    if (fVar2 < 0.0) {
      iVar6 = local_38 - local_70;
      local_50 = -NAN;
      fStack_74 = local_68 - (float)local_38;
    }
    else {
      iVar6 = local_70 - local_38;
      local_50 = 1.4013e-45;
      fStack_74 = (float)(local_38 + 1) - local_68;
    }
    iVar6 = iVar5 + 1 + iStack_78 + iVar6;
    fVar7 = (float10)local_4c * (float10)fStack_74;
    fVar8 = (float10)local_44 * (float10)local_7c;
    fVar9 = (float10)local_44 * (float10)local_64;
    fVar10 = (float10)local_48 * (float10)fStack_74;
    local_24 = local_44;
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float10)local_4c * (float10)local_7c -
                                (float10)local_48 * (float10)local_64));
    local_38 = (int)ROUND(dVar11);
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)(fVar7 - fVar9));
    local_38 = (int)ROUND(dVar11);
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)(fVar8 - fVar10));
    local_38 = (int)ROUND(dVar11);
    iVar5 = local_28;
    iVar3 = local_20;
    iVar4 = local_1c;
  }
  while (((local_1c = iVar4, local_20 = iVar3, local_28 = iVar5,
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (this_ptr,(int)local_2c,(int)local_30,local_28),
          this_ptr_00 == (CDemonCube *)0x0 ||
          (local_14 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                                (this_ptr_00,start_pos,(CVector3f *)local_94,(CVector3f *)local_88,
                                 &local_70), local_14 < 0.0)) || (1.0 < local_14))) {
    iVar6 = iVar6 + -1;
    if (iVar6 < 1) {
      return 0;
    }
    iVar5 = local_28 + local_40;
    iVar3 = local_20 + local_3c;
    iVar4 = local_1c - local_38;
    if (local_24 < 0) {
      if (local_1c < 0) {
        local_2c = (float)((int)local_2c + local_44);
        local_24 = local_24 + local_3c;
        iVar5 = local_28;
        iVar3 = local_20;
        iVar4 = local_1c + local_34;
      }
    }
    else if (-1 < local_20) {
      local_30 = (float)((int)local_30 + local_48);
      local_24 = local_24 - local_38;
      iVar5 = local_28;
      iVar3 = local_20 - local_34;
      iVar4 = local_1c;
    }
  }
  return 1;
}
