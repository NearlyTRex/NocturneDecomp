// Name: core_set.cpp_transformToWorldSpace_FUN_00531f60
// Address: 00531f60
// Address Range: [[00531f60, 00532029]]
// Convention: unknown
// Signature: void core_set_cpp_transformToWorldSpace_FUN_00531f60(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_transformToWorldSpace_FUN_00531f60(int *param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  iVar1 = _DAT_01c38b7c +
          ((uint)((longlong)_DAT_01d04fd4 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d04fd4 * (longlong)param_1[2]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d04fbc * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d04fbc * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d04fc8 * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d04fc8 * (longlong)param_1[1]) >> 0x20) << 0x10);
  iVar2 = _DAT_01c38b80 +
          ((uint)((longlong)_DAT_01d04fd8 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d04fd8 * (longlong)param_1[2]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d04fc0 * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d04fc0 * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d04fcc * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d04fcc * (longlong)param_1[1]) >> 0x20) << 0x10);
  *unaff_ESI = _DAT_01c38b78 +
               ((uint)((longlong)_DAT_01d04fd0 * (longlong)param_1[2]) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d04fd0 * (longlong)param_1[2]) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d04fb8 * (longlong)*param_1) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d04fb8 * (longlong)*param_1) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d04fc4 * (longlong)param_1[1]) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d04fc4 * (longlong)param_1[1]) >> 0x20) << 0x10);
  unaff_ESI[1] = iVar1;
  unaff_ESI[2] = iVar2;
  return;
}
