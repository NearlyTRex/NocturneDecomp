// Name: FUN_0057a8c0
// Address: 0057a8c0
// Address Range: [[0057a8c0, 0057a929]]
// Convention: unknown
// Signature: undefined4 FUN_0057a8c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057a8c0(void)

{
  MMRESULT MVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (_DAT_02c82840 != (HWAVEOUT)0x0) {
    MVar1 = waveOutReset(_DAT_02c82840);
    if (MVar1 != 0) {
      FUN_005773f0("?waveOutReset failed!" + 1);
      uVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)(iVar2 + 0x2c82864) != (LPWAVEHDR)0x0) {
      waveOutUnprepareHeader(_DAT_02c82840,*(LPWAVEHDR *)(iVar2 + 0x2c82864),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x20);
  iVar2 = FUN_00575ca0();
  if (iVar2 != 0) {
    return uVar3;
  }
  return 0;
}
