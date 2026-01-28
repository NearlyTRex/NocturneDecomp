// Name: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
// Address: 0044d7d0
// Address Range: [[0044d7d0, 0044da86]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0 (CDemonCamera *this_ptr,CVector3i *output_ptr,CVector3i *input_ptr)

#include "nocturne.h"

CVector3i * __cdecl
core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
          (CDemonCamera *this_ptr,CVector3i *output_ptr,CVector3i *input_ptr)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  CVector3i *unaff_ESI;
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
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar4 == 0) {
    local_24 = output_ptr->x - (this_ptr->camera_origin).x;
    local_20 = output_ptr->y - (this_ptr->camera_origin).y;
    local_1c = output_ptr->z - (this_ptr->camera_origin).z;
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
LAB_0044da32:
          local_18 = (this_ptr->saved_viewport_rect).right +
                     (int)(((longlong)local_18 * (longlong)(this_ptr->saved_viewport_rect).left) /
                          (longlong)local_10);
          local_14 = (this_ptr->saved_viewport_rect).bottom +
                     (int)(((longlong)local_14 * (longlong)(this_ptr->saved_viewport_rect).top) /
                          (longlong)local_10);
          iStack_30 = local_18;
          *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xfffffff0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          puVar5 = (uint *)((int)unaff_ESI + (uint)bVar6 * -8 + 4);
          unaff_ESI->x = iStack_30;
          *puVar5 = *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8);
          puVar5[(uint)bVar6 * -2 + 1] =
               *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          return unaff_ESI;
        }
      }
    }
  }
  else {
    local_24 = output_ptr->x - this_ptr->alpha_translations[iVar4].x;
    local_20 = output_ptr->y - this_ptr->alpha_translations[iVar4].y;
    local_1c = output_ptr->z - this_ptr->alpha_translations[iVar4].z;
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
        if ((local_14 < local_10) && (-local_10 < local_14)) goto LAB_0044da32;
      }
    }
  }
  iStack_30 = g_CameraOutOfBoundsCoord.x;
  *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8) =
       *(uint *)((int)&g_CameraOutOfBoundsCoord + (uint)bVar6 * -8 + 4);
  *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((uint)bVar6 * -8 + 0x151bfa0 + (uint)bVar6 * -8);
  puVar5 = (uint *)((int)unaff_ESI + (uint)bVar6 * -8 + 4);
  unaff_ESI->x = iStack_30;
  *puVar5 = *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8);
  puVar5[(uint)bVar6 * -2 + 1] =
       *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  return unaff_ESI;
}
