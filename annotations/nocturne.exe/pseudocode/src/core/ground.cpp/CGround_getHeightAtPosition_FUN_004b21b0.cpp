// Name: core_ground.cpp_CGround_getHeightAtPosition_FUN_004b21b0
// Address: 004b21b0
// Address Range: [[004b21b0, 004b242f]]
// Convention: __cdecl
// Signature: int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004b21b0(int *param_1,uint param_2,uint param_3)

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004b21b0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  uVar4 = (ulonglong)(int)(param_1[7] * 0x100 - 1U & param_3);
  iVar7 = (int)((longlong)
                (((uVar4 & 0xffffffffffff) >> 0x10) << 0x20 | uVar4 * 0x10000 & 0xffffffff) /
               (longlong)(param_1[7] * 0x100));
  uVar4 = (ulonglong)(int)(param_1[7] * 0x100 - 1U & param_2);
  iVar8 = (int)((longlong)
                (((uVar4 & 0xffffffffffff) >> 0x10) << 0x20 | uVar4 * 0x10000 & 0xffffffff) /
               (longlong)(param_1[7] * 0x100));
  uVar12 = param_1[2] & param_3 / (uint)(param_1[7] << 8);
  uVar9 = param_2 / (uint)(param_1[7] << 8) & param_1[3];
  uVar1 = uVar9 + 1;
  uVar2 = uVar12 + 1;
  if ((uVar12 & 1) != (uVar9 & 1)) {
    iVar7 = 0x10000 - iVar7;
    if (iVar8 < iVar7) {
      iVar3 = param_1[9];
      iVar10 = (int)*(short *)((uVar12 + *param_1 * uVar9) * 4 + iVar3) * param_1[8];
      iVar13 = param_1[8] * (int)*(short *)(((uVar2 & param_1[2]) + *param_1 * uVar9) * 4 + iVar3);
      lVar5 = (longlong)iVar7 * (longlong)(iVar10 - iVar13);
      lVar6 = (longlong)iVar8 *
              (longlong)
              (param_1[8] * (int)*(short *)((uVar12 + (uVar1 & param_1[3]) * *param_1) * 4 + iVar3)
              - iVar10);
      return ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
             iVar13 + ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    }
    iVar3 = param_1[9];
    iVar10 = param_1[8] * (int)*(short *)((uVar9 * *param_1 + (param_1[2] & uVar2)) * 4 + iVar3);
    iVar13 = *param_1 * (uVar1 & param_1[3]);
    iVar11 = param_1[8] * (int)*(short *)(iVar3 + (iVar13 + (param_1[2] & uVar2)) * 4);
    lVar5 = (longlong)iVar7 *
            (longlong)((int)*(short *)(iVar3 + (uVar12 + iVar13) * 4) * param_1[8] - iVar11);
    lVar6 = (longlong)iVar8 * (longlong)(iVar11 - iVar10);
    return ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
           iVar10 + ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  }
  if (iVar8 < iVar7) {
    iVar3 = param_1[9];
    iVar10 = param_1[8] * (int)*(short *)(iVar3 + (uVar12 + *param_1 * uVar9) * 4);
    iVar13 = (int)*(short *)(iVar3 + ((param_1[2] & uVar2) + *param_1 * uVar9) * 4) * param_1[8];
    lVar5 = (longlong)iVar7 * (longlong)(iVar13 - iVar10);
    lVar6 = (longlong)iVar8 *
            (longlong)
            (param_1[8] *
             (int)*(short *)(iVar3 + ((uVar2 & param_1[3]) + (uVar1 & param_1[3]) * *param_1) * 4) -
            iVar13);
    return ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
           iVar10 + ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  }
  iVar3 = param_1[9];
  iVar11 = (int)*(short *)((uVar9 * *param_1 + uVar12) * 4 + iVar3) * param_1[8];
  iVar10 = (uVar1 & param_1[3]) * *param_1;
  iVar13 = param_1[8] * (int)*(short *)((uVar12 + iVar10) * 4 + iVar3);
  lVar5 = (longlong)iVar7 *
          (longlong)
          ((int)*(short *)(((uVar2 & param_1[2]) + iVar10) * 4 + iVar3) * param_1[8] - iVar13);
  lVar6 = (longlong)iVar8 * (longlong)(iVar13 - iVar11);
  return ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
         iVar11 + ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
}
