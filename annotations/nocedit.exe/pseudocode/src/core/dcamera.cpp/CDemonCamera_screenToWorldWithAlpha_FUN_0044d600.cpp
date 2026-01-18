// Name: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600
// Address: 0044d600
// Address Range: [[0044d600, 0044d7c6]]
// Convention: __cdecl
// Signature: CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)

#include "nocturne.h"

CVector3i * __cdecl
core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600
          (CDemonCamera *this_ptr,CVector3i *output_ptr,CVector3i *input_ptr)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  CVector3i *unaff_ESI;
  uint *puVar6;
  byte bVar7;
  int aiStackY_1004 [1014];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  local_20 = output_ptr->z;
  local_28 = output_ptr->x;
  local_24 = output_ptr->y;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar4 == 0) {
    lVar1 = (longlong)local_24 * (longlong)(this_ptr->inverted_matrix).m[1].x +
            (longlong)local_28 * (longlong)(this_ptr->inverted_matrix).m[0].x +
            (longlong)local_20 * (longlong)(this_ptr->inverted_matrix).m[2].x;
    local_1c = (this_ptr->camera_origin).x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)local_24 * (longlong)(this_ptr->inverted_matrix).m[1].y +
            (longlong)local_28 * (longlong)(this_ptr->inverted_matrix).m[0].y +
            (longlong)local_20 * (longlong)(this_ptr->inverted_matrix).m[2].y;
    local_18 = (this_ptr->camera_origin).y +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)local_24 * (longlong)(this_ptr->inverted_matrix).m[1].z +
            (longlong)local_28 * (longlong)(this_ptr->inverted_matrix).m[0].z +
            (longlong)local_20 * (longlong)(this_ptr->inverted_matrix).m[2].z;
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar4 = (this_ptr->camera_origin).z;
  }
  else {
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[9][iVar4] * (longlong)local_28;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xc][iVar4] * (longlong)local_24;
    lVar3 = (longlong)
            *(int *)((int)((this_ptr->transform_state).saved_source_matrix.m + -10) + iVar4 * 4) *
            (longlong)local_20;
    local_1c = this_ptr->alpha_translations[iVar4].x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[10][iVar4] * (longlong)local_28;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xd][iVar4] * (longlong)local_24;
    lVar3 = (longlong)
            *(int *)((int)(this_ptr->transform_state).saved_source_matrix.m + iVar4 * 4 + -0x58) *
            (longlong)local_20;
    local_18 = this_ptr->alpha_translations[iVar4].y +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[0xb][iVar4] * (longlong)local_28;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xe][iVar4] * (longlong)local_24;
    lVar3 = (longlong)
            *(int *)((int)(this_ptr->transform_state).saved_source_matrix.m + iVar4 * 4 + -0x38) *
            (longlong)local_20;
    iVar4 = this_ptr->alpha_translations[iVar4].z;
    uVar5 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  local_14 = iVar4 + uVar5;
  puVar6 = (uint *)((int)unaff_ESI + (uint)bVar7 * -8 + 4);
  unaff_ESI->x = local_1c;
  *puVar6 = *(uint *)((int)&stack0xffffffe8 + (uint)bVar7 * -8);
  puVar6[(uint)bVar7 * -2 + 1] =
       *(uint *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  return unaff_ESI;
}
