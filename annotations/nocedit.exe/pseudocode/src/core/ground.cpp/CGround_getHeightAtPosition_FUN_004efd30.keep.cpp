// Name: core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30
// Address: 004efd30
// MANUAL RECONSTRUCTION
// Address Range: [[004efd30, 004effaf]]
// Convention: __cdecl
// Signature: int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround *this_ptr,int world_x,int world_z)

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround *this_ptr,int world_x,int world_z)

{
  uint uVar1;
  uint uVar2;
  SGroundCell *pSVar3;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar11;
  int iVar12;
  uint uVar4;
  int iVar13;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar14;
  uint uVar12;
  int iVar15;
  SGroundCell *pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar5 = this_ptr->vertical_scale * 0x100;
  uVar5 = (ulonglong)(int)(iVar5 - 1U & world_z);
  iVar11 = (int)((longlong)
                 (((uVar5 & 0xffffffffffff) >> 0x10) << 0x20 | uVar5 * 0x10000 & 0xffffffff) /
                (longlong)iVar5);
  iVar6 = this_ptr->vertical_scale * 0x100;
  uVar5 = (ulonglong)(int)(iVar6 - 1U & world_x);
  iVar12 = (int)((longlong)
                 (((uVar5 & 0xffffffffffff) >> 0x10) << 0x20 | uVar5 * 0x10000 & 0xffffffff) /
                (longlong)iVar6);
  uVar7 = this_ptr->vertical_scale << 8;
  uVar12 = this_ptr->width_minus_1 & (uint)world_z / uVar7;
  uVar4 = (uint)world_x / uVar7 & this_ptr->height_minus_1;
  uVar1 = uVar4 + 1;
  uVar2 = uVar12 + 1;
  if ((uVar12 & 1) != (uVar4 & 1)) {
    iVar11 = 0x10000 - iVar11;
    if (iVar12 < iVar11) {
      iVar13 = this_ptr->width * uVar4;
      pSVar3 = this_ptr->terrain_data;
      iVar15 = (int)pSVar3[uVar12 + iVar13].height * this_ptr->height_scale;
      iVar13 = this_ptr->height_scale *
               (int)pSVar3[(uVar2 & this_ptr->width_minus_1) + iVar13].height;
      lVar6 = (longlong)iVar11 * (longlong)(iVar15 - iVar13);
      lVar7 = (longlong)iVar12 *
              (longlong)
              (this_ptr->height_scale *
               (int)pSVar3[uVar12 + (uVar1 & this_ptr->height_minus_1) * this_ptr->width].height -
              iVar15);
      return ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
             iVar13 + ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
    }
    uVar11 = this_ptr->width_minus_1 & uVar2;
    pSVar3 = this_ptr->terrain_data;
    iVar15 = this_ptr->height_scale * (int)pSVar3[uVar4 * this_ptr->width + uVar11].height;
    iVar13 = this_ptr->width * (uVar1 & this_ptr->height_minus_1);
    iVar14 = this_ptr->height_scale * (int)pSVar3[iVar13 + uVar11].height;
    lVar6 = (longlong)iVar11 *
            (longlong)((int)pSVar3[uVar12 + iVar13].height * this_ptr->height_scale - iVar14);
    lVar7 = (longlong)iVar12 * (longlong)(iVar14 - iVar15);
    return ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
           iVar15 + ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  }
  if (iVar12 < iVar11) {
    iVar8 = this_ptr->width * uVar4;
    pvVar1 = this_ptr->terrain_data;
    iVar9 = this_ptr->height_scale * (int)pvVar1[uVar12 + iVar8].height;
    iVar15 = (int)pvVar1[(this_ptr->width_minus_1 & uVar2) + iVar8].height *
             this_ptr->height_scale;
    lVar2 = (longlong)iVar11 * (longlong)(iVar15 - iVar9);
    lVar3 = (longlong)iVar12 *
            (longlong)
            (this_ptr->height_scale *
             (int)pvVar1[(uVar2 & this_ptr->height_minus_1) +
                         (uVar1 & this_ptr->height_minus_1) * this_ptr->width].height - iVar15);
    return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           iVar9 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  pSVar3 = this_ptr->terrain_data;
  iVar10 = (int)pSVar3[uVar4 * this_ptr->width + uVar12].height * this_ptr->height_scale;
  iVar15 = (uVar1 & this_ptr->height_minus_1) * this_ptr->width;
  iVar13 = this_ptr->height_scale * (int)pSVar3[uVar12 + iVar15].height;
  lVar6 = (longlong)iVar11 *
          (longlong)
          ((int)pSVar3[(uVar2 & this_ptr->width_minus_1) + iVar15].height * this_ptr->height_scale -
          iVar13);
  lVar7 = (longlong)iVar12 * (longlong)(iVar13 - iVar10);
  return ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
         iVar10 + ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
}
