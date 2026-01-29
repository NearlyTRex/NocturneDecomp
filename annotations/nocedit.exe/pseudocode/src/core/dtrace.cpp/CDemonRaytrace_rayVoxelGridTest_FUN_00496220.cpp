// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
// Address: 00496220
// Address Range: [[00496220, 004966ed]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220 (CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl
core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
          (CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CDemonCube *this_ptr_00;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  double dVar12;
  CVector3f CStack_d0;
  float fVar13;
  float fVar14;
  uint auStack_ac [4];
  ulonglong uStack_9c;
  ulonglong local_94;
  ulonglong local_8c;
  float fStack_84;
  float fStack_80;
  float local_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_44;
  int local_38;
  int local_30;
  
  local_50 = (start_pos->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar7 = (float10)1 / (float10)(this_ptr->cell_size).x;
  fVar1 = (start_pos->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z;
  fVar8 = ((float10)start_pos->x - (float10)(this_ptr->bbox_min).x) * fVar7;
  fVar7 = ((float10)end_pos->x - (float10)(this_ptr->bbox_min).x) * fVar7;
  auStack_ac[2] = 0x496276;
  local_58 = fVar1;
  dVar11 = round((double)local_50);
  auStack_ac[1] = 0x49627d;
  dVar12 = round((double)fVar1);
  local_38 = (int)ROUND(dVar11);
  local_30 = (int)ROUND(dVar12);
  local_54 = (float)fVar8;
  auStack_ac[0] = 0x496290;
  dVar11 = round((double)fVar8);
  local_38 = (int)ROUND(dVar11);
  local_8c = floor((double)fVar7);
  fVar1 = end_pos->y;
  fVar2 = (this_ptr->bbox_min).y;
  fVar3 = (this_ptr->cell_size).y;
  dVar11 = round(local_8c);
  local_70 = (int)ROUND(dVar11);
  local_94 = floor((double)((fVar1 - fVar2) / fVar3));
  fVar1 = end_pos->z;
  fVar2 = (this_ptr->bbox_min).z;
  fVar3 = (this_ptr->cell_size).z;
  dVar11 = round(local_94);
  fStack_84 = (float)(int)ROUND(dVar11);
  dVar11 = (double)((fVar1 - fVar2) / fVar3);
  CStack_d0.z = 6.739507e-39;
  uStack_9c = floor(dVar11);
  iVar6 = 1;
  fVar13 = (float)((ulonglong)dVar11 >> 0x20);
  dVar11 = round(uStack_9c);
  fVar1 = end_pos->x - start_pos->x;
  fStack_84 = (float)(int)ROUND(dVar11);
  fVar2 = end_pos->y - start_pos->y;
  fVar3 = end_pos->z - start_pos->z;
  if (((local_50 != fStack_80) || (local_54 != (float)local_8c)) ||
     (iVar4 = local_64, iVar5 = local_5c, fVar14 = local_58, local_4c != fStack_84)) {
    fVar14 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    if (fVar14 <= 0.0) {
      return 0;
    }
    fVar7 = (float10)2.684355e+08f / (float10)fVar14;
    fVar8 = ABS((float10)fVar2) * fVar7;
    fVar9 = ABS((float10)fVar3) * fVar7;
    CStack_d0.z = 6.739757e-39;
    dVar11 = round((double)(ABS((float10)fVar1) * fVar7));
    local_60 = (int)ROUND(dVar11);
    fVar7 = (float10)0;
    CStack_d0.y = 6.739775e-39;
    dVar11 = round((double)fVar8);
    fVar8 = (float10)dVar11;
    CStack_d0.x = 6.739785e-39;
    dVar11 = round((double)fVar9);
    local_6c = (int)ROUND(fVar8);
    local_64 = (int)ROUND(dVar11);
    if ((float10)fVar1 < fVar7) {
      iVar4 = local_5c - (int)(float)local_8c;
      iStack_74 = -1;
      fVar1 = local_7c - (float)local_5c;
    }
    else {
      iVar4 = (int)(float)local_8c - local_5c;
      iStack_74 = 1;
      fVar1 = (float)(local_5c + 1) - local_7c;
    }
    uStack_9c = (double)CONCAT44(uStack_9c._4_4_,fVar1);
    if (fVar13 < 0.0) {
      iVar5 = local_60 - uStack_9c._4_4_;
      iStack_78 = -1;
      fStack_84 = fStack_80 - (float)local_60;
    }
    else {
      iVar5 = uStack_9c._4_4_ - local_60;
      iStack_78 = 1;
      fStack_84 = (float)(local_60 + 1) - fStack_80;
    }
    if (fVar14 < 0.0) {
      iVar6 = (int)local_58 - local_94._4_4_;
      local_70 = -1;
      fVar2 = local_8c._4_4_ - (float)(int)local_58;
    }
    else {
      iVar6 = local_94._4_4_ - (int)local_58;
      local_70 = 1;
      fVar2 = (float)((int)local_58 + 1) - local_8c._4_4_;
    }
    iVar6 = iVar4 + 1 + iVar5 + iVar6;
    local_94 = (double)CONCAT44(local_94._4_4_,fVar2);
    fVar7 = (float10)local_6c * (float10)fVar2;
    fVar8 = (float10)local_64 * (float10)fVar1;
    fVar9 = (float10)local_64 * (float10)fStack_84;
    fVar10 = (float10)local_68 * (float10)fVar2;
    local_44 = local_64;
    dVar11 = round
                       ((double)((float10)local_6c * (float10)fVar1 -
                                (float10)local_68 * (float10)fStack_84));
    local_58 = (float)(int)ROUND(dVar11);
    dVar11 = round((double)(fVar7 - fVar9));
    local_58 = (float)(int)ROUND(dVar11);
    dVar11 = round((double)(fVar8 - fVar10));
    iVar4 = local_64;
    iVar5 = local_5c;
    fVar14 = (float)(int)ROUND(dVar11);
  }
  while (((local_58 = fVar14, local_5c = iVar5, local_64 = iVar4,
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (this_ptr,local_68,local_6c,local_64),
          this_ptr_00 == (CDemonCube *)0x0 ||
          (local_50 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                                (this_ptr_00,start_pos,&CStack_d0,(CVector3f *)&stack0xffffff3c,
                                 auStack_ac), local_50 < 0.0)) || (1.0 < local_50))) {
    iVar6 = iVar6 + -1;
    if (iVar6 < 1) {
      return 0;
    }
    iVar4 = local_64 + (int)local_7c;
    iVar5 = local_5c + iStack_78;
    fVar14 = (float)((int)local_58 - iStack_74);
    if (local_60 < 0) {
      if ((int)local_58 < 0) {
        local_68 = local_68 + (int)fStack_80;
        local_60 = local_60 + iStack_78;
        iVar4 = local_64;
        iVar5 = local_5c;
        fVar14 = (float)((int)local_58 + local_70);
      }
    }
    else if (-1 < local_5c) {
      local_6c = local_6c + (int)fStack_84;
      local_60 = local_60 - iStack_74;
      iVar4 = local_64;
      iVar5 = local_5c - local_70;
      fVar14 = local_58;
    }
  }
  return 1;
}
