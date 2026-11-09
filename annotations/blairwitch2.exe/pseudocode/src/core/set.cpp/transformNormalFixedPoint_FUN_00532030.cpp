// Name: core_set.cpp_transformNormalFixedPoint_FUN_00532030
// Address: 00532030
// Address Range: [[00532030, 00532180]]
// Convention: unknown
// Signature: void core_set_cpp_transformNormalFixedPoint_FUN_00532030(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_transformNormalFixedPoint_FUN_00532030(int *param_1)

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
  
  iVar7 = ((uint)((longlong)_DAT_01c38b9c * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c38b9c * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c38ba8 * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c38ba8 * (longlong)param_1[1]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c38bb4 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c38bb4 * (longlong)param_1[2]) >> 0x20) << 0x10);
  iVar8 = ((uint)((longlong)_DAT_01c38ba0 * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c38ba0 * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c38bac * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c38bac * (longlong)param_1[1]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c38bb8 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c38bb8 * (longlong)param_1[2]) >> 0x20) << 0x10);
  iVar9 = ((uint)((longlong)_DAT_01c38ba4 * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c38ba4 * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c38bb0 * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c38bb0 * (longlong)param_1[1]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c38bbc * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c38bbc * (longlong)param_1[2]) >> 0x20) << 0x10);
  lVar1 = (longlong)_DAT_01d04fbc;
  lVar2 = (longlong)_DAT_01d04fc8;
  lVar3 = (longlong)_DAT_01d04fd4;
  lVar4 = (longlong)_DAT_01d04fc0;
  lVar5 = (longlong)_DAT_01d04fcc;
  lVar6 = (longlong)_DAT_01d04fd8;
  *unaff_ESI = ((uint)((longlong)_DAT_01d04fb8 * (longlong)iVar7) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d04fb8 * (longlong)iVar7) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d04fc4 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d04fc4 * (longlong)iVar8) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d04fd0 * (longlong)iVar9) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d04fd0 * (longlong)iVar9) >> 0x20) << 0x10);
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
