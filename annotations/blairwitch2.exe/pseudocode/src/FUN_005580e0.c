// Name: FUN_005580e0
// Address: 005580e0
// Address Range: [[005580e0, 00558158]]
// Convention: unknown
// Signature: undefined4 FUN_005580e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005580e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_0264b104) {
    iVar2 = 0;
    do {
      if ((*(int *)(iVar2 + 0x264b094) == 0) || (*(int *)(iVar2 + 0x264b0d4) == 0)) {
        FUN_005549c0("WavOutDevice::poll - NULL pointer??");
        return 0;
      }
      if (((*(byte *)(*(int *)(iVar2 + 0x264b094) + 0x10) & 1) != 0) &&
         (iVar1 = FUN_00557b90(iVar3), iVar1 == 0)) {
        FUN_005549c0("WavOutDevice::poll - sendWavOutBuffer failed");
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_0264b104);
  }
  return 1;
}
