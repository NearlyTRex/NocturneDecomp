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
  CDemonCube *this_ptr_00;
  uint in_EDX;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  double dVar11;
  ulonglong uStack_b4;
  float fStack_ac;
  CVector3f local_a8;
  CVector3f *pCStack_9c;
  CVector3f *local_94;
  uint local_90;
  CVector3f *local_8c;
  float fStack_84;
  float fStack_80;
  float local_7c;
  int iStack_78;
  int iStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  float local_58;
  CVector3f *local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  float local_30;
  float local_2c;
  
  local_50 = (start_pos->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar6 = (float10)1 / (float10)(this_ptr->cell_size).x;
  fVar1 = (start_pos->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z;
  fVar7 = ((float10)start_pos->x - (float10)(this_ptr->bbox_min).x) * fVar6;
  fVar6 = ((float10)end_pos->x - (float10)(this_ptr->bbox_min).x) * fVar6;
  local_a8.y = 6.739312e-39;
  local_58 = fVar1;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)local_50);
  local_a8.x = 6.739322e-39;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar1);
  local_38 = (int)ROUND(dVar10);
  local_30 = (float)(int)ROUND(dVar11);
  local_54 = (CVector3f *)(float)fVar7;
  fStack_ac = 6.739349e-39;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  local_38 = (int)ROUND(dVar10);
  uStack_b4 = (double)fVar6;
  dVar10 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar6 = (float10)dVar10;
  local_8c = end_pos;
  uStack_b4._0_4_ = 6.739417e-39;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,end_pos));
  local_70 = (float)(int)ROUND(dVar10);
  dVar10 = crt_math_c_floor_FUN_005feb90((double)fVar6);
  fVar6 = (float10)dVar10;
  local_94 = end_pos;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,end_pos));
  fStack_84 = (float)(int)ROUND(dVar10);
  crt_math_c_floor_FUN_005feb90((double)fVar6);
  pCStack_9c = end_pos;
  iVar5 = 1;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,end_pos));
  fVar1 = end_pos->x - start_pos->x;
  fStack_84 = (float)(int)ROUND(dVar10);
  uStack_b4._0_4_ = end_pos->y - start_pos->y;
  uStack_b4._4_4_ = end_pos->z - start_pos->z;
  if (((local_50 != fStack_80) || (local_54 != local_8c)) ||
     (fVar2 = local_4c, iVar3 = local_44, iVar4 = local_40, local_4c != fStack_84)) {
    fVar2 = SQRT(uStack_b4._4_4_ * uStack_b4._4_4_ +
                 fVar1 * fVar1 + (float)uStack_b4 * (float)uStack_b4);
    if (fVar2 <= 0.0) {
      return 0;
    }
    fVar6 = (float10)2.684355e+08f / (float10)fVar2;
    fVar7 = ABS((float10)(float)uStack_b4) * fVar6;
    fVar8 = ABS((float10)uStack_b4._4_4_) * fVar6;
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)(ABS((float10)fVar1) * fVar6));
    local_48 = (int)ROUND(dVar10);
    fVar6 = (float10)0;
    uStack_b4._0_4_ = 6.739775e-39;
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
    fVar7 = (float10)dVar10;
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
    local_54 = (CVector3f *)(int)ROUND(fVar7);
    local_4c = (float)(int)ROUND(dVar10);
    if ((float10)fVar1 < fVar6) {
      iStack_74 = local_44 - iStack_74;
      local_5c = -1;
      fStack_84 = local_64 - (float)local_44;
    }
    else {
      iStack_74 = iStack_74 - local_44;
      local_5c = 1;
      fStack_84 = (float)(local_44 + 1) - local_64;
    }
    if (local_a8.x < 0.0) {
      iVar5 = local_48 - (int)fStack_80;
      local_60 = -1;
      local_6c = local_68 - (float)local_48;
    }
    else {
      iVar5 = (int)fStack_80 - local_48;
      local_60 = 1;
      local_6c = (float)(local_48 + 1) - local_68;
    }
    if (local_a8.y < 0.0) {
      iStack_78 = local_40 - iStack_78;
      local_58 = -NAN;
      local_7c = local_70 - (float)local_40;
    }
    else {
      iStack_78 = iStack_78 - local_40;
      local_58 = 1.4013e-45;
      local_7c = (float)(local_40 + 1) - local_70;
    }
    iVar5 = iStack_74 + 1 + iVar5 + iStack_78;
    fVar6 = (float10)(int)local_54 * (float10)local_7c;
    fVar7 = (float10)(int)local_4c * (float10)fStack_84;
    fVar8 = (float10)(int)local_4c * (float10)local_6c;
    fVar9 = (float10)(int)local_50 * (float10)local_7c;
    local_2c = local_4c;
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float10)(int)local_54 * (float10)fStack_84 -
                                (float10)(int)local_50 * (float10)local_6c));
    local_40 = (int)ROUND(dVar10);
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)(fVar6 - fVar8));
    local_40 = (int)ROUND(dVar10);
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)(fVar7 - fVar9));
    fVar2 = local_4c;
    iVar3 = local_44;
    iVar4 = (int)ROUND(dVar10);
  }
  while (((local_40 = iVar4, local_44 = iVar3, local_4c = fVar2,
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (this_ptr,(int)local_50,(int)local_54,(int)local_4c),
          this_ptr_00 == (CDemonCube *)0x0 ||
          (local_30 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                                (this_ptr_00,start_pos,(CVector3f *)&uStack_b4,&local_a8,&local_90),
          local_30 < 0.0)) || (1.0 < local_30))) {
    iVar5 = iVar5 + -1;
    if (iVar5 < 1) {
      return 0;
    }
    fVar2 = (float)((int)local_4c + (int)local_64);
    iVar3 = local_44 + local_60;
    iVar4 = local_40 - local_5c;
    if (local_48 < 0) {
      if (local_40 < 0) {
        local_50 = (float)((int)local_50 + (int)local_68);
        local_48 = local_48 + local_60;
        fVar2 = local_4c;
        iVar3 = local_44;
        iVar4 = local_40 + (int)local_58;
      }
    }
    else if (-1 < local_44) {
      local_54 = (CVector3f *)((int)&local_54->x + (int)local_6c);
      local_48 = local_48 - local_5c;
      fVar2 = local_4c;
      iVar3 = local_44 - (int)local_58;
      iVar4 = local_40;
    }
  }
  return 1;
}
