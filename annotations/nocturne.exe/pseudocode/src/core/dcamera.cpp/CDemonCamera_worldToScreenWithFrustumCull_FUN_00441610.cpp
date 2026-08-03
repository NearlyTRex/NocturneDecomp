// Name: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
// Address: 00441610
// Address Range: [[00441610, 004418c6]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  int aiStackY_1018 [1017];
  int iStack_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar6 = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(DAT_005ae704);
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
      lVar1 = (longlong)(this_ptr->source_matrix).m[0].x * (longlong)local_24;
      lVar2 = (longlong)(this_ptr->source_matrix).m[1].x * (longlong)local_20;
      lVar3 = (longlong)(this_ptr->source_matrix).m[2].x * (longlong)local_1c;
      local_18 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                 ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      if ((local_18 < local_10) && (-local_10 < local_18)) {
        lVar1 = (longlong)(this_ptr->source_matrix).m[0].y * (longlong)local_24;
        lVar2 = (longlong)(this_ptr->source_matrix).m[1].y * (longlong)local_20;
        lVar3 = (longlong)(this_ptr->source_matrix).m[2].y * (longlong)local_1c;
        local_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
        if ((local_14 < local_10) && (-local_10 < local_14)) {
LAB_00441872:
          local_18 = (this_ptr->cached_projection).center_x_fixed +
                     (int)(((longlong)local_18 *
                           (longlong)(this_ptr->cached_projection).half_width_fixed) /
                          (longlong)local_10);
          local_14 = (this_ptr->cached_projection).center_y_fixed +
                     (int)(((longlong)local_14 *
                           (longlong)(this_ptr->cached_projection).neg_half_height_fixed) /
                          (longlong)local_10);
          iStack_30 = local_18;
          *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xfffffff0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          puVar5 = (uint *)((int)output_ptr + (uint)bVar6 * -8 + 4);
          output_ptr->x = iStack_30;
          *puVar5 = *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8);
          puVar5[(uint)bVar6 * -2 + 1] =
               *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          return output_ptr;
        }
      }
    }
  }
  else {
    local_24 = input_ptr->x - this_ptr->alpha_translations[iVar4].x;
    local_20 = input_ptr->y - this_ptr->alpha_translations[iVar4].y;
    local_1c = input_ptr->z - this_ptr->alpha_translations[iVar4].z;
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[2][iVar4] * (longlong)local_24;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[5][iVar4] * (longlong)local_20;
    lVar3 = (longlong)this_ptr->alpha_transform_matrices[8][iVar4] * (longlong)local_1c;
    local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    if (0 < local_10) {
      lVar1 = (longlong)this_ptr->alpha_transform_matrices[0][iVar4] * (longlong)local_24;
      lVar2 = (longlong)this_ptr->alpha_transform_matrices[3][iVar4] * (longlong)local_20;
      lVar3 = (longlong)this_ptr->alpha_transform_matrices[6][iVar4] * (longlong)local_1c;
      local_18 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                 ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      if ((local_18 < local_10) && (-local_10 < local_18)) {
        lVar1 = (longlong)this_ptr->alpha_transform_matrices[1][iVar4] * (longlong)local_24;
        lVar2 = (longlong)this_ptr->alpha_transform_matrices[4][iVar4] * (longlong)local_20;
        lVar3 = (longlong)this_ptr->alpha_transform_matrices[7][iVar4] * (longlong)local_1c;
        local_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
        if ((local_14 < local_10) && (-local_10 < local_14)) goto LAB_00441872;
      }
    }
  }
  iStack_30 = _DAT_01410280;
  *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8) =
       *(uint *)(&DAT_01410284 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&DAT_01410288 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  puVar5 = (uint *)((int)output_ptr + (uint)bVar6 * -8 + 4);
  output_ptr->x = iStack_30;
  *puVar5 = *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8);
  puVar5[(uint)bVar6 * -2 + 1] =
       *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  return output_ptr;
}
