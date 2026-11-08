// Name: FUN_004b1060
// Address: 004b1060
// Address Range: [[004b1060, 004b1152]]
// Convention: unknown
// Signature: int FUN_004b1060(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b1060(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004254b0(param_1);
  if (iVar1 != 0) {
    FUN_004089d0(param_1);
    FUN_005b0fe0(param_1 + 0x25680,0);
    thunk_FUN_004e9810(DAT_0060b280);
    iVar2 = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4);
    if (((iVar2 != 0) &&
        ((**(code **)(*(int *)(iVar2 + 0x2b0) + 0x18))(iVar2),
        (float)_DAT_005d713b < *(float *)(param_1 + 0x25648))) &&
       ((iVar2 = FUN_0040c8f0(*(uint *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4),
                              _DAT_01c225d8), iVar2 == 0 ||
        (0.0 < SQRT(*(float *)(iVar2 + 0x6e0) * *(float *)(iVar2 + 0x6e0) +
                    *(float *)(iVar2 + 0x6d8) * *(float *)(iVar2 + 0x6d8) +
                    *(float *)(iVar2 + 0x6dc) * *(float *)(iVar2 + 0x6dc)))))) {
      iVar2 = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4);
      (**(code **)(*(int *)(iVar2 + 0x2b0) + 0xf8))(iVar2);
      return iVar1;
    }
  }
  return iVar1;
}
