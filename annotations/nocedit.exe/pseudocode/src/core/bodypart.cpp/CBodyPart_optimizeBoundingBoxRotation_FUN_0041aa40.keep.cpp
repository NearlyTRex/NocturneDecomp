// Name: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40
// Address: 0041aa40
// MANUAL RECONSTRUCTION
// Address Range: [[0041aa40, 0041adcb] [0060a1b0, 0060a228]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

{
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar5;
  int iVar9;
  int iVar6;
  int iVar7;
  int iVar8;
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
  longlong lVar2;
  longlong lVar3;
  longlong lVar1;
  
  local_44 = 0x7fffffff;
  local_48 = 0;
  do {
    local_c0 = 0;
    do {
      local_54.x = (float)local_c0 * (float)3.1415926535000001 * (float)0.083333333333333301;
      local_54.y = (float)local_48 * (float)3.1415926535000001 * (float)0.083333333333333301;
      local_54.z = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_b8,&local_54);
      local_58 = 0x7fffffff;
      local_5c = 0x7fffffff;
      local_60 = 0x7fffffff;
      aiStack_80[4] = -0x7fffffff;
      aiStack_80[3] = -0x7fffffff;
      aiStack_80[2] = -0x7fffffff;
      iVar8 = 0;
      if (0 < this_ptr->vertex_count) {
        do {
          lVar1 = (longlong)(int)ROUND(ROUND(local_b8.m[0].x * 65536.0f)) *
                  (longlong)this_ptr->vertices[iVar8].x;
          lVar2 = (longlong)(int)ROUND(ROUND(local_b8.m[1].x * 65536.0f)) *
                  (longlong)this_ptr->vertices[iVar8].y;
          lVar3 = (longlong)(int)ROUND(ROUND(local_b8.m[2].x * 65536.0f)) *
                  (longlong)this_ptr->vertices[iVar8].z;
          iVar6 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                  ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
          lVar4 = (longlong)(int)ROUND(ROUND(local_b8.m[0].y * 65536.0f)) *
                  (longlong)this_ptr->vertices[iVar8].x;
          lVar5 = (longlong)(int)ROUND(ROUND(local_b8.m[1].y * 65536.0f)) *
                  (longlong)this_ptr->vertices[iVar8].y;
          lVar6 = (longlong)(int)ROUND(ROUND(local_b8.m[2].y * 65536.0f)) *
                  (longlong)this_ptr->vertices[iVar8].z;
          iVar7 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                  ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                  ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
          lVar4 = (longlong)(int)ROUND(ROUND(local_b8.m[0].z * 65536.0f)) *
                  (longlong)this_ptr->vertices[iVar8].x;
          lVar5 = (longlong)(int)ROUND(ROUND(local_b8.m[1].z * 65536.0f)) *
                  (longlong)this_ptr->vertices[iVar8].y;
          lVar6 = (longlong)(int)ROUND(ROUND(local_b8.m[2].z * 65536.0f)) *
                  (longlong)this_ptr->vertices[iVar8].z;
          iVar5 = ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                  ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
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
        } while (iVar8 < this_ptr->vertex_count);
      }
      iVar9 = aiStack_80[2] - local_60;
      if (aiStack_80[2] - local_60 < aiStack_80[3] - local_5c) {
        iVar9 = aiStack_80[3] - local_5c;
      }
      if (iVar9 < local_44) {
        local_84 = local_60;
        aiStack_80[0] = local_5c;
        aiStack_80[1] = local_58;
        aiStack_80[5] = aiStack_80[2];
        aiStack_80[6] = aiStack_80[3];
        aiStack_80[7] = aiStack_80[4];
        local_44 = iVar9;
        local_90 = local_54;
      }
      local_c0 = local_c0 + 2;
    } while (local_c0 != 0x18);
    local_48 = local_48 + 2;
  } while (local_48 != 0x18);
  out_bbox_min->x = local_84;
  out_bbox_min->y = aiStack_80[0];
  out_bbox_min->z = aiStack_80[1];
  out_bbox_max->x = aiStack_80[5];
  out_bbox_max->y = aiStack_80[6];
  out_bbox_max->z = aiStack_80[7];
  core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a630(this_ptr,&local_90);
  return;
}
