// Name: core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30
// Address: 004efd30
// Address Range: [[004efd30, 004effaf]]
// Convention: __cdecl
// Signature: int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround *this_ptr,int world_x,int world_z)

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround *this_ptr,int world_x,int world_z)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar7;
  int iVar11;
  uint uVar4;
  int iVar12;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar13;
  uint uVar12;
  int iVar14;
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar5 = this_ptr->vertical_scale * 0x100;
  iVar7 = (int)(((longlong)(int)(iVar5 - 1U & world_z) * 0x10000) / (longlong)iVar5);
  iVar6 = this_ptr->vertical_scale * 0x100;
  iVar11 = (int)(((longlong)(int)(iVar6 - 1U & world_x) * 0x10000) / (longlong)iVar6);
  uVar7 = this_ptr->vertical_scale << 8;
  uVar12 = this_ptr->width_minus_1 & (uint)world_z / uVar7;
  uVar4 = (uint)world_x / uVar7 & this_ptr->height_minus_1;
  uVar1 = uVar4 + 1;
  uVar2 = uVar12 + 1;
  if ((uVar12 & 1) != (uVar4 & 1)) {
    iVar7 = 0x10000 - iVar7;
    if (iVar11 < iVar7) {
      iVar12 = this_ptr->width * uVar4;
      pvVar3 = this_ptr->terrain_data;
      iVar14 = (int)*(short *)((uVar12 + iVar12) * 4 + (int)pvVar3) * this_ptr->height_scale;
      iVar12 = this_ptr->height_scale *
               (int)*(short *)(((uVar2 & this_ptr->width_minus_1) + iVar12) * 4 + (int)pvVar3);
      lVar4 = (longlong)iVar7 * (longlong)(iVar14 - iVar12);
      lVar5 = (longlong)iVar11 *
              (longlong)
              (this_ptr->height_scale *
               (int)*(short *)((uVar12 + (uVar1 & this_ptr->height_minus_1) * this_ptr->width) * 4 +
                              (int)pvVar3) - iVar14);
      return ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
             iVar12 + ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    }
    uVar11 = this_ptr->width_minus_1 & uVar2;
    pvVar3 = this_ptr->terrain_data;
    iVar14 = this_ptr->height_scale *
             (int)*(short *)((uVar4 * this_ptr->width + uVar11) * 4 + (int)pvVar3);
    iVar12 = this_ptr->width * (uVar1 & this_ptr->height_minus_1);
    iVar13 = this_ptr->height_scale * (int)*(short *)((int)pvVar3 + (iVar12 + uVar11) * 4);
    lVar4 = (longlong)iVar7 *
            (longlong)
            ((int)*(short *)((int)pvVar3 + (uVar12 + iVar12) * 4) * this_ptr->height_scale - iVar13)
    ;
    lVar5 = (longlong)iVar11 * (longlong)(iVar13 - iVar14);
    return ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
           iVar14 + ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  }
  if (iVar11 < iVar7) {
    iVar8 = this_ptr->width * uVar4;
    pvVar1 = this_ptr->terrain_data;
    iVar9 = this_ptr->height_scale * (int)*(short *)((int)pvVar1 + (uVar12 + iVar8) * 4);
    iVar14 = (int)*(short *)((int)pvVar1 + ((this_ptr->width_minus_1 & uVar2) + iVar8) * 4) *
             this_ptr->height_scale;
    lVar2 = (longlong)iVar7 * (longlong)(iVar14 - iVar9);
    lVar3 = (longlong)iVar11 *
            (longlong)
            (this_ptr->height_scale *
             (int)*(short *)((int)pvVar1 +
                            ((uVar2 & this_ptr->height_minus_1) +
                            (uVar1 & this_ptr->height_minus_1) * this_ptr->width) * 4) - iVar14);
    return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           iVar9 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  pvVar3 = this_ptr->terrain_data;
  iVar10 = (int)*(short *)((uVar4 * this_ptr->width + uVar12) * 4 + (int)pvVar3) *
           this_ptr->height_scale;
  iVar14 = (uVar1 & this_ptr->height_minus_1) * this_ptr->width;
  iVar12 = this_ptr->height_scale * (int)*(short *)((uVar12 + iVar14) * 4 + (int)pvVar3);
  lVar4 = (longlong)iVar7 *
          (longlong)
          ((int)*(short *)(((uVar2 & this_ptr->width_minus_1) + iVar14) * 4 + (int)pvVar3) *
           this_ptr->height_scale - iVar12);
  lVar5 = (longlong)iVar11 * (longlong)(iVar12 - iVar10);
  return ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
         iVar10 + ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
}
