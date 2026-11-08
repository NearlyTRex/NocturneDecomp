// Name: FUN_004c9d80
// Address: 004c9d80
// Address Range: [[004c9d80, 004c9e6f]]
// Convention: unknown
// Signature: undefined4 FUN_004c9d80(undefined4 param_1,float *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c9d80(uint param_1,float *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01cdde40) {
    iVar1 = 0x1cdde44;
    do {
      if (((ABS(param_2[1] - *(float *)(iVar1 + 8)) <= (float)_DAT_005d957a) &&
          (ABS(*param_2 - *(float *)(iVar1 + 4)) <= (float)_DAT_005d9582)) &&
         (ABS(param_2[2] - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005d9582)) {
        *param_3 = *(uint *)(iVar1 + 0x10);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < _DAT_01cdde40);
  }
  iVar2 = 0;
  if (0 < _DAT_01cbcaf8) {
    iVar1 = 0x1cbcafc;
    do {
      if (((*(int *)(iVar1 + 0x10) == 0) &&
          (ABS(param_2[1] - *(float *)(iVar1 + 8)) <= (float)_DAT_005d957a)) &&
         ((ABS(*param_2 - *(float *)(iVar1 + 4)) <= (float)_DAT_005d957a &&
          (ABS(param_2[2] - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005d957a)))) {
        *param_3 = *(uint *)(iVar1 + 0x14);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x44;
    } while (iVar2 < _DAT_01cbcaf8);
  }
  return 0;
}
