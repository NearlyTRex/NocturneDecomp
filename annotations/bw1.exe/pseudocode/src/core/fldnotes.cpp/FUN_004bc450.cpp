// Name: core_fldnotes.cpp_FUN_004bc450
// Address: 004bc450
// Address Range: [[004bc450, 004bc531]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bc450(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004bc450(int *param_1)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  int local_14;
  int local_10;
  int local_c;
  
  if (((*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != 0) && (*param_1 != 0)) &&
     (*(int *)(*param_1 + 0x140) == 6)) {
    iVar1 = core_fldnotes_cpp_FUN_004bc6f0
                      (param_1,*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20,&local_10,&local_14);
    if (-1 < iVar1) {
      dVar3 = floor
                        ((double)((float)param_1[iVar1 * 0x22 + 0x49] * (float)_DAT_005dfc62));
      fVar2 = (float10)dVar3 + (float10)_DAT_005dfc6a;
      round();
      local_c = (int)ROUND(fVar2);
      if (local_c < 1) {
        local_c = 1;
      }
      core_fldnotes_cpp_FUN_004bc5a0
                (param_1,(local_10 * param_1[0x25]) / param_1[0x1a],
                 (local_14 * param_1[0x26]) / param_1[0x1b],local_c);
      return;
    }
  }
  return;
}
