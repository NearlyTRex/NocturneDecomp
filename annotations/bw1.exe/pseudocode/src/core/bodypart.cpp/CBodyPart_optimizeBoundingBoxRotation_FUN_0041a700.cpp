// Name: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041a700
// Address: 0041a700
// Address Range: [[0041a700, 0041aa94]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041a700(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041a700(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

{
  CVector3i *pCVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  int aiStackY_1078 [1006];
  CMatrix3x3f local_b8;
  int local_90;
  int aiStack_8c [5];
  CVector3f local_78;
  CVector3f local_6c;
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
  
  bVar11 = 0;
  local_40 = 0x7fffffff;
  local_5c[5] = 0;
  do {
    local_5c[6] = local_5c[5];
    local_3c = 0;
    do {
      local_14 = local_5c[6];
      local_6c.x = (float)local_3c * _DAT_005d44e5 * _DAT_005d44e9;
      local_6c.y = (float)local_5c[6] * _DAT_005d44e5 * _DAT_005d44e9;
      local_6c.z = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&local_b8,&local_6c);
      fVar12 = (float10)local_b8.m[0].x * (float10)_DAT_005d44ed;
      fVar13 = (float10)local_b8.m[0].y * (float10)_DAT_005d44ed;
      fVar14 = (float10)local_b8.m[0].z * (float10)_DAT_005d44ed;
      fVar15 = (float10)local_b8.m[1].x * (float10)_DAT_005d44ed;
      fVar16 = (float10)local_b8.m[1].y * (float10)_DAT_005d44ed;
      fVar17 = (float10)local_b8.m[1].z * (float10)_DAT_005d44ed;
      fVar18 = (float10)local_b8.m[2].x * (float10)_DAT_005d44ed;
      round();
      local_20 = (int)ROUND(fVar12);
      fVar12 = (float10)local_b8.m[2].y * (float10)_DAT_005d44ed;
      round();
      local_1c = (int)ROUND(fVar13);
      fVar13 = (float10)local_b8.m[2].z * (float10)_DAT_005d44ed;
      iVar7 = 0;
      local_5c[1] = 0x7fffffff;
      local_5c[0] = 0x7fffffff;
      local_60 = 0x7fffffff;
      local_5c[4] = -0x7fffffff;
      local_5c[3] = -0x7fffffff;
      local_5c[2] = -0x7fffffff;
      iVar9 = this_ptr->vertex_count;
      round();
      round();
      round();
      round();
      round();
      round();
      round();
      local_30 = (int)ROUND(fVar14);
      local_2c = (int)ROUND(fVar15);
      local_28 = (int)ROUND(fVar16);
      local_24 = (int)ROUND(fVar17);
      local_34 = (int)ROUND(fVar18);
      local_38 = (int)ROUND(fVar12);
      local_18 = (int)ROUND(fVar13);
      if (0 < iVar9) {
        iVar9 = 0;
        do {
          pCVar1 = this_ptr->vertices;
          lVar2 = (longlong)local_20 * (longlong)*(int *)((int)&pCVar1->x + iVar9);
          lVar3 = (longlong)(int)ROUND(fVar15) * (longlong)*(int *)((int)&pCVar1->y + iVar9);
          lVar4 = (longlong)(int)ROUND(fVar18) * (longlong)*(int *)((int)&pCVar1->z + iVar9);
          iVar6 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
          lVar2 = (longlong)local_1c * (longlong)*(int *)((int)&pCVar1->x + iVar9);
          lVar3 = (longlong)(int)ROUND(fVar16) * (longlong)*(int *)((int)&pCVar1->y + iVar9);
          lVar4 = (longlong)(int)ROUND(fVar12) * (longlong)*(int *)((int)&pCVar1->z + iVar9);
          iVar8 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
          lVar2 = (longlong)(int)ROUND(fVar14) * (longlong)*(int *)((int)&pCVar1->x + iVar9);
          lVar3 = (longlong)(int)ROUND(fVar17) * (longlong)*(int *)((int)&pCVar1->y + iVar9);
          local_14 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                     ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
          lVar2 = (longlong)(int)ROUND(fVar13) * (longlong)*(int *)((int)&pCVar1->z + iVar9);
          iVar5 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + local_14;
          if (iVar6 < local_60) {
            local_60 = iVar6;
          }
          if (local_5c[2] < iVar6) {
            local_5c[2] = iVar6;
          }
          if (iVar8 < local_5c[0]) {
            local_5c[0] = iVar8;
          }
          if (local_5c[3] < iVar8) {
            local_5c[3] = iVar8;
          }
          if (iVar5 < local_5c[1]) {
            local_5c[1] = iVar5;
          }
          if (local_5c[4] < iVar5) {
            local_5c[4] = iVar5;
          }
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0xc;
        } while (iVar7 < this_ptr->vertex_count);
      }
      iVar9 = local_5c[2] - local_60;
      if (local_5c[2] - local_60 < local_5c[3] - local_5c[0]) {
        iVar9 = local_5c[3] - local_5c[0];
      }
      if (iVar9 < local_40) {
        local_90 = local_60;
        aiStack_8c[(uint)bVar11 * -2] = local_5c[(uint)bVar11 * -2];
        aiStack_8c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             local_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        local_40 = iVar9;
        aiStack_8c[2] = local_5c[2];
        aiStack_8c[(uint)bVar11 * -2 + 3] = local_5c[(uint)bVar11 * -2 + 3];
        aiStack_8c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             local_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        if (&local_78 != &local_6c) {
          local_78.x = local_6c.x;
          local_78.y = local_6c.y;
          local_78.z = local_6c.z;
        }
      }
      local_3c = local_3c + 2;
    } while (local_3c != 0x18);
    local_5c[5] = local_5c[5] + 2;
  } while (local_5c[5] != 0x18);
  piVar10 = (int *)((int)out_bbox_min + (uint)bVar11 * -8 + 4);
  out_bbox_min->x = local_90;
  *piVar10 = aiStack_8c[(uint)bVar11 * -2];
  piVar10[(uint)bVar11 * -2 + 1] = aiStack_8c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  piVar10 = (int *)((int)out_bbox_max + (uint)bVar11 * -8 + 4);
  out_bbox_max->x = aiStack_8c[2];
  *piVar10 = aiStack_8c[(uint)bVar11 * -2 + 3];
  piVar10[(uint)bVar11 * -2 + 1] = aiStack_8c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a200(this_ptr,&local_78);
  return;
}
