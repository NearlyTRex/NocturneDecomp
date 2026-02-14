// Name: core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30
// Address: 004efd30
// Address Range: [[004efd30, 004effaf]]
// Convention: __cdecl
// Signature: int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround *this_ptr,int world_x,int world_z)

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround *this_ptr,int world_x,int world_z)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar5 = this_ptr->vertical_scale * 0x100;
  iVar5 = (int)(((longlong)(int)(iVar5 - 1U & world_z) * 0x10000) / (longlong)iVar5);
  iVar6 = this_ptr->vertical_scale * 0x100;
  iVar6 = (int)(((longlong)(int)(iVar6 - 1U & world_x) * 0x10000) / (longlong)iVar6);
  uVar7 = this_ptr->vertical_scale << 8;
  uVar12 = this_ptr->width_minus_1 & (uint)world_z / uVar7;
  uVar4 = (uint)world_x / uVar7 & this_ptr->height_minus_1;
  uVar7 = uVar4 + 1;
  uVar11 = uVar12 + 1;
  if ((uVar12 & 1) != (uVar4 & 1)) {
    iVar5 = 0x10000 - iVar5;
    if (iVar6 < iVar5) {
      iVar9 = this_ptr->width * uVar4;
      pvVar1 = this_ptr->terrain_data;
      iVar8 = (int)*(short *)((uVar12 + iVar9) * 4 + (int)pvVar1) * this_ptr->height_scale;
      iVar9 = this_ptr->height_scale *
              (int)*(short *)(((uVar11 & this_ptr->width_minus_1) + iVar9) * 4 + (int)pvVar1);
      lVar2 = (longlong)iVar5 * (longlong)(iVar8 - iVar9);
      lVar3 = (longlong)iVar6 *
              (longlong)
              (this_ptr->height_scale *
               (int)*(short *)((uVar12 + (uVar7 & this_ptr->height_minus_1) * this_ptr->width) * 4 +
                              (int)pvVar1) - iVar8);
      return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
             iVar9 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    uVar11 = this_ptr->width_minus_1 & uVar11;
    pvVar1 = this_ptr->terrain_data;
    iVar8 = this_ptr->height_scale *
            (int)*(short *)((uVar4 * this_ptr->width + uVar11) * 4 + (int)pvVar1);
    iVar9 = this_ptr->width * (uVar7 & this_ptr->height_minus_1);
    iVar10 = this_ptr->height_scale * (int)*(short *)((int)pvVar1 + (iVar9 + uVar11) * 4);
    lVar2 = (longlong)iVar5 *
            (longlong)
            ((int)*(short *)((int)pvVar1 + (uVar12 + iVar9) * 4) * this_ptr->height_scale - iVar10);
    lVar3 = (longlong)iVar6 * (longlong)(iVar10 - iVar8);
    return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           iVar8 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  if (iVar6 < iVar5) {
    iVar8 = this_ptr->width * uVar4;
    pvVar1 = this_ptr->terrain_data;
    iVar9 = this_ptr->height_scale * (int)*(short *)((int)pvVar1 + (uVar12 + iVar8) * 4);
    iVar8 = (int)*(short *)((int)pvVar1 + ((this_ptr->width_minus_1 & uVar11) + iVar8) * 4) *
            this_ptr->height_scale;
    lVar2 = (longlong)iVar5 * (longlong)(iVar8 - iVar9);
    lVar3 = (longlong)iVar6 *
            (longlong)
            (this_ptr->height_scale *
             (int)*(short *)((int)pvVar1 +
                            ((uVar11 & this_ptr->height_minus_1) +
                            (uVar7 & this_ptr->height_minus_1) * this_ptr->width) * 4) - iVar8);
    return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           iVar9 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  pvVar1 = this_ptr->terrain_data;
  iVar10 = (int)*(short *)((uVar4 * this_ptr->width + uVar12) * 4 + (int)pvVar1) *
           this_ptr->height_scale;
  iVar8 = (uVar7 & this_ptr->height_minus_1) * this_ptr->width;
  iVar9 = this_ptr->height_scale * (int)*(short *)((uVar12 + iVar8) * 4 + (int)pvVar1);
  lVar2 = (longlong)iVar5 *
          (longlong)
          ((int)*(short *)(((uVar11 & this_ptr->width_minus_1) + iVar8) * 4 + (int)pvVar1) *
           this_ptr->height_scale - iVar9);
  lVar3 = (longlong)iVar6 * (longlong)(iVar9 - iVar10);
  return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
         iVar10 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
}
