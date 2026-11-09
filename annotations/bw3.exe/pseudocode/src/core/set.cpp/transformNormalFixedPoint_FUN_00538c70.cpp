// Name: core_set.cpp_transformNormalFixedPoint_FUN_00538c70
// Address: 00538c70
// Address Range: [[00538c70, 00538dc0]]
// Convention: unknown
// Signature: void core_set_cpp_transformNormalFixedPoint_FUN_00538c70(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_transformNormalFixedPoint_FUN_00538c70(int *param_1)

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
  
  iVar7 = ((uint)((longlong)_DAT_01c6e2fc * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c6e2fc * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c6e308 * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c6e308 * (longlong)param_1[1]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c6e314 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c6e314 * (longlong)param_1[2]) >> 0x20) << 0x10);
  iVar8 = ((uint)((longlong)_DAT_01c6e300 * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c6e300 * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c6e30c * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c6e30c * (longlong)param_1[1]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c6e318 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c6e318 * (longlong)param_1[2]) >> 0x20) << 0x10);
  iVar9 = ((uint)((longlong)_DAT_01c6e304 * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c6e304 * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c6e310 * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c6e310 * (longlong)param_1[1]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01c6e31c * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c6e31c * (longlong)param_1[2]) >> 0x20) << 0x10);
  lVar1 = (longlong)_DAT_01d72648;
  lVar2 = (longlong)_DAT_01d72654;
  lVar3 = (longlong)_DAT_01d72660;
  lVar4 = (longlong)_DAT_01d7264c;
  lVar5 = (longlong)_DAT_01d72658;
  lVar6 = (longlong)_DAT_01d72664;
  *unaff_ESI = ((uint)((longlong)_DAT_01d72644 * (longlong)iVar7) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d72644 * (longlong)iVar7) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d72650 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d72650 * (longlong)iVar8) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d7265c * (longlong)iVar9) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d7265c * (longlong)iVar9) >> 0x20) << 0x10);
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
