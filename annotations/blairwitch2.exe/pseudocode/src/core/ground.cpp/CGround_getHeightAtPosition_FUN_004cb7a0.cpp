// Name: core_ground.cpp_CGround_getHeightAtPosition_FUN_004cb7a0
// Address: 004cb7a0
// Address Range: [[004cb7a0, 004cba1f]]
// Convention: __cdecl
// Signature: int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004cb7a0(CGround *this_ptr,int world_x,int world_z)

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004cb7a0(CGround *this_ptr,int world_x,int world_z)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  iVar6 = *(int *)&this_ptr->field_0x1c * 0x100;
  uVar2 = (ulonglong)(int)(iVar6 - 1U & world_z);
  iVar6 = (int)((longlong)
                (((uVar2 & 0xffffffffffff) >> 0x10) << 0x20 | uVar2 * 0x10000 & 0xffffffff) /
               (longlong)iVar6);
  iVar7 = *(int *)&this_ptr->field_0x1c * 0x100;
  uVar2 = (ulonglong)(int)(iVar7 - 1U & world_x);
  iVar7 = (int)((longlong)
                (((uVar2 & 0xffffffffffff) >> 0x10) << 0x20 | uVar2 * 0x10000 & 0xffffffff) /
               (longlong)iVar7);
  uVar8 = *(int *)&this_ptr->field_0x1c << 8;
  uVar12 = *(uint *)&this_ptr->field_0x8 & (uint)world_z / uVar8;
  uVar5 = (uint)world_x / uVar8 & *(uint *)&this_ptr->field_0xc;
  uVar8 = uVar5 + 1;
  uVar11 = uVar12 + 1;
  if ((uVar12 & 1) != (uVar5 & 1)) {
    iVar6 = 0x10000 - iVar6;
    if (iVar7 < iVar6) {
      iVar1 = *(int *)&this_ptr->field_0x24;
      iVar9 = (int)*(short *)((uVar12 + *(int *)this_ptr * uVar5) * 4 + iVar1) *
              *(int *)&this_ptr->field_0x20;
      iVar13 = *(int *)&this_ptr->field_0x20 *
               (int)*(short *)(((uVar11 & *(uint *)&this_ptr->field_0x8) + *(int *)this_ptr * uVar5)
                               * 4 + iVar1);
      lVar3 = (longlong)iVar6 * (longlong)(iVar9 - iVar13);
      lVar4 = (longlong)iVar7 *
              (longlong)
              (*(int *)&this_ptr->field_0x20 *
               (int)*(short *)((uVar12 + (uVar8 & *(uint *)&this_ptr->field_0xc) * *(int *)this_ptr)
                               * 4 + iVar1) - iVar9);
      return ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
             iVar13 + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    }
    uVar11 = *(uint *)&this_ptr->field_0x8 & uVar11;
    iVar1 = *(int *)&this_ptr->field_0x24;
    iVar9 = *(int *)&this_ptr->field_0x20 *
            (int)*(short *)((uVar5 * *(int *)this_ptr + uVar11) * 4 + iVar1);
    iVar13 = *(int *)this_ptr * (uVar8 & *(uint *)&this_ptr->field_0xc);
    iVar10 = *(int *)&this_ptr->field_0x20 * (int)*(short *)(iVar1 + (iVar13 + uVar11) * 4);
    lVar3 = (longlong)iVar6 *
            (longlong)
            ((int)*(short *)(iVar1 + (uVar12 + iVar13) * 4) * *(int *)&this_ptr->field_0x20 - iVar10
            );
    lVar4 = (longlong)iVar7 * (longlong)(iVar10 - iVar9);
    return ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           iVar9 + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  }
  if (iVar7 < iVar6) {
    iVar1 = *(int *)&this_ptr->field_0x24;
    iVar9 = *(int *)&this_ptr->field_0x20 *
            (int)*(short *)(iVar1 + (uVar12 + *(int *)this_ptr * uVar5) * 4);
    iVar13 = (int)*(short *)(iVar1 + ((*(uint *)&this_ptr->field_0x8 & uVar11) +
                                     *(int *)this_ptr * uVar5) * 4) * *(int *)&this_ptr->field_0x20;
    lVar3 = (longlong)iVar6 * (longlong)(iVar13 - iVar9);
    lVar4 = (longlong)iVar7 *
            (longlong)
            (*(int *)&this_ptr->field_0x20 *
             (int)*(short *)(iVar1 + ((uVar11 & *(uint *)&this_ptr->field_0xc) +
                                     (uVar8 & *(uint *)&this_ptr->field_0xc) * *(int *)this_ptr) * 4
                            ) - iVar13);
    return ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           iVar9 + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  }
  iVar1 = *(int *)&this_ptr->field_0x24;
  iVar10 = (int)*(short *)((uVar5 * *(int *)this_ptr + uVar12) * 4 + iVar1) *
           *(int *)&this_ptr->field_0x20;
  iVar9 = (uVar8 & *(uint *)&this_ptr->field_0xc) * *(int *)this_ptr;
  iVar13 = *(int *)&this_ptr->field_0x20 * (int)*(short *)((uVar12 + iVar9) * 4 + iVar1);
  lVar3 = (longlong)iVar6 *
          (longlong)
          ((int)*(short *)(((uVar11 & *(uint *)&this_ptr->field_0x8) + iVar9) * 4 + iVar1) *
           *(int *)&this_ptr->field_0x20 - iVar13);
  lVar4 = (longlong)iVar7 * (longlong)(iVar13 - iVar10);
  return ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
         iVar10 + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
}
