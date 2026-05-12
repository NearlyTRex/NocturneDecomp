// Name: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
// Address: 0044d7d0
// MANUAL RECONSTRUCTION
// Address Range: [[0044d7d0, 0044da86] [0060a229, 0060a29c]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

{
  int iVar1;
  int iVar2;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar4;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar5;
  byte bVar6;
  int iStack_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  longlong lVar2;
  longlong lVar3;
  longlong lVar1;
  
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  iVar2 = g_CameraOutOfBoundsCoord.z;
  iVar1 = g_CameraOutOfBoundsCoord.y;
  if (iVar4 == 0) {
    iVar7 = input_ptr->x - (this_ptr->camera_origin).x;
    iVar8 = input_ptr->y - (this_ptr->camera_origin).y;
    iVar9 = input_ptr->z - (this_ptr->camera_origin).z;
    lVar1 = (longlong)(this_ptr->source_matrix).m[0].z * (longlong)iVar7;
    lVar2 = (longlong)(this_ptr->source_matrix).m[1].z * (longlong)iVar8;
    lVar3 = (longlong)(this_ptr->source_matrix).m[2].z * (longlong)iVar9;
    local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    if ((((0 < local_10) &&
         ((lVar4 = (longlong)(this_ptr->source_matrix).m[0].x * (longlong)iVar7,
          lVar5 = (longlong)(this_ptr->source_matrix).m[1].x * (longlong)iVar8,
          lVar6 = (longlong)(this_ptr->source_matrix).m[2].x * (longlong)iVar9,
          local_18 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                     ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                     ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10),
          local_18 < local_10 && (-local_10 < local_18)))) &&
        (lVar4 = (longlong)(this_ptr->source_matrix).m[0].y * (longlong)iVar7,
        lVar5 = (longlong)(this_ptr->source_matrix).m[1].y * (longlong)iVar8,
        lVar6 = (longlong)(this_ptr->source_matrix).m[2].y * (longlong)iVar9,
        local_14 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                   ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                   ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10),
        local_14 < local_10)) && (-local_10 < local_14)) {
LAB_0044da32:
      iVar1 = (this_ptr->cached_projection).neg_half_height_fixed;
      iVar2 = (this_ptr->cached_projection).center_y_fixed;
      output_ptr->x =
           (this_ptr->cached_projection).center_x_fixed +
           (int)(((longlong)local_18 * (longlong)(this_ptr->cached_projection).half_width_fixed) /
                (longlong)local_10);
      output_ptr->y = iVar2 + (int)(((longlong)local_14 * (longlong)iVar1) / (longlong)local_10);
      output_ptr->z = local_10;
      return output_ptr;
    }
  }
  else {
    iVar7 = input_ptr->x - this_ptr->alpha_translations[iVar4].x;
    iVar8 = input_ptr->y - this_ptr->alpha_translations[iVar4].y;
    iVar9 = input_ptr->z - this_ptr->alpha_translations[iVar4].z;
    lVar4 = (longlong)this_ptr->alpha_transform_matrices[2][iVar4] * (longlong)iVar7;
    lVar5 = (longlong)this_ptr->alpha_transform_matrices[5][iVar4] * (longlong)iVar8;
    lVar6 = (longlong)this_ptr->alpha_transform_matrices[8][iVar4] * (longlong)iVar9;
    local_10 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
               ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
               ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
    if ((((0 < local_10) &&
         (lVar4 = (longlong)this_ptr->alpha_transform_matrices[0][iVar4] * (longlong)iVar7,
         lVar5 = (longlong)this_ptr->alpha_transform_matrices[3][iVar4] * (longlong)iVar8,
         lVar6 = (longlong)this_ptr->alpha_transform_matrices[6][iVar4] * (longlong)iVar9,
         local_18 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                    ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                    ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10),
         local_18 < local_10)) && (-local_10 < local_18)) &&
       ((lVar4 = (longlong)this_ptr->alpha_transform_matrices[1][iVar4] * (longlong)iVar7,
        lVar5 = (longlong)this_ptr->alpha_transform_matrices[4][iVar4] * (longlong)iVar8,
        lVar6 = (longlong)this_ptr->alpha_transform_matrices[7][iVar4] * (longlong)iVar9,
        local_14 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                   ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                   ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10),
        local_14 < local_10 && (-local_10 < local_14)))) goto LAB_0044da32;
  }
  output_ptr->x = g_CameraOutOfBoundsCoord.x;
  output_ptr->y = iVar1;
  output_ptr->z = iVar2;
  return output_ptr;
}
