// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_0048b880
// Address: 0048b880
// Address Range: [[0048b880, 0048bdb9]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_0048b880(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_0048b880(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  CDemonCube *this_ptr_00;
  int iVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  float afStackY_1094 [1000];
  float fStack_d4;
  float fStack_d0;
  CVector3f CStack_bc;
  float local_b0;
  float fStack_ac;
  float local_a8 [5];
  float local_94;
  float local_90;
  float local_8c;
  int local_88;
  int local_84;
  int local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  int local_70;
  float local_6c;
  int local_68;
  int local_64;
  float local_60;
  int local_5c;
  int local_58;
  float local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_3c;
  int local_38;
  
  bVar9 = 0;
  fVar3 = 1.0 / (this_ptr->cell_size).x;
  fVar4 = (start_pos->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar5 = (start_pos->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z;
  fVar1 = end_pos->x;
  fVar2 = (this_ptr->bbox_min).x;
  local_6c = (start_pos->x - (this_ptr->bbox_min).x) * fVar3;
  CStack_bc.z = 6.678465e-39;
  dVar10 = round((double)local_6c);
  local_38 = (int)ROUND(dVar10);
  CStack_bc.y = 6.678483e-39;
  local_54 = fVar4;
  dVar10 = round((double)fVar4);
  local_38 = (int)ROUND(dVar10);
  CStack_bc.x = 6.678509e-39;
  local_60 = fVar5;
  dVar10 = round((double)fVar5);
  local_38 = (int)ROUND(dVar10);
  dVar10 = floor((double)((fVar1 - fVar2) * fVar3));
  local_8c = SUB84(__BITCAST_UINT64(dVar10),0);
  local_88 = (int)((ulonglong)dVar10 >> 0x20);
  fVar1 = end_pos->y;
  fVar2 = (this_ptr->bbox_min).y;
  fVar3 = (this_ptr->cell_size).y;
  dVar10 = round(dVar10);
  fStack_74 = (float)(int)ROUND(dVar10);
  dVar10 = floor((double)((fVar1 - fVar2) / fVar3));
  local_90 = SUB84(__BITCAST_UINT64(dVar10),0);
  local_8c = (float)((ulonglong)dVar10 >> 0x20);
  fVar1 = end_pos->z;
  fVar2 = (this_ptr->bbox_min).z;
  fVar3 = (this_ptr->cell_size).z;
  dVar10 = round(dVar10);
  fStack_74 = (float)(int)ROUND(dVar10);
  iVar8 = 1;
  fStack_d0 = 6.678684e-39;
  dVar10 = floor((double)((fVar1 - fVar2) / fVar3));
  fVar1 = end_pos->x;
  fVar2 = end_pos->y;
  local_94 = SUB84(__BITCAST_UINT64(dVar10),0);
  local_90 = (float)((ulonglong)dVar10 >> 0x20);
  fVar3 = end_pos->z;
  dVar10 = round(dVar10);
  fVar4 = fStack_7c;
  fStack_74 = (float)(int)ROUND(dVar10);
  fStack_ac = fVar2 - start_pos->y;
  local_b0 = fVar1 - start_pos->x;
  local_a8[0] = fVar3 - start_pos->z;
  local_a8[2] = fStack_ac;
  local_a8[(uint)bVar9 * -2 + 3] = local_a8[(uint)bVar9 * -2];
  local_a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       local_a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  if (((local_4c != fVar4) || (local_48 != local_78)) ||
     (iVar6 = local_5c, fVar1 = local_54, iVar7 = local_50, local_44 != fStack_74)) {
    fVar1 = SQRT(local_a8[3] * local_a8[3] + local_a8[1] * local_a8[1] + local_a8[2] * local_a8[2]);
    if (fVar1 <= 0.0) {
      return 0;
    }
    fVar2 = ABS(local_a8[2]);
    fVar1 = 2.684355e+08f / fVar1;
    dVar10 = round((double)(ABS(local_a8[1]) * fVar1));
    local_58 = (int)ROUND(dVar10);
    fStack_d0 = 6.67897e-39;
    dVar10 = round((double)(fVar2 * fVar1));
    fStack_d4 = 6.67898e-39;
    dVar11 = round((double)(ABS(local_a8[3]) * fVar1));
    local_64 = (int)ROUND(dVar10);
    local_5c = (int)ROUND(dVar11);
    if (local_a8[1] < 0.0) {
      iVar8 = local_58 - local_88;
      local_78 = local_90 - (float)local_58;
      local_6c = -NAN;
    }
    else {
      iVar8 = local_88 - local_58;
      local_78 = (float)(local_58 + 1) - local_90;
      local_6c = 1.4013e-45;
    }
    if (fStack_ac < 0.0) {
      local_84 = (int)local_54 - local_84;
      local_94 = fStack_74 - (float)(int)local_54;
      local_70 = -1;
    }
    else {
      local_84 = local_84 - (int)local_54;
      local_94 = (float)((int)local_54 + 1) - fStack_74;
      local_70 = 1;
    }
    if (local_a8[0] < 0.0) {
      local_80 = local_50 - local_80;
      local_8c = fStack_7c - (float)local_50;
      local_68 = -1;
    }
    else {
      local_80 = local_80 - local_50;
      local_8c = (float)(local_50 + 1) - fStack_7c;
      local_68 = 1;
    }
    iVar8 = iVar8 + 1 + local_84 + local_80;
    fVar4 = (float)local_64 * local_8c;
    fVar2 = (float)local_5c * local_78;
    fVar3 = (float)local_5c * local_94;
    fVar1 = (float)(int)local_60 * local_8c;
    local_3c = local_5c;
    dVar10 = round
                       ((double)((float)local_64 * local_78 - (float)(int)local_60 * local_94));
    local_50 = (int)ROUND(dVar10);
    dVar10 = round((double)(fVar4 - fVar3));
    local_50 = (int)ROUND(dVar10);
    dVar10 = round((double)(fVar2 - fVar1));
    iVar6 = local_5c;
    fVar1 = local_54;
    iVar7 = (int)ROUND(dVar10);
  }
  while (((local_50 = iVar7, local_54 = fVar1, local_5c = iVar6,
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
                                  (this_ptr,local_64,(int)local_60,local_5c),
          this_ptr_00 == (CDemonCube *)0x0 ||
          (local_48 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_00458210
                                (this_ptr_00,start_pos,&CStack_bc,(CVector3f *)&stack0xffffff2c,
                                 (uint *)local_a8), local_48 < 0.0)) || (1.0 < local_48))) {
    iVar8 = iVar8 + -1;
    if (iVar8 < 1) {
      return 0;
    }
    iVar6 = local_5c + (int)fStack_74;
    fVar1 = (float)((int)local_54 + local_70);
    iVar7 = local_50 - (int)local_6c;
    if (local_58 < 0) {
      if (local_50 < 0) {
        local_64 = local_64 + (int)local_78;
        local_58 = local_58 + local_70;
        iVar6 = local_5c;
        fVar1 = local_54;
        iVar7 = local_50 + local_68;
      }
    }
    else if (-1 < (int)local_54) {
      local_60 = (float)((int)local_60 + (int)fStack_7c);
      local_58 = local_58 - (int)local_6c;
      iVar6 = local_5c;
      fVar1 = (float)((int)local_54 - local_68);
      iVar7 = local_50;
    }
  }
  return 1;
}
