// Name: FUN_004b0e80
// Address: 004b0e80
// Address Range: [[004b0e80, 004b0ee3]]
// Convention: unknown
// Signature: undefined4 FUN_004b0e80(int param_1)

#include "nocturne.h"

uint FUN_004b0e80(int param_1)

{
  int iVar1;
  
  if (((((*(byte *)(param_1 + 0x25640) & 2) != 0) && (1.0 <= *(float *)(param_1 + 0x25648))) &&
      (1.0 <= *(float *)(param_1 + 0x2567c))) &&
     ((*(float *)(param_1 + 0x25678) <= 0.0 &&
      (iVar1 = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4),
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xf0))(iVar1), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}
