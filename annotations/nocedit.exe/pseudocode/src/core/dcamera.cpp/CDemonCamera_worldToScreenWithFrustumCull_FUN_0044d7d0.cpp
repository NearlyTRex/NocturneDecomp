// Name: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
// Address: 0044d7d0
// Address Range: [[0044d7d0, 0044da86]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

{
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar4;
  int iVar7;
  uint *puVar5;
  int *piVar8;
  byte bVar6;
  int aiStackY_1018 [1017];
  int iStack_30;
  int aiStack_2c [2];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  longlong lVar2;
  longlong lVar3;
  longlong lVar1;
  
  bVar6 = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar4 == 0) {
    local_24 = input_ptr->x - (this_ptr->camera_origin).x;
    local_20 = input_ptr->y - (this_ptr->camera_origin).y;
    local_1c = input_ptr->z - (this_ptr->camera_origin).z;
    lVar1 = (longlong)(this_ptr->source_matrix).m[0].z * (longlong)local_24;
    lVar2 = (longlong)(this_ptr->source_matrix).m[1].z * (longlong)local_20;
    lVar3 = (longlong)(this_ptr->source_matrix).m[2].z * (longlong)local_1c;
    local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    if (0 < local_10) {
      lVar4 = (longlong)(this_ptr->source_matrix).m[0].x * (longlong)local_24;
      lVar5 = (longlong)(this_ptr->source_matrix).m[1].x * (longlong)local_20;
      lVar6 = (longlong)(this_ptr->source_matrix).m[2].x * (longlong)local_1c;
      local_18 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                 ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                 ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
      if ((local_18 < local_10) && (-local_10 < local_18)) {
        lVar4 = (longlong)(this_ptr->source_matrix).m[0].y * (longlong)local_24;
        lVar5 = (longlong)(this_ptr->source_matrix).m[1].y * (longlong)local_20;
        lVar6 = (longlong)(this_ptr->source_matrix).m[2].y * (longlong)local_1c;
        local_14 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                   ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                   ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
        if ((local_14 < local_10) && (-local_10 < local_14)) {
LAB_0044da32:
          iVar7 = (this_ptr->saved_viewport_rect).right +
                  (int)(((longlong)local_18 * (longlong)(this_ptr->saved_viewport_rect).left) /
                       (longlong)local_10);
          local_18 = iVar7;
          local_14 = (this_ptr->saved_viewport_rect).bottom +
                     (int)(((longlong)local_14 * (longlong)(this_ptr->saved_viewport_rect).top) /
                          (longlong)local_10);
          aiStack_2c[(uint)bVar6 * -2] = (&local_14)[(uint)bVar6 * -2];
          aiStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               (&local_10)[(uint)bVar6 * -2 + (uint)bVar6 * -2];
          piVar8 = (int *)((int)output_ptr + (uint)bVar6 * -8 + 4);
          output_ptr->x = iVar7;
          *piVar8 = aiStack_2c[(uint)bVar6 * -2];
          piVar8[(uint)bVar6 * -2 + 1] = aiStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          return output_ptr;
        }
      }
    }
  }
  else {
    local_24 = input_ptr->x - this_ptr->alpha_translations[iVar4].x;
    local_20 = input_ptr->y - this_ptr->alpha_translations[iVar4].y;
    local_1c = input_ptr->z - this_ptr->alpha_translations[iVar4].z;
    lVar4 = (longlong)this_ptr->alpha_transform_matrices[2][iVar4] * (longlong)local_24;
    lVar5 = (longlong)this_ptr->alpha_transform_matrices[5][iVar4] * (longlong)local_20;
    lVar6 = (longlong)this_ptr->alpha_transform_matrices[8][iVar4] * (longlong)local_1c;
    local_10 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
               ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
               ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
    if (0 < local_10) {
      lVar4 = (longlong)this_ptr->alpha_transform_matrices[0][iVar4] * (longlong)local_24;
      lVar5 = (longlong)this_ptr->alpha_transform_matrices[3][iVar4] * (longlong)local_20;
      lVar6 = (longlong)this_ptr->alpha_transform_matrices[6][iVar4] * (longlong)local_1c;
      local_18 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                 ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                 ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
      if ((local_18 < local_10) && (-local_10 < local_18)) {
        lVar4 = (longlong)this_ptr->alpha_transform_matrices[1][iVar4] * (longlong)local_24;
        lVar5 = (longlong)this_ptr->alpha_transform_matrices[4][iVar4] * (longlong)local_20;
        lVar6 = (longlong)this_ptr->alpha_transform_matrices[7][iVar4] * (longlong)local_1c;
        local_14 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                   ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                   ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
        if ((local_14 < local_10) && (-local_10 < local_14)) goto LAB_0044da32;
      }
    }
  }
  aiStack_2c[(uint)bVar6 * -2] = *(int *)((int)&g_CameraOutOfBoundsCoord + (uint)bVar6 * -8 + 4);
  aiStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(int *)((uint)bVar6 * -8 + 0x151bfa0 + (uint)bVar6 * -8);
  puVar5 = (uint *)((int)output_ptr + (uint)bVar6 * -8 + 4);
  output_ptr->x = g_CameraOutOfBoundsCoord.x;
  *puVar5 = aiStack_2c[(uint)bVar6 * -2];
  puVar5[(uint)bVar6 * -2 + 1] = aiStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  return output_ptr;
}
