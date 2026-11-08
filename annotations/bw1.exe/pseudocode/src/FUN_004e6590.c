// Name: FUN_004e6590
// Address: 004e6590
// Address Range: [[004e6590, 004e667f]]
// Convention: unknown
// Signature: undefined4 FUN_004e6590(undefined4 param_1,float *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e6590(uint param_1,float *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01cf69f8) {
    iVar1 = 0x1cf69fc;
    do {
      if (((ABS(param_2[1] - *(float *)(iVar1 + 8)) <= (float)_DAT_005e415d) &&
          (ABS(*param_2 - *(float *)(iVar1 + 4)) <= (float)_DAT_005e4165)) &&
         (ABS(param_2[2] - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005e4165)) {
        *param_3 = *(uint *)(iVar1 + 0x10);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < _DAT_01cf69f8);
  }
  iVar2 = 0;
  if (0 < _DAT_01cd56b0) {
    iVar1 = 0x1cd56b4;
    do {
      if (((*(int *)(iVar1 + 0x10) == 0) &&
          (ABS(param_2[1] - *(float *)(iVar1 + 8)) <= (float)_DAT_005e415d)) &&
         ((ABS(*param_2 - *(float *)(iVar1 + 4)) <= (float)_DAT_005e415d &&
          (ABS(param_2[2] - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005e415d)))) {
        *param_3 = *(uint *)(iVar1 + 0x14);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x44;
    } while (iVar2 < _DAT_01cd56b0);
  }
  return 0;
}
