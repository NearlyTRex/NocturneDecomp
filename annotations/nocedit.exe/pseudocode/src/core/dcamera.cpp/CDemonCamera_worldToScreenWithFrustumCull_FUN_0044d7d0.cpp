// Name: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
// Address: 0044d7d0
// Address Range: [[0044d7d0, 0044da86]]
// Convention: __cdecl
// Signature: CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)

#include "nocturne.h"

CVector3i * __cdecl
core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
          (CDemonCamera *this_ptr,CVector3i *output_ptr,CVector3i *input_ptr)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  CVector3i *unaff_ESI;
  uint *puVar6;
  byte bVar7;
  int aiStackY_1014 [1016];
  int iStack_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar7 = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr);
  if (iVar4 == 0) {
    local_20 = output_ptr->x - (this_ptr->camera_origin).x;
    local_1c = output_ptr->y - (this_ptr->camera_origin).y;
    local_18 = output_ptr->z - (this_ptr->camera_origin).z;
    lVar1 = (longlong)(this_ptr->source_matrix).m[0].z * (longlong)local_20;
    lVar2 = (longlong)(this_ptr->source_matrix).m[1].z * (longlong)local_1c;
    lVar3 = (longlong)(this_ptr->source_matrix).m[2].z * (longlong)local_18;
    iVar5 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    if (0 < iVar5) {
      lVar1 = (longlong)(this_ptr->source_matrix).m[0].x * (longlong)local_20;
      lVar2 = (longlong)(this_ptr->source_matrix).m[1].x * (longlong)local_1c;
      lVar3 = (longlong)(this_ptr->source_matrix).m[2].x * (longlong)local_18;
      local_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                 ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      if ((local_14 < iVar5) && (-iVar5 < local_14)) {
        lVar1 = (longlong)(this_ptr->source_matrix).m[0].y * (longlong)local_20;
        lVar2 = (longlong)(this_ptr->source_matrix).m[1].y * (longlong)local_1c;
        lVar3 = (longlong)(this_ptr->source_matrix).m[2].y * (longlong)local_18;
        local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
        if ((local_10 < iVar5) && (-iVar5 < local_10)) {
LAB_0044da32:
          local_14 = (this_ptr->saved_viewport_rect).right +
                     (int)(((longlong)local_14 * (longlong)(this_ptr->saved_viewport_rect).left) /
                          (longlong)iVar5);
          local_10 = (this_ptr->saved_viewport_rect).bottom +
                     (int)(((longlong)local_10 * (longlong)(this_ptr->saved_viewport_rect).top) /
                          (longlong)iVar5);
          iStack_2c = local_14;
          *(uint *)(&stack0xffffffd8 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xfffffff0 + (uint)bVar7 * -8);
          *(uint *)(&stack0xffffffdc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xfffffff4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          puVar6 = (uint *)((int)unaff_ESI + (uint)bVar7 * -8 + 4);
          unaff_ESI->x = iStack_2c;
          *puVar6 = *(uint *)(&stack0xffffffd8 + (uint)bVar7 * -8);
          puVar6[(uint)bVar7 * -2 + 1] =
               *(uint *)(&stack0xffffffdc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          return unaff_ESI;
        }
      }
    }
  }
  else {
    local_20 = output_ptr->x - this_ptr->alpha_translations[iVar4].x;
    local_1c = output_ptr->y - this_ptr->alpha_translations[iVar4].y;
    local_18 = output_ptr->z - this_ptr->alpha_translations[iVar4].z;
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[2][iVar4] * (longlong)local_20;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[5][iVar4] * (longlong)local_1c;
    lVar3 = (longlong)this_ptr->alpha_transform_matrices[8][iVar4] * (longlong)local_18;
    iVar5 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    if (0 < iVar5) {
      lVar1 = (longlong)this_ptr->alpha_transform_matrices[0][iVar4] * (longlong)local_20;
      lVar2 = (longlong)this_ptr->alpha_transform_matrices[3][iVar4] * (longlong)local_1c;
      lVar3 = (longlong)this_ptr->alpha_transform_matrices[6][iVar4] * (longlong)local_18;
      local_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                 ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      if ((local_14 < iVar5) && (-iVar5 < local_14)) {
        lVar1 = (longlong)this_ptr->alpha_transform_matrices[1][iVar4] * (longlong)local_20;
        lVar2 = (longlong)this_ptr->alpha_transform_matrices[4][iVar4] * (longlong)local_1c;
        lVar3 = (longlong)this_ptr->alpha_transform_matrices[7][iVar4] * (longlong)local_18;
        local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
        if ((local_10 < iVar5) && (-iVar5 < local_10)) goto LAB_0044da32;
      }
    }
  }
  iStack_2c = g_CameraOutOfBoundsCoord.x;
  *(uint *)(&stack0xffffffd8 + (uint)bVar7 * -8) =
       *(uint *)((int)&g_CameraOutOfBoundsCoord + (uint)bVar7 * -8 + 4);
  *(uint *)(&stack0xffffffdc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((uint)bVar7 * -8 + 0x151bfa0 + (uint)bVar7 * -8);
  puVar6 = (uint *)((int)unaff_ESI + (uint)bVar7 * -8 + 4);
  unaff_ESI->x = iStack_2c;
  *puVar6 = *(uint *)(&stack0xffffffd8 + (uint)bVar7 * -8);
  puVar6[(uint)bVar7 * -2 + 1] =
       *(uint *)(&stack0xffffffdc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  return unaff_ESI;
}
