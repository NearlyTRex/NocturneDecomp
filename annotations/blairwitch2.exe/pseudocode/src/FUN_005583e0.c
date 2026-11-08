// Name: FUN_005583e0
// Address: 005583e0
// Address Range: [[005583e0, 00558438]]
// Convention: unknown
// Signature: undefined4 FUN_005583e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005583e0(void)

{
  MMRESULT MVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (_DAT_0264b108 != (HWAVEIN)0x0) {
    MVar1 = waveInReset(_DAT_0264b108);
    if (MVar1 != 0) {
      FUN_005549c0("waveInReset failed!");
      uVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)(iVar2 + 0x264b15c) != (LPWAVEHDR)0x0) {
      waveInUnprepareHeader(_DAT_0264b108,*(LPWAVEHDR *)(iVar2 + 0x264b15c),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x50);
  return uVar3;
}
