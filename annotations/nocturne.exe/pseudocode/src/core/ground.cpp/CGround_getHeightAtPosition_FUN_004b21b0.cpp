// Name: core_ground.cpp_CGround_getHeightAtPosition_FUN_004b21b0
// Address: 004b21b0
// Address Range: [[004b21b0, 004b242f]]
// Convention: __cdecl
// Signature: int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004b21b0(CGround *this_ptr,int world_x,int world_z)

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004b21b0(CGround *this_ptr,int world_x,int world_z)

{
  SGroundCell *pSVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  iVar6 = this_ptr->vertical_scale * 0x100;
  uVar2 = (ulonglong)(int)(iVar6 - 1U & world_z);
  iVar6 = (int)((longlong)
                (((uVar2 & 0xffffffffffff) >> 0x10) << 0x20 | uVar2 * 0x10000 & 0xffffffff) /
               (longlong)iVar6);
  iVar7 = this_ptr->vertical_scale * 0x100;
  uVar2 = (ulonglong)(int)(iVar7 - 1U & world_x);
  iVar7 = (int)((longlong)
                (((uVar2 & 0xffffffffffff) >> 0x10) << 0x20 | uVar2 * 0x10000 & 0xffffffff) /
               (longlong)iVar7);
  uVar8 = this_ptr->vertical_scale << 8;
  uVar13 = this_ptr->width_minus_1 & (uint)world_z / uVar8;
  uVar5 = (uint)world_x / uVar8 & this_ptr->height_minus_1;
  uVar8 = uVar5 + 1;
  uVar12 = uVar13 + 1;
  if ((uVar13 & 1) != (uVar5 & 1)) {
    iVar6 = 0x10000 - iVar6;
    if (iVar7 < iVar6) {
      iVar10 = this_ptr->width * uVar5;
      pSVar1 = this_ptr->terrain_data;
      iVar9 = (int)pSVar1[uVar13 + iVar10].height * this_ptr->height_scale;
      iVar10 = this_ptr->height_scale *
               (int)pSVar1[(uVar12 & this_ptr->width_minus_1) + iVar10].height;
      lVar3 = (longlong)iVar6 * (longlong)(iVar9 - iVar10);
      lVar4 = (longlong)iVar7 *
              (longlong)
              (this_ptr->height_scale *
               (int)pSVar1[uVar13 + (uVar8 & this_ptr->height_minus_1) * this_ptr->width].height -
              iVar9);
      return ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
             iVar10 + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    }
    uVar12 = this_ptr->width_minus_1 & uVar12;
    pSVar1 = this_ptr->terrain_data;
    iVar9 = this_ptr->height_scale * (int)pSVar1[uVar5 * this_ptr->width + uVar12].height;
    iVar10 = this_ptr->width * (uVar8 & this_ptr->height_minus_1);
    iVar11 = this_ptr->height_scale * (int)pSVar1[iVar10 + uVar12].height;
    lVar3 = (longlong)iVar6 *
            (longlong)((int)pSVar1[uVar13 + iVar10].height * this_ptr->height_scale - iVar11);
    lVar4 = (longlong)iVar7 * (longlong)(iVar11 - iVar9);
    return ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           iVar9 + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  }
  if (iVar7 < iVar6) {
    iVar9 = this_ptr->width * uVar5;
    pSVar1 = this_ptr->terrain_data;
    iVar10 = this_ptr->height_scale * (int)pSVar1[uVar13 + iVar9].height;
    iVar9 = (int)pSVar1[(this_ptr->width_minus_1 & uVar12) + iVar9].height * this_ptr->height_scale;
    lVar3 = (longlong)iVar6 * (longlong)(iVar9 - iVar10);
    lVar4 = (longlong)iVar7 *
            (longlong)
            (this_ptr->height_scale *
             (int)pSVar1[(uVar12 & this_ptr->height_minus_1) +
                         (uVar8 & this_ptr->height_minus_1) * this_ptr->width].height - iVar9);
    return ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           iVar10 + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  }
  pSVar1 = this_ptr->terrain_data;
  iVar11 = (int)pSVar1[uVar5 * this_ptr->width + uVar13].height * this_ptr->height_scale;
  iVar9 = (uVar8 & this_ptr->height_minus_1) * this_ptr->width;
  iVar10 = this_ptr->height_scale * (int)pSVar1[uVar13 + iVar9].height;
  lVar3 = (longlong)iVar6 *
          (longlong)
          ((int)pSVar1[(uVar12 & this_ptr->width_minus_1) + iVar9].height * this_ptr->height_scale -
          iVar10);
  lVar4 = (longlong)iVar7 * (longlong)(iVar10 - iVar11);
  return ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
         iVar11 + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
}
