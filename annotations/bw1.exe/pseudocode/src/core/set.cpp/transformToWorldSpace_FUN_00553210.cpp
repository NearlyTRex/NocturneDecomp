// Name: core_set.cpp_transformToWorldSpace_FUN_00553210
// Address: 00553210
// Address Range: [[00553210, 005532d9]]
// Convention: unknown
// Signature: void core_set_cpp_transformToWorldSpace_FUN_00553210(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_transformToWorldSpace_FUN_00553210(int *param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  iVar1 = _DAT_01c51d3c +
          ((uint)((longlong)_DAT_01d1dd34 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d1dd34 * (longlong)param_1[2]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d1dd1c * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d1dd1c * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d1dd28 * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d1dd28 * (longlong)param_1[1]) >> 0x20) << 0x10);
  iVar2 = _DAT_01c51d40 +
          ((uint)((longlong)_DAT_01d1dd38 * (longlong)param_1[2]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d1dd38 * (longlong)param_1[2]) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d1dd20 * (longlong)*param_1) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d1dd20 * (longlong)*param_1) >> 0x20) << 0x10) +
          ((uint)((longlong)_DAT_01d1dd2c * (longlong)param_1[1]) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01d1dd2c * (longlong)param_1[1]) >> 0x20) << 0x10);
  *unaff_ESI = _DAT_01c51d38 +
               ((uint)((longlong)_DAT_01d1dd30 * (longlong)param_1[2]) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d1dd30 * (longlong)param_1[2]) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d1dd18 * (longlong)*param_1) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d1dd18 * (longlong)*param_1) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01d1dd24 * (longlong)param_1[1]) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01d1dd24 * (longlong)param_1[1]) >> 0x20) << 0x10);
  unaff_ESI[1] = iVar1;
  unaff_ESI[2] = iVar2;
  return;
}
