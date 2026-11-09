// Name: core_bodypart.cpp_FUN_0041a700
// Address: 0041a700
// Address Range: [[0041a700, 0041aa94]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_0041a700(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_FUN_0041a700(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  int aiStackY_1078 [1006];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  int local_90;
  int aiStack_8c [5];
  byte local_78 [12];
  byte local_6c [8];
  uint local_64;
  int local_60;
  int local_5c [7];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  local_40 = 0x7fffffff;
  local_5c[5] = 0;
  do {
    local_5c[6] = local_5c[5];
    local_3c = 0;
    do {
      local_14 = local_5c[6];
      local_6c._0_4_ = (float)local_3c * _DAT_005d44e5 * _DAT_005d44e9;
      local_6c._4_4_ = (float)local_5c[6] * _DAT_005d44e5 * _DAT_005d44e9;
      local_64 = 0;
      core_dirmat_cpp_FUN_0045f3e0((CMatrix3x3f *)&local_b8,(CVector3f *)local_6c);
      fVar10 = (float10)local_b8 * (float10)_DAT_005d44ed;
      fVar11 = (float10)local_b4 * (float10)_DAT_005d44ed;
      fVar12 = (float10)local_b0 * (float10)_DAT_005d44ed;
      fVar13 = (float10)local_ac * (float10)_DAT_005d44ed;
      fVar14 = (float10)local_a8 * (float10)_DAT_005d44ed;
      fVar15 = (float10)local_a4 * (float10)_DAT_005d44ed;
      fVar16 = (float10)local_a0 * (float10)_DAT_005d44ed;
      round();
      local_20 = (int)ROUND(fVar10);
      fVar10 = (float10)local_9c * (float10)_DAT_005d44ed;
      round();
      local_1c = (int)ROUND(fVar11);
      fVar11 = (float10)local_98 * (float10)_DAT_005d44ed;
      iVar6 = 0;
      local_5c[1] = 0x7fffffff;
      local_5c[0] = 0x7fffffff;
      local_60 = 0x7fffffff;
      local_5c[4] = -0x7fffffff;
      local_5c[3] = -0x7fffffff;
      local_5c[2] = -0x7fffffff;
      iVar8 = *(int *)&this_ptr->field_0x174;
      round();
      round();
      round();
      round();
      round();
      round();
      round();
      local_30 = (int)ROUND(fVar12);
      local_2c = (int)ROUND(fVar13);
      local_28 = (int)ROUND(fVar14);
      local_24 = (int)ROUND(fVar15);
      local_34 = (int)ROUND(fVar16);
      local_38 = (int)ROUND(fVar10);
      local_18 = (int)ROUND(fVar11);
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          iVar4 = *(int *)&this_ptr->field_0x178;
          lVar1 = (longlong)local_20 * (longlong)*(int *)(iVar4 + iVar8);
          lVar2 = (longlong)(int)ROUND(fVar13) * (longlong)*(int *)(iVar4 + 4 + iVar8);
          lVar3 = (longlong)(int)ROUND(fVar16) * (longlong)*(int *)(iVar4 + 8 + iVar8);
          iVar5 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                  ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
          lVar1 = (longlong)local_1c * (longlong)*(int *)(iVar4 + iVar8);
          lVar2 = (longlong)(int)ROUND(fVar14) * (longlong)*(int *)(iVar4 + 4 + iVar8);
          lVar3 = (longlong)(int)ROUND(fVar10) * (longlong)*(int *)(iVar4 + 8 + iVar8);
          iVar7 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                  ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)ROUND(fVar12) * (longlong)*(int *)(iVar4 + iVar8);
          lVar2 = (longlong)(int)ROUND(fVar15) * (longlong)*(int *)(iVar4 + 4 + iVar8);
          local_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                     ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)ROUND(fVar11) * (longlong)*(int *)(iVar4 + 8 + iVar8);
          iVar4 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + local_14;
          if (iVar5 < local_60) {
            local_60 = iVar5;
          }
          if (local_5c[2] < iVar5) {
            local_5c[2] = iVar5;
          }
          if (iVar7 < local_5c[0]) {
            local_5c[0] = iVar7;
          }
          if (local_5c[3] < iVar7) {
            local_5c[3] = iVar7;
          }
          if (iVar4 < local_5c[1]) {
            local_5c[1] = iVar4;
          }
          if (local_5c[4] < iVar4) {
            local_5c[4] = iVar4;
          }
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 0xc;
        } while (iVar6 < *(int *)&this_ptr->field_0x174);
      }
      iVar8 = local_5c[2] - local_60;
      if (local_5c[2] - local_60 < local_5c[3] - local_5c[0]) {
        iVar8 = local_5c[3] - local_5c[0];
      }
      if (iVar8 < local_40) {
        local_90 = local_60;
        aiStack_8c[(uint)bVar9 * -2] = local_5c[(uint)bVar9 * -2];
        aiStack_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             local_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        local_40 = iVar8;
        aiStack_8c[2] = local_5c[2];
        aiStack_8c[(uint)bVar9 * -2 + 3] = local_5c[(uint)bVar9 * -2 + 3];
        aiStack_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             local_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        if (local_78 != local_6c) {
          local_78._0_4_ = local_6c._0_4_;
          local_78._4_4_ = local_6c._4_4_;
          local_78._8_4_ = local_64;
        }
      }
      local_3c = local_3c + 2;
    } while (local_3c != 0x18);
    local_5c[5] = local_5c[5] + 2;
  } while (local_5c[5] != 0x18);
  *(int *)out_bbox_min = local_90;
  *(int *)(out_bbox_min + (uint)bVar9 * -8 + 4) = aiStack_8c[(uint)bVar9 * -2];
  *(int *)(out_bbox_min + (uint)bVar9 * -8 + 4 + (uint)bVar9 * -8 + 4) =
       aiStack_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  *(int *)out_bbox_max = aiStack_8c[2];
  *(int *)(out_bbox_max + (uint)bVar9 * -8 + 4) = aiStack_8c[(uint)bVar9 * -2 + 3];
  *(int *)(out_bbox_max + (uint)bVar9 * -8 + 4 + (uint)bVar9 * -8 + 4) =
       aiStack_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  core_bodypart_cpp_FUN_0041a200(this_ptr,(CVector3f *)local_78);
  return;
}
