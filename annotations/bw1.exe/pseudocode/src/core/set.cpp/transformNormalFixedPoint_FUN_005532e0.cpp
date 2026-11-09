// Name: core_set.cpp_transformNormalFixedPoint_FUN_005532e0
// Address: 005532e0
// Address Range: [[005532e0, 00553430]]
// Convention: unknown
// Signature: void core_set_cpp_transformNormalFixedPoint_FUN_005532e0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_transformNormalFixedPoint_FUN_005532e0(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *unaff_ESI;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = ((uint)((longlong)_DAT_01c51d5c * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c51d5c * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c51d68 * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c51d68 * (longlong)param_1[1]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c51d74 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c51d74 * (longlong)param_1[2]) >> 0x20) << 0x10);
  iVar8 = ((uint)((longlong)_DAT_01c51d60 * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c51d60 * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c51d6c * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c51d6c * (longlong)param_1[1]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c51d78 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c51d78 * (longlong)param_1[2]) >> 0x20) << 0x10);
  iVar9 = ((uint)((longlong)_DAT_01c51d64 * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c51d64 * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c51d70 * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c51d70 * (longlong)param_1[1]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c51d7c * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c51d7c * (longlong)param_1[2]) >> 0x20) << 0x10);
  lVar1 = (longlong)_DAT_01d1dd1c;
  lVar2 = (longlong)_DAT_01d1dd28;
  lVar3 = (longlong)_DAT_01d1dd34;
  lVar4 = (longlong)_DAT_01d1dd20;
  lVar5 = (longlong)_DAT_01d1dd2c;
  lVar6 = (longlong)_DAT_01d1dd38;
  *unaff_ESI = ((uint)((longlong)_DAT_01d1dd18 * (longlong)iVar7) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d1dd18 * (longlong)iVar7) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d1dd24 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d1dd24 * (longlong)iVar8) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d1dd30 * (longlong)iVar9) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d1dd30 * (longlong)iVar9) >> 0x20) << 0x10);
  unaff_ESI[1] = ((uint)(lVar1 * iVar7) >> 0x10 | (int)((ulonglong)(lVar1 * iVar7) >> 0x20) << 0x10)
                 + ((uint)(lVar2 * iVar8) >> 0x10 |
                   (int)((ulonglong)(lVar2 * iVar8) >> 0x20) << 0x10) +
                 ((uint)(lVar3 * iVar9) >> 0x10 | (int)((ulonglong)(lVar3 * iVar9) >> 0x20) << 0x10)
  ;
  unaff_ESI[2] = ((uint)(lVar4 * iVar7) >> 0x10 | (int)((ulonglong)(lVar4 * iVar7) >> 0x20) << 0x10)
                 + ((uint)(lVar5 * iVar8) >> 0x10 |
                   (int)((ulonglong)(lVar5 * iVar8) >> 0x20) << 0x10) +
                 ((uint)(lVar6 * iVar9) >> 0x10 | (int)((ulonglong)(lVar6 * iVar9) >> 0x20) << 0x10)
  ;
  return;
}
