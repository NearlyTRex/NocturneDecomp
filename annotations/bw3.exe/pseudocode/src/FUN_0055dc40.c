// Name: FUN_0055dc40
// Address: 0055dc40
// Address Range: [[0055dc40, 0055dcb8]]
// Convention: unknown
// Signature: undefined4 FUN_0055dc40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055dc40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_02cf5500) {
    iVar2 = 0;
    do {
      if ((*(int *)(iVar2 + 0x2cf5490) == 0) || (*(int *)(iVar2 + 0x2cf54d0) == 0)) {
        FUN_0055a560("WavOutDevice::poll - NULL pointer??");
        return 0;
      }
      if (((*(byte *)(*(int *)(iVar2 + 0x2cf5490) + 0x10) & 1) != 0) &&
         (iVar1 = FUN_0055d6f0(iVar3), iVar1 == 0)) {
        FUN_0055a560("WavOutDevice::poll - sendWavOutBuffer failed");
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_02cf5500);
  }
  return 1;
}
