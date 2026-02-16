// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
// Address: 00496220
// Address Range: [[00496220, 004966ed]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CDemonCube *this_ptr_00;
  int iVar6;
  double dVar7;
  double dVar8;
  float fStack_c4;
  float fStack_c0;
  float fVar9;
  float fVar10;
  uint local_a0 [4];
  float local_90;
  int local_8c;
  float local_88;
  int iStack_84;
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
  fVar9 = 1.0 / (this_ptr->cell_size).x;
  fVar10 = (start_pos->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z;
  fVar1 = end_pos->x;
  fVar2 = (this_ptr->bbox_min).x;
  fVar3 = (start_pos->x - (this_ptr->bbox_min).x) * fVar9;
  local_58 = fVar10;
  dVar7 = round((double)local_50);
  dVar8 = round((double)fVar10);
  local_38 = (float)(int)ROUND(dVar7);
  local_30 = (int)ROUND(dVar8);
  local_54 = fVar3;
  dVar7 = round((double)fVar3);
  local_38 = (float)(int)ROUND(dVar7);
  dVar7 = floor((double)((fVar1 - fVar2) * fVar9));
  local_88 = SUB84(dVar7,0);
  iStack_84 = (int)((ulonglong)dVar7 >> 0x20);
  fVar1 = end_pos->y;
  fVar2 = (this_ptr->bbox_min).y;
  fVar3 = (this_ptr->cell_size).y;
  dVar7 = round(dVar7);
  local_6c = (int)ROUND(dVar7);
  dVar7 = floor((double)((fVar1 - fVar2) / fVar3));
  local_8c = SUB84(dVar7,0);
  local_88 = (float)((ulonglong)dVar7 >> 0x20);
  fVar1 = end_pos->z;
  fVar2 = (this_ptr->bbox_min).z;
  fVar3 = (this_ptr->cell_size).z;
  fVar9 = 6.739486e-39;
  dVar7 = round(dVar7);
  local_7c = (float)(int)ROUND(dVar7);
  fStack_c0 = 6.739507e-39;
  dVar7 = floor((double)((fVar1 - fVar2) / fVar3));
  local_90 = SUB84(dVar7,0);
  local_8c = (int)((ulonglong)dVar7 >> 0x20);
  iVar6 = 1;
  dVar7 = round(dVar7);
  fVar1 = end_pos->x - start_pos->x;
  fStack_78 = (float)(int)ROUND(dVar7);
  fVar2 = end_pos->y - start_pos->y;
  fVar3 = end_pos->z - start_pos->z;
  if (((local_44 != fStack_74) || (local_48 != iStack_80)) ||
     (fVar10 = local_58, fVar4 = local_50, iVar5 = local_4c, local_40 != fStack_78)) {
    fVar10 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    if (fVar10 <= 0.0) {
      return 0;
    }
    fVar4 = 2.684355e+08f / fVar10;
    dVar7 = round((double)(ABS(fVar1) * fVar4));
    local_54 = (float)(int)ROUND(dVar7);
    fStack_c0 = 6.739775e-39;
    dVar7 = round((double)(ABS(fVar2) * fVar4));
    fStack_c4 = 6.739785e-39;
    dVar8 = round((double)(ABS(fVar3) * fVar4));
    local_60 = (int)ROUND(dVar7);
    local_58 = (float)(int)ROUND(dVar8);
    if (fVar1 < 0.0) {
      iStack_80 = (int)local_50 - iStack_80;
      local_68 = -1;
      local_90 = local_70 - (float)(int)local_50;
    }
    else {
      iStack_80 = iStack_80 - (int)local_50;
      local_68 = 1;
      local_90 = (float)((int)local_50 + 1) - local_70;
    }
    if (fVar9 < 0.0) {
      iVar5 = (int)local_54 - local_8c;
      local_6c = -1;
      fStack_78 = fStack_74 - (float)(int)local_54;
    }
    else {
      iVar5 = local_8c - (int)local_54;
      local_6c = 1;
      fStack_78 = (float)((int)local_54 + 1) - fStack_74;
    }
    if (fVar10 < 0.0) {
      iVar6 = local_4c - iStack_84;
      local_64 = -1;
      local_88 = local_7c - (float)local_4c;
    }
    else {
      iVar6 = iStack_84 - local_4c;
      local_64 = 1;
      local_88 = (float)(local_4c + 1) - local_7c;
    }
    iVar6 = iStack_80 + 1 + iVar5 + iVar6;
    fVar9 = (float)local_60 * local_88;
    fVar2 = (float)(int)local_58 * local_90;
    fVar3 = (float)(int)local_58 * fStack_78;
    fVar1 = (float)local_5c * local_88;
    local_38 = local_58;
    dVar7 = round
                      ((double)((float)local_60 * local_90 - (float)local_5c * fStack_78));
    local_4c = (int)ROUND(dVar7);
    dVar7 = round((double)(fVar9 - fVar3));
    local_4c = (int)ROUND(dVar7);
    dVar7 = round((double)(fVar2 - fVar1));
    fVar10 = local_58;
    fVar4 = local_50;
    iVar5 = (int)ROUND(dVar7);
  }
  while (((local_4c = iVar5, local_50 = fVar4, local_58 = fVar10,
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (this_ptr,local_5c,local_60,(int)local_58),
          this_ptr_00 == (CDemonCube *)0x0 ||
          (local_44 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                                (this_ptr_00,start_pos,(CVector3f *)&fStack_c4,
                                 (CVector3f *)&stack0xffffff48,local_a0), local_44 < 0.0)) ||
         (1.0 < local_44))) {
    iVar6 = iVar6 + -1;
    if (iVar6 < 1) {
      return 0;
    }
    fVar10 = (float)((int)local_58 + (int)local_70);
    fVar4 = (float)((int)local_50 + local_6c);
    iVar5 = local_4c - local_68;
    if ((int)local_54 < 0) {
      if (local_4c < 0) {
        local_5c = local_5c + (int)fStack_74;
        local_54 = (float)((int)local_54 + local_6c);
        fVar10 = local_58;
        fVar4 = local_50;
        iVar5 = local_4c + local_64;
      }
    }
    else if (-1 < (int)local_50) {
      local_60 = local_60 + (int)fStack_78;
      local_54 = (float)((int)local_54 - local_68);
      fVar10 = local_58;
      fVar4 = (float)((int)local_50 - local_64);
      iVar5 = local_4c;
    }
  }
  return 1;
}
