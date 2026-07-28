// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0
// Address: 004680b0
// Address Range: [[004680b0, 0046857d]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  CDemonCube *pCVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  uint uStack_c4;
  uint uStack_c0;
  byte auStack_bc [8];
  ulonglong uStack_b4;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  byte local_a0 [16];
  byte local_90 [8];
  ulonglong local_88;
  int iStack_80;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_38;
  int local_30;
  
  local_50 = (start_pos->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar4 = 1.0 / (this_ptr->cell_size).x;
  fVar5 = (start_pos->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z;
  fVar1 = end_pos->x;
  fVar2 = (this_ptr->bbox_min).x;
  fVar3 = (start_pos->x - (this_ptr->bbox_min).x) * fVar4;
  fStack_a4 = 6.47477e-39;
  local_58 = fVar5;
  dVar9 = round((double)local_50);
  local_a8 = 6.47478e-39;
  dVar10 = round((double)fVar5);
  local_38 = (float)(int)ROUND(dVar9);
  local_30 = (int)ROUND(dVar10);
  fStack_ac = 6.474806e-39;
  local_54 = fVar3;
  dVar9 = round((double)fVar3);
  local_38 = (float)(int)ROUND(dVar9);
  uStack_b4 = (double)((fVar1 - fVar2) * fVar4);
  auStack_bc._4_4_ = 0x46812f;
  local_88 = (double)floor();
  fVar1 = end_pos->y;
  fVar2 = (this_ptr->bbox_min).y;
  fVar3 = (this_ptr->cell_size).y;
  uStack_b4._4_4_ = 6.474875e-39;
  dVar9 = round(local_88);
  local_6c = (int)ROUND(dVar9);
  unique0x0000aa00 = (double)((fVar1 - fVar2) / fVar3);
  auStack_bc._0_4_ = 0x468160;
  dVar9 = (double)floor();
  fVar1 = end_pos->z;
  fVar2 = (this_ptr->bbox_min).z;
  fVar3 = (this_ptr->cell_size).z;
  uStack_b4._0_4_ = 6.474943e-39;
  unique0x1000092e = dVar9;
  dVar9 = round(dVar9);
  local_7c = (float)(int)ROUND(dVar9);
  auStack_bc = (byte  [8])(double)((fVar1 - fVar2) / fVar3);
  uStack_c0 = 0x468191;
  dVar9 = (double)floor();
  iVar8 = 1;
  auStack_bc._4_4_ = 0x4681ad;
  local_90 = (byte  [8])dVar9;
  dVar9 = round(dVar9);
  fVar1 = end_pos->x - start_pos->x;
  fStack_78 = (float)(int)ROUND(dVar9);
  local_a8 = end_pos->y - start_pos->y;
  fStack_a4 = end_pos->z - start_pos->z;
  fStack_ac = fVar1;
  if (((local_44 != fStack_74) || (local_48 != iStack_80)) ||
     (fVar2 = local_58, fVar3 = local_50, iVar6 = local_4c, local_40 != fStack_78)) {
    uStack_b4._4_4_ = SQRT(fStack_a4 * fStack_a4 + fVar1 * fVar1 + local_a8 * local_a8);
    if (uStack_b4._4_4_ <= 0.0) {
      return 0;
    }
    fVar2 = ABS(local_a8);
    fVar4 = ABS(fStack_a4);
    fVar3 = 2.684355e+08f / uStack_b4._4_4_;
    auStack_bc._0_4_ = 0x468243;
    dVar9 = round((double)(ABS(fVar1) * fVar3));
    local_54 = (float)(int)ROUND(dVar9);
    uStack_c0 = 0x468250;
    dVar9 = round((double)(fVar2 * fVar3));
    uStack_c4 = 0x468257;
    dVar10 = round((double)(fVar4 * fVar3));
    local_60 = (int)ROUND(dVar9);
    local_58 = (float)(int)ROUND(dVar10);
    if (fVar1 < 0.0) {
      iStack_80 = (int)local_50 - iStack_80;
      local_68 = -1;
      local_90._0_4_ = local_70 - (float)(int)local_50;
    }
    else {
      iStack_80 = iStack_80 - (int)local_50;
      local_68 = 1;
      local_90._0_4_ = (float)((int)local_50 + 1) - local_70;
    }
    if ((float)uStack_b4 < 0.0) {
      iVar6 = (int)local_54 - local_90._4_4_;
      local_6c = -1;
      fStack_78 = fStack_74 - (float)(int)local_54;
    }
    else {
      iVar6 = local_90._4_4_ - (int)local_54;
      local_6c = 1;
      fStack_78 = (float)((int)local_54 + 1) - fStack_74;
    }
    if (uStack_b4._4_4_ < 0.0) {
      iVar8 = local_4c - local_88._4_4_;
      local_64 = -1;
      local_88._0_4_ = local_7c - (float)local_4c;
    }
    else {
      iVar8 = local_88._4_4_ - local_4c;
      local_64 = 1;
      local_88._0_4_ = (float)(local_4c + 1) - local_7c;
    }
    iVar8 = iStack_80 + 1 + iVar6 + iVar8;
    fVar4 = (float)local_60 * (float)local_88;
    fVar2 = (float)(int)local_58 * (float)local_90._0_4_;
    fVar3 = (float)(int)local_58 * fStack_78;
    fVar1 = (float)local_5c * (float)local_88;
    local_38 = local_58;
    dVar9 = round
                      ((double)((float)local_60 * (float)local_90._0_4_ -
                               (float)local_5c * fStack_78));
    local_4c = (int)ROUND(dVar9);
    dVar9 = round((double)(fVar4 - fVar3));
    local_4c = (int)ROUND(dVar9);
    dVar9 = round((double)(fVar2 - fVar1));
    fVar2 = local_58;
    fVar3 = local_50;
    iVar6 = (int)ROUND(dVar9);
  }
  do {
    local_4c = iVar6;
    local_50 = fVar3;
    local_58 = fVar2;
    pCVar7 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                       (this_ptr,local_5c,local_60,(int)local_58);
    if (pCVar7 != (CDemonCube *)0x0) {
      local_44 = (float)core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
                                  (pCVar7,start_pos,&uStack_c4,auStack_bc + 4,local_a0);
      if ((0.0 <= local_44) && (local_44 <= 1.0)) {
        return 1;
      }
    }
    iVar8 = iVar8 + -1;
    if (iVar8 < 1) {
      return 0;
    }
    fVar2 = (float)((int)local_58 + (int)local_70);
    fVar3 = (float)((int)local_50 + local_6c);
    iVar6 = local_4c - local_68;
    if ((int)local_54 < 0) {
      if (local_4c < 0) {
        local_5c = local_5c + (int)fStack_74;
        local_54 = (float)((int)local_54 + local_6c);
        fVar2 = local_58;
        fVar3 = local_50;
        iVar6 = local_4c + local_64;
      }
    }
    else if (-1 < (int)local_50) {
      local_60 = local_60 + (int)fStack_78;
      local_54 = (float)((int)local_54 - local_68);
      fVar2 = local_58;
      fVar3 = (float)((int)local_50 - local_64);
      iVar6 = local_4c;
    }
  } while( true );
}
