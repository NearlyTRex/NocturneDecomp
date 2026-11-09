// Name: core_set.cpp_transformToWorldSpace_FUN_00538ba0
// Address: 00538ba0
// Address Range: [[00538ba0, 00538c69]]
// Convention: unknown
// Signature: void core_set_cpp_transformToWorldSpace_FUN_00538ba0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_transformToWorldSpace_FUN_00538ba0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  iVar1 = _DAT_01c6e2dc +
          ((uint)((longlong)_DAT_01d72660 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d72660 * (longlong)param_1[2]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d72648 * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d72648 * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d72654 * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d72654 * (longlong)param_1[1]) >> 0x20) << 0x10);
  iVar2 = _DAT_01c6e2e0 +
          ((uint)((longlong)_DAT_01d72664 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d72664 * (longlong)param_1[2]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d7264c * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d7264c * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d72658 * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d72658 * (longlong)param_1[1]) >> 0x20) << 0x10);
  *unaff_ESI = _DAT_01c6e2d8 +
               ((uint)((longlong)_DAT_01d7265c * (longlong)param_1[2]) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d7265c * (longlong)param_1[2]) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d72644 * (longlong)*param_1) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d72644 * (longlong)*param_1) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d72650 * (longlong)param_1[1]) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d72650 * (longlong)param_1[1]) >> 0x20) << 0x10);
  unaff_ESI[1] = iVar1;
  unaff_ESI[2] = iVar2;
  return;
}
