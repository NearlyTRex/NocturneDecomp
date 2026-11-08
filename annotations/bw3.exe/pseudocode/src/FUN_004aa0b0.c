// Name: FUN_004aa0b0
// Address: 004aa0b0
// Address Range: [[004aa0b0, 004aa191]]
// Convention: unknown
// Signature: void FUN_004aa0b0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aa0b0(int *param_1)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  int local_14;
  int local_10;
  int local_c;
  
  if (((*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != 0) && (*param_1 != 0)) &&
     (*(int *)(*param_1 + 0x140) == 6)) {
    iVar2 = FUN_004aa350(param_1,*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20,&local_10,&local_14)
    ;
    if (-1 < iVar2) {
      dVar1 = (double)FUN_005a3600((double)((float)param_1[iVar2 * 0x22 + 0x49] *
                                           (float)_DAT_005c114f));
      fVar3 = (float10)dVar1 + (float10)_DAT_005c1157;
      FUN_005a3120();
      local_c = (int)ROUND(fVar3);
      if (local_c < 1) {
        local_c = 1;
      }
      FUN_004aa200(param_1,(local_10 * param_1[0x25]) / param_1[0x1a],
                   (local_14 * param_1[0x26]) / param_1[0x1b],local_c);
      return;
    }
  }
  return;
}
