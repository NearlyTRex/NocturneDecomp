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
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *extraout_EAX;
  CDemonCube *this_ptr_00;
  int iVar7;
  BADSPACEBASE *in_ESP;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  CVector3f local_a8;
  double dStack_9c;
  ulonglong local_94;
  double local_8c;
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
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  float local_30;
  float local_2c;
  
  local_50 = (start_pos->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar8 = (float10)1 / (float10)(this_ptr->cell_size).x;
  fVar9 = ((float10)start_pos->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->cell_size).z;
  fVar10 = ((float10)start_pos->x - (float10)(this_ptr->bbox_min).x) * fVar8;
  fVar8 = ((float10)end_pos->x - (float10)(this_ptr->bbox_min).x) * fVar8;
  local_58 = (float)fVar9;
  local_a8.y = 6.739312e-39;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)local_50);
  fVar11 = (float10)dVar12;
  local_a8.x = 6.739322e-39;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
  local_38 = (int)ROUND(fVar11);
  local_30 = (float)(int)ROUND(dVar12);
  local_54 = (float)fVar10;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
  local_38 = (int)ROUND(dVar12);
  local_8c = crt_math_c_floor_FUN_005feb90((double)fVar8);
  fVar8 = ((float10)end_pos->y - (float10)(this_ptr->bbox_min).y) / (float10)(this_ptr->cell_size).y
  ;
  dVar12 = crt_math_c_round_FUN_005fe6b0(local_8c);
  local_70 = (float)(int)ROUND(dVar12);
  local_94 = crt_math_c_floor_FUN_005feb90((double)fVar8);
  fVar8 = ((float10)end_pos->z - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z
  ;
  dVar12 = crt_math_c_round_FUN_005fe6b0(local_94);
  fStack_84 = (float)(int)ROUND(dVar12);
  dStack_9c = crt_math_c_floor_FUN_005feb90((double)fVar8);
  iVar7 = 1;
  dVar12 = crt_math_c_round_FUN_005fe6b0(dStack_9c);
  fVar1 = *extraout_EAX - start_pos->x;
  fStack_84 = (float)(int)ROUND(dVar12);
  fVar2 = extraout_EAX[1] - start_pos->y;
  fVar3 = extraout_EAX[2] - start_pos->z;
  if (((local_50 != fStack_80) || (local_54 != local_8c._0_4_)) ||
     (fVar4 = local_4c, iVar5 = local_44, iVar6 = local_40, local_4c != fStack_84)) {
    fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    if (fVar4 <= 0.0) {
      return 0;
    }
    fVar9 = (float10)fVar1;
    fVar8 = (float10)2.684355e+08f / (float10)fVar4;
    fVar10 = ABS((float10)fVar2) * fVar8;
    fVar11 = ABS((float10)fVar3) * fVar8;
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)(ABS(fVar9) * fVar8));
    local_48 = (int)ROUND(dVar12);
    fVar8 = (float10)0;
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
    fVar10 = (float10)dVar12;
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
    local_54 = (float)(int)ROUND(fVar10);
    local_4c = (float)(int)ROUND(dVar12);
    if (fVar9 < fVar8) {
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
      iVar7 = local_48 - (int)fStack_80;
      local_60 = -1;
      local_6c = local_68 - (float)local_48;
    }
    else {
      iVar7 = (int)fStack_80 - local_48;
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
    iVar7 = iStack_74 + 1 + iVar7 + iStack_78;
    fVar8 = (float10)(int)local_54 * (float10)local_7c;
    fVar9 = (float10)(int)local_4c * (float10)fStack_84;
    fVar10 = (float10)(int)local_4c * (float10)local_6c;
    fVar11 = (float10)(int)local_50 * (float10)local_7c;
    local_2c = local_4c;
    dVar12 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float10)(int)local_54 * (float10)fStack_84 -
                                (float10)(int)local_50 * (float10)local_6c));
    local_40 = (int)ROUND(dVar12);
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar8 - fVar10));
    local_40 = (int)ROUND(dVar12);
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar9 - fVar11));
    fVar4 = local_4c;
    iVar5 = local_44;
    iVar6 = (int)ROUND(dVar12);
  }
  while (((local_40 = iVar6, local_44 = iVar5, local_4c = fVar4,
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (this_ptr,(int)local_50,(int)local_54,(int)local_4c),
          this_ptr_00 == (CDemonCube *)0x0 ||
          (local_30 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                                (this_ptr_00,start_pos,(CVector3f *)&stack0xffffff4c,&local_a8,
                                 (uint *)((int)&local_94 + 4)), local_30 < 0.0)) || (1.0 < local_30)
         )) {
    iVar7 = iVar7 + -1;
    if (iVar7 < 1) {
      return 0;
    }
    fVar4 = (float)((int)local_4c + (int)local_64);
    iVar5 = local_44 + local_60;
    iVar6 = local_40 - local_5c;
    if (local_48 < 0) {
      if (local_40 < 0) {
        local_50 = (float)((int)local_50 + (int)local_68);
        local_48 = local_48 + local_60;
        fVar4 = local_4c;
        iVar5 = local_44;
        iVar6 = local_40 + (int)local_58;
      }
    }
    else if (-1 < local_44) {
      local_54 = (float)((int)local_54 + (int)local_6c);
      local_48 = local_48 - local_5c;
      fVar4 = local_4c;
      iVar5 = local_44 - (int)local_58;
      iVar6 = local_40;
    }
  }
  return 1;
}
