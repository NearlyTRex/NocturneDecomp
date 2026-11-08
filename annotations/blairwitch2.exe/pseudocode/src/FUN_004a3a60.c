// Name: FUN_004a3a60
// Address: 004a3a60
// Address Range: [[004a3a60, 004a3b41]]
// Convention: unknown
// Signature: void FUN_004a3a60(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3a60(int *param_1)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  int local_14;
  int local_10;
  int local_c;
  
  if (((*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) != 0) && (*param_1 != 0)) &&
     (*(int *)(*param_1 + 0x140) == 6)) {
    iVar2 = FUN_004a3d00(param_1,*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x20,&local_10,&local_14)
    ;
    if (-1 < iVar2) {
      dVar1 = (double)FUN_005b84d0((double)((float)param_1[iVar2 * 0x22 + 0x49] *
                                           (float)_DAT_005d5df8));
      fVar3 = (float10)dVar1 + (float10)_DAT_005d5e00;
      FUN_005b7ff0();
      local_c = (int)ROUND(fVar3);
      if (local_c < 1) {
        local_c = 1;
      }
      FUN_004a3bb0(param_1,(local_10 * param_1[0x25]) / param_1[0x1a],
                   (local_14 * param_1[0x26]) / param_1[0x1b],local_c);
      return;
    }
  }
  return;
}
