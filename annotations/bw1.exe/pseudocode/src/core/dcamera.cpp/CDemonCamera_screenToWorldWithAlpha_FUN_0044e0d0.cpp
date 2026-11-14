// Name: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044e0d0
// Address: 0044e0d0
// Address Range: [[0044e0d0, 0044e296]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044e0d0(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044e0d0(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  byte bVar7;
  int aiStackY_1004 [1014];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  CVector3i *pCStack_10;
  
  bVar7 = 0;
  iStack_20 = input_ptr->z;
  iStack_28 = input_ptr->x;
  iStack_24 = input_ptr->y;
  pCStack_10 = output_ptr;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(DAT_00612560);
  if (iVar4 == 0) {
    lVar1 = (longlong)iStack_24 * (longlong)(this_ptr->inverted_matrix).m[1].x +
            (longlong)iStack_28 * (longlong)(this_ptr->inverted_matrix).m[0].x +
            (longlong)iStack_20 * (longlong)(this_ptr->inverted_matrix).m[2].x;
    iStack_1c = (this_ptr->camera_origin).x +
                ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iStack_24 * (longlong)(this_ptr->inverted_matrix).m[1].y +
            (longlong)iStack_28 * (longlong)(this_ptr->inverted_matrix).m[0].y +
            (longlong)iStack_20 * (longlong)(this_ptr->inverted_matrix).m[2].y;
    iStack_18 = (this_ptr->camera_origin).y +
                ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iStack_24 * (longlong)(this_ptr->inverted_matrix).m[1].z +
            (longlong)iStack_28 * (longlong)(this_ptr->inverted_matrix).m[0].z +
            (longlong)iStack_20 * (longlong)(this_ptr->inverted_matrix).m[2].z;
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar4 = (this_ptr->camera_origin).z;
  }
  else {
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[9][iVar4] * (longlong)iStack_28;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xc][iVar4] * (longlong)iStack_24;
    lVar3 = (longlong)this_ptr->alpha_transform_matrices[0xf][iVar4] * (longlong)iStack_20;
    iStack_1c = this_ptr->alpha_translations[iVar4].x +
                ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[10][iVar4] * (longlong)iStack_28;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xd][iVar4] * (longlong)iStack_24;
    lVar3 = (longlong)this_ptr->alpha_transform_matrices[0x10][iVar4] * (longlong)iStack_20;
    iStack_18 = this_ptr->alpha_translations[iVar4].y +
                ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[0xb][iVar4] * (longlong)iStack_28;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xe][iVar4] * (longlong)iStack_24;
    lVar3 = (longlong)this_ptr->alpha_transform_matrices[0x11][iVar4] * (longlong)iStack_20;
    iVar4 = this_ptr->alpha_translations[iVar4].z;
    uVar5 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  iStack_14 = iVar4 + uVar5;
  puVar6 = (uint *)((int)pCStack_10 + (uint)bVar7 * -8 + 4);
  pCStack_10->x = iStack_1c;
  *puVar6 = *(uint *)((int)&stack0xffffffe8 + (uint)bVar7 * -8);
  puVar6[(uint)bVar7 * -2 + 1] =
       *(uint *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  return pCStack_10;
}
