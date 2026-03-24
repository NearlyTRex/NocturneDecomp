// Name: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600
// Address: 0044d600
// Address Range: [[0044d600, 0044d7c6] [0060c7cc, 0060c7ea]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

{
  int iVar1;
  int iVar2;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar4;
  uint uVar5;
  int iVar7;
  uint *puVar6;
  byte bVar7;
  int aiStackY_1004 [1014];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CVector3i *local_10;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar7 = input_ptr->z;
  iVar1 = input_ptr->x;
  iVar2 = input_ptr->y;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar4 == 0) {
    lVar4 = (longlong)iVar2 * (longlong)(this_ptr->inverted_matrix).m[1].x +
            (longlong)iVar1 * (longlong)(this_ptr->inverted_matrix).m[0].x +
            (longlong)iVar7 * (longlong)(this_ptr->inverted_matrix).m[2].x;
    local_1c = (this_ptr->camera_origin).x +
               ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    lVar4 = (longlong)iVar2 * (longlong)(this_ptr->inverted_matrix).m[1].y +
            (longlong)iVar1 * (longlong)(this_ptr->inverted_matrix).m[0].y +
            (longlong)iVar7 * (longlong)(this_ptr->inverted_matrix).m[2].y;
    local_18 = (this_ptr->camera_origin).y +
               ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    lVar4 = (longlong)iVar2 * (longlong)(this_ptr->inverted_matrix).m[1].z +
            (longlong)iVar1 * (longlong)(this_ptr->inverted_matrix).m[0].z +
            (longlong)iVar7 * (longlong)(this_ptr->inverted_matrix).m[2].z;
    uVar5 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    iVar7 = (this_ptr->camera_origin).z;
  }
  else {
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[9][iVar4] * (longlong)iVar1;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xc][iVar4] * (longlong)iVar2;
    lVar3 = (longlong)this_ptr->alpha_transform_matrices[0xf][iVar4] * (longlong)iVar7;
    local_1c = this_ptr->alpha_translations[iVar4].x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar4 = (longlong)this_ptr->alpha_transform_matrices[10][iVar4] * (longlong)iVar1;
    lVar5 = (longlong)this_ptr->alpha_transform_matrices[0xd][iVar4] * (longlong)iVar2;
    lVar6 = (longlong)this_ptr->alpha_transform_matrices[0x10][iVar4] * (longlong)iVar7;
    local_18 = this_ptr->alpha_translations[iVar4].y +
               ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
               ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
               ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    lVar4 = (longlong)this_ptr->alpha_transform_matrices[0xb][iVar4] * (longlong)iVar1;
    lVar5 = (longlong)this_ptr->alpha_transform_matrices[0xe][iVar4] * (longlong)iVar2;
    lVar6 = (longlong)this_ptr->alpha_transform_matrices[0x11][iVar4] * (longlong)iVar7;
    iVar7 = this_ptr->alpha_translations[iVar4].z;
    uVar5 = ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  }
  output_ptr->x = local_1c;
  output_ptr->y = local_18;
  output_ptr->z = iVar7 + uVar5;
  return output_ptr;
}
