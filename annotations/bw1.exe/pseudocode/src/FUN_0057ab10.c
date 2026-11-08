// Name: FUN_0057ab10
// Address: 0057ab10
// Address Range: [[0057ab10, 0057ab88]]
// Convention: unknown
// Signature: undefined4 FUN_0057ab10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057ab10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_02c828d4) {
    iVar2 = 0;
    do {
      if ((*(int *)(iVar2 + 0x2c82864) == 0) || (*(int *)(iVar2 + 0x2c828a4) == 0)) {
        FUN_005773f0("WavOutDevice::poll - NULL pointer??");
        return 0;
      }
      if (((*(byte *)(*(int *)(iVar2 + 0x2c82864) + 0x10) & 1) != 0) &&
         (iVar1 = FUN_0057a5c0(iVar3), iVar1 == 0)) {
        FUN_005773f0("WavOutDevice::poll - sendWavOutBuffer failed");
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_02c828d4);
  }
  return 1;
}
