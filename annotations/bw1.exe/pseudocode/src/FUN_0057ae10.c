// Name: FUN_0057ae10
// Address: 0057ae10
// Address Range: [[0057ae10, 0057ae68]]
// Convention: unknown
// Signature: undefined4 FUN_0057ae10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057ae10(void)

{
  MMRESULT MVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (_DAT_02c828d8 != (HWAVEIN)0x0) {
    MVar1 = waveInReset(_DAT_02c828d8);
    if (MVar1 != 0) {
      FUN_005773f0("waveInReset failed!");
      uVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)(iVar2 + 0x2c8292c) != (LPWAVEHDR)0x0) {
      waveInUnprepareHeader(_DAT_02c828d8,*(LPWAVEHDR *)(iVar2 + 0x2c8292c),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x50);
  return uVar3;
}
