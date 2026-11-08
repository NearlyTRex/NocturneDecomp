// Name: FUN_00557e90
// Address: 00557e90
// Address Range: [[00557e90, 00557ef9]]
// Convention: unknown
// Signature: undefined4 FUN_00557e90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00557e90(void)

{
  MMRESULT MVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (_DAT_0264b070 != (HWAVEOUT)0x0) {
    MVar1 = waveOutReset(_DAT_0264b070);
    if (MVar1 != 0) {
      FUN_005549c0("?waveOutReset failed!" + 1);
      uVar3 = 0;
    }
  }
  iVar2 = 0;
  do {
    if (*(LPWAVEHDR *)(iVar2 + 0x264b094) != (LPWAVEHDR)0x0) {
      waveOutUnprepareHeader(_DAT_0264b070,*(LPWAVEHDR *)(iVar2 + 0x264b094),0x20);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x20);
  iVar2 = FUN_00553270();
  if (iVar2 != 0) {
    return uVar3;
  }
  return 0;
}
