// Name: FUN_0057a5c0
// Address: 0057a5c0
// Address Range: [[0057a5c0, 0057a738]]
// Convention: unknown
// Signature: undefined4 FUN_0057a5c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057a5c0(int param_1)

{
  int iVar1;
  int iVar2;
  MMRESULT MVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  int local_34 [8];
  int local_14;
  int iVar6;
  
  param_1 = param_1 * 4;
  if ((*(int *)(param_1 + 0x2c828a4) == 0) ||
     (*(LPWAVEHDR *)(param_1 + 0x2c82864) == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar3 = waveOutUnprepareHeader(_DAT_02c82840,*(LPWAVEHDR *)(param_1 + 0x2c82864),0x20);
  if (MVar3 != 0) {
    FUN_005773f0("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar4 = (int)((_DAT_02c828c4 + (_DAT_02c828c4 >> 0x1f) * -8) -
               (uint)((_DAT_02c828c4 >> 0x1f) << 2 < 0)) >> 3;
  iVar7 = 0;
  local_14 = param_1;
  if (0 < _DAT_02c828c8 * 4) {
    iVar2 = *(int *)(param_1 + 0x2c828a4);
    iVar6 = 0;
    do {
      iVar5 = iVar6 + 4;
      iVar1 = iVar2 + iVar7;
      iVar7 = iVar7 + iVar4;
      *(int *)((int)local_34 + iVar6) = iVar1;
      iVar6 = iVar5;
    } while (iVar5 < _DAT_02c828c8 * 4);
  }
  FUN_00576c20(local_34,_DAT_02c828c4,_DAT_02c828c8,_DAT_02c828cc,_DAT_02c828d0,
               iVar4 * _DAT_02c828c8);
  *(int *)(*(int *)(local_14 + 0x2c82864) + 4) =
       ((int)((_DAT_02c828c4 + (_DAT_02c828c4 >> 0x1f) * -8) -
             (uint)((_DAT_02c828c4 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02c828d0 * _DAT_02c828c8;
  MVar3 = waveOutPrepareHeader(_DAT_02c82840,*(LPWAVEHDR *)(local_14 + 0x2c82864),0x20);
  if (MVar3 != 0) {
    FUN_005773f0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar3 = waveOutWrite(_DAT_02c82840,*(LPWAVEHDR *)(local_14 + 0x2c82864),0x20);
  if (MVar3 != 0) {
    FUN_005773f0("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
