// Name: FUN_0055df40
// Address: 0055df40
// Address Range: [[0055df40, 0055df98]]
// Convention: unknown
// Signature: undefined4 FUN_0055df40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055df40(void)

{
  MMRESULT MVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (_DAT_02cf5504 != (HWAVEIN)0x0) {
    MVar1 = waveInReset(_DAT_02cf5504);
    if (MVar1 != 0) {
      FUN_0055a560("waveInReset failed!");
      uVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)(iVar2 + 0x2cf5558) != (LPWAVEHDR)0x0) {
      waveInUnprepareHeader(_DAT_02cf5504,*(LPWAVEHDR *)(iVar2 + 0x2cf5558),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x50);
  return uVar3;
}
