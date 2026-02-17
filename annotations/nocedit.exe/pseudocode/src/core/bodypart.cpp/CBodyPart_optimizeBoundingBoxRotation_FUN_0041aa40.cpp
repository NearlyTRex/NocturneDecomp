// Name: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40
// Address: 0041aa40
// Address Range: [[0041aa40, 0041adcb]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte bVar10;
  int aiStackY_106c [1001];
  int local_c0;
  CMatrix3x3f local_b8;
  CVector3f local_90;
  int local_84;
  int aiStack_80 [8];
  int local_60;
  int local_5c;
  int local_58;
  CVector3f local_54;
  int local_48;
  int local_44;
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
  
  bVar10 = 0;
  local_44 = 0x7fffffff;
  local_48 = 0;
  do {
    iVar4 = local_48;
    local_c0 = 0;
    do {
      local_18 = iVar4;
      local_54.x = (float)local_c0 * (float)3.1415926535000001 * (float)0.083333333333333301;
      local_54.y = (float)iVar4 * (float)3.1415926535000001 * (float)0.083333333333333301;
      local_54.z = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_b8,&local_54);
      local_28 = (int)ROUND(ROUND(local_b8.m[0].x * 65536.0f));
      local_24 = (int)ROUND(ROUND(local_b8.m[0].y * 65536.0f));
      local_58 = 0x7fffffff;
      local_5c = 0x7fffffff;
      local_60 = 0x7fffffff;
      aiStack_80[4] = -0x7fffffff;
      aiStack_80[3] = -0x7fffffff;
      aiStack_80[2] = -0x7fffffff;
      iVar8 = 0;
      local_3c = (int)ROUND(ROUND(local_b8.m[0].z * 65536.0f));
      local_20 = (int)ROUND(ROUND(local_b8.m[1].x * 65536.0f));
      local_34 = (int)ROUND(ROUND(local_b8.m[1].y * 65536.0f));
      local_2c = (int)ROUND(ROUND(local_b8.m[1].z * 65536.0f));
      local_30 = (int)ROUND(ROUND(local_b8.m[2].x * 65536.0f));
      local_38 = (int)ROUND(ROUND(local_b8.m[2].y * 65536.0f));
      local_40 = (int)ROUND(ROUND(local_b8.m[2].z * 65536.0f));
      if (0 < this_ptr->vertex_count) {
        local_1c = 0;
        do {
          piVar9 = (int *)((int)&this_ptr->vertices->x + local_1c);
          lVar1 = (longlong)(int)ROUND(ROUND(local_b8.m[0].x * 65536.0f)) * (longlong)*piVar9;
          lVar2 = (longlong)(int)ROUND(ROUND(local_b8.m[1].x * 65536.0f)) *
                  (longlong)piVar9[1];
          lVar3 = (longlong)(int)ROUND(ROUND(local_b8.m[2].x * 65536.0f)) *
                  (longlong)piVar9[2];
          iVar6 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                  ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)ROUND(ROUND(local_b8.m[0].y * 65536.0f)) * (longlong)*piVar9;
          lVar2 = (longlong)(int)ROUND(ROUND(local_b8.m[1].y * 65536.0f)) *
                  (longlong)piVar9[1];
          lVar3 = (longlong)(int)ROUND(ROUND(local_b8.m[2].y * 65536.0f)) *
                  (longlong)piVar9[2];
          iVar7 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                  ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)ROUND(ROUND(local_b8.m[0].z * 65536.0f)) * (longlong)*piVar9;
          lVar2 = (longlong)(int)ROUND(ROUND(local_b8.m[1].z * 65536.0f)) *
                  (longlong)piVar9[1];
          local_18 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                     ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)ROUND(ROUND(local_b8.m[2].z * 65536.0f)) *
                  (longlong)piVar9[2];
          iVar5 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + local_18;
          if (iVar6 < local_60) {
            local_60 = iVar6;
          }
          if (aiStack_80[2] < iVar6) {
            aiStack_80[2] = iVar6;
          }
          if (iVar7 < local_5c) {
            local_5c = iVar7;
          }
          if (aiStack_80[3] < iVar7) {
            aiStack_80[3] = iVar7;
          }
          if (iVar5 < local_58) {
            local_58 = iVar5;
          }
          if (aiStack_80[4] < iVar5) {
            aiStack_80[4] = iVar5;
          }
          iVar8 = iVar8 + 1;
          local_1c = local_1c + 0xc;
        } while (iVar8 < this_ptr->vertex_count);
      }
      iVar8 = aiStack_80[2] - local_60;
      if (aiStack_80[2] - local_60 < aiStack_80[3] - local_5c) {
        iVar8 = aiStack_80[3] - local_5c;
      }
      if (iVar8 < local_44) {
        local_84 = local_60;
        aiStack_80[(uint)bVar10 * -2] = aiStack_80[(uint)bVar10 * -2 + 9];
        aiStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             aiStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        local_44 = iVar8;
        aiStack_80[5] = aiStack_80[2];
        aiStack_80[(uint)bVar10 * -2 + 6] = aiStack_80[(uint)bVar10 * -2 + 3];
        aiStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             aiStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        if (&local_90 != &local_54) {
          local_90.x = local_54.x;
          local_90.y = local_54.y;
          local_90.z = local_54.z;
        }
      }
      local_c0 = local_c0 + 2;
    } while (local_c0 != 0x18);
    local_48 = local_48 + 2;
  } while (local_48 != 0x18);
  piVar9 = (int *)((int)out_bbox_min + (uint)bVar10 * -8 + 4);
  out_bbox_min->x = local_84;
  *piVar9 = aiStack_80[(uint)bVar10 * -2];
  piVar9[(uint)bVar10 * -2 + 1] = aiStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  piVar9 = (int *)((int)out_bbox_max + (uint)bVar10 * -8 + 4);
  out_bbox_max->x = aiStack_80[5];
  *piVar9 = aiStack_80[(uint)bVar10 * -2 + 6];
  piVar9[(uint)bVar10 * -2 + 1] = aiStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
  core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a630(this_ptr,&local_90);
  return;
}
