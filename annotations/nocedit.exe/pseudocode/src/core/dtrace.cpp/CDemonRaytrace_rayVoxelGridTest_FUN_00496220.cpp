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
  int iVar2;
  int iVar3;
  float *extraout_EAX;
  CDemonCube *this_ptr_00;
  float fVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  ulonglong local_a0;
  float fStack_9c;
  byte local_94 [12];
  byte local_88 [16];
  float fStack_78;
  int iStack_74;
  float local_70;
  int local_6c;
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_50 = (start_pos->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar6 = (float10)1 / (float10)(this_ptr->cell_size).x;
  fVar7 = ((float10)start_pos->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->cell_size).z;
  fVar8 = ((float10)start_pos->x - (float10)(this_ptr->bbox_min).x) * fVar6;
  fVar6 = ((float10)end_pos->x - (float10)(this_ptr->bbox_min).x) * fVar6;
  local_58 = (float)fVar7;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)local_50);
  fVar9 = (float10)dVar10;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  local_38 = (int)ROUND(fVar9);
  local_30 = (int)ROUND(dVar10);
  local_54 = (float)fVar8;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  local_38 = (int)ROUND(dVar10);
  join_0x00000008_0x00000000_ = crt_math_c_floor_FUN_005feb90((double)fVar6);
  fVar6 = ((float10)end_pos->y - (float10)(this_ptr->bbox_min).y) / (float10)(this_ptr->cell_size).y
  ;
  dVar10 = crt_math_c_round_FUN_005fe6b0(join_0x00000008_0x00000000_);
  local_60 = (float)(int)ROUND(dVar10);
  local_88._4_8_ = crt_math_c_floor_FUN_005feb90((double)fVar6);
  fVar6 = ((float10)end_pos->z - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z
  ;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)local_88._4_8_);
  local_6c = (int)ROUND(dVar10);
  local_88._4_8_ = crt_math_c_floor_FUN_005feb90((double)fVar6);
  iVar5 = 1;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)local_88._4_8_);
  local_94._0_4_ = *extraout_EAX - start_pos->x;
  local_60 = (float)(int)ROUND(dVar10);
  local_94._4_4_ = extraout_EAX[1] - start_pos->y;
  fVar4 = extraout_EAX[2] - start_pos->z;
  stack0xffffff74 = (double)CONCAT44 /* combine 2-byte values */(local_88._0_4_,fVar4);
  if (((local_2c != local_5c) || (local_30 != local_68)) ||
     (fVar1 = local_28, iVar2 = local_20, iVar3 = local_1c, local_28 != local_60)) {
    fVar1 = SQRT(fVar4 * fVar4 +
                 (float)local_94._0_4_ * (float)local_94._0_4_ +
                 (float)local_94._4_4_ * (float)local_94._4_4_);
    if (fVar1 <= 0.0) {
      return 0;
    }
    fVar7 = (float10)(float)local_94._0_4_;
    fVar6 = (float10)2.684355e+08f / (float10)fVar1;
    fVar8 = ABS((float10)(float)local_94._4_4_) * fVar6;
    fVar9 = ABS((float10)fVar4) * fVar6;
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)(ABS(fVar7) * fVar6));
    local_3c = (int)ROUND(dVar10);
    fVar6 = (float10)0;
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
    fVar8 = (float10)dVar10;
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
    local_48 = (int)ROUND(fVar8);
    local_40 = (int)ROUND(dVar10);
    if (fVar7 < fVar6) {
      local_68 = local_38 - local_68;
      local_50 = -NAN;
      fStack_78 = local_58 - (float)local_38;
    }
    else {
      local_68 = local_68 - local_38;
      local_50 = 1.4013e-45;
      fStack_78 = (float)(local_38 + 1) - local_58;
    }
    if (fStack_9c < 0.0) {
      iStack_74 = local_3c - iStack_74;
      local_54 = -NAN;
      local_60 = local_5c - (float)local_3c;
    }
    else {
      iStack_74 = iStack_74 - local_3c;
      local_54 = 1.4013e-45;
      local_60 = (float)(local_3c + 1) - local_5c;
    }
    if (fVar1 < 0.0) {
      iVar5 = local_34 - local_6c;
      local_4c = 0xffffffff;
      local_70 = local_64 - (float)local_34;
    }
    else {
      iVar5 = local_6c - local_34;
      local_4c = 1;
      local_70 = (float)(local_34 + 1) - local_64;
    }
    iVar5 = local_68 + 1 + iStack_74 + iVar5;
    fVar6 = (float10)local_48 * (float10)local_70;
    fVar7 = (float10)local_40 * (float10)fStack_78;
    fVar8 = (float10)local_40 * (float10)local_60;
    fVar9 = (float10)local_44 * (float10)local_70;
    local_20 = local_40;
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float10)local_48 * (float10)fStack_78 -
                                (float10)local_44 * (float10)local_60));
    local_34 = (int)ROUND(dVar10);
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)(fVar6 - fVar8));
    local_34 = (int)ROUND(dVar10);
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)(fVar7 - fVar9));
    fVar1 = local_28;
    iVar2 = local_20;
    iVar3 = (int)ROUND(dVar10);
  }
  while (((local_1c = iVar3, local_20 = iVar2, local_28 = fVar1,
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (this_ptr,(int)local_2c,local_30,(int)local_28),
          this_ptr_00 == (CDemonCube *)0x0 ||
          (fVar4 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                             (this_ptr_00,start_pos,(CVector3f *)local_94,(CVector3f *)local_88,
                              (uint *)&local_70), fVar4 < 0.0)) || (1.0 < fVar4))) {
    iVar5 = iVar5 + -1;
    if (iVar5 < 1) {
      return 0;
    }
    fVar1 = (float)((int)local_28 + local_40);
    iVar2 = local_20 + local_3c;
    iVar3 = local_1c - local_38;
    if (local_24 < 0) {
      if (local_1c < 0) {
        local_2c = (float)((int)local_2c + local_44);
        local_24 = local_24 + local_3c;
        fVar1 = local_28;
        iVar2 = local_20;
        iVar3 = local_1c + local_34;
      }
    }
    else if (-1 < local_20) {
      local_30 = local_30 + local_48;
      local_24 = local_24 - local_38;
      fVar1 = local_28;
      iVar2 = local_20 - local_34;
      iVar3 = local_1c;
    }
  }
  return 1;
}
