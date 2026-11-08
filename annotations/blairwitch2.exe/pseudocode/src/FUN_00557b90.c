// Name: FUN_00557b90
// Address: 00557b90
// Address Range: [[00557b90, 00557d08]]
// Convention: unknown
// Signature: undefined4 FUN_00557b90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00557b90(int param_1)

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
  if ((*(int *)(param_1 + 0x264b0d4) == 0) ||
     (*(LPWAVEHDR *)(param_1 + 0x264b094) == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar3 = waveOutUnprepareHeader(_DAT_0264b070,*(LPWAVEHDR *)(param_1 + 0x264b094),0x20);
  if (MVar3 != 0) {
    FUN_005549c0("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar4 = (int)((_DAT_0264b0f4 + (_DAT_0264b0f4 >> 0x1f) * -8) -
               (uint)((_DAT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3;
  iVar7 = 0;
  local_14 = param_1;
  if (0 < _DAT_0264b0f8 * 4) {
    iVar2 = *(int *)(param_1 + 0x264b0d4);
    iVar6 = 0;
    do {
      iVar5 = iVar6 + 4;
      iVar1 = iVar2 + iVar7;
      iVar7 = iVar7 + iVar4;
      *(int *)((int)local_34 + iVar6) = iVar1;
      iVar6 = iVar5;
    } while (iVar5 < _DAT_0264b0f8 * 4);
  }
  FUN_005541f0(local_34,_DAT_0264b0f4,_DAT_0264b0f8,_DAT_0264b0fc,_DAT_0264b100,
               iVar4 * _DAT_0264b0f8);
  *(int *)(*(int *)(local_14 + 0x264b094) + 4) =
       ((int)((_DAT_0264b0f4 + (_DAT_0264b0f4 >> 0x1f) * -8) -
             (uint)((_DAT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3) * _DAT_0264b100 * _DAT_0264b0f8;
  MVar3 = waveOutPrepareHeader(_DAT_0264b070,*(LPWAVEHDR *)(local_14 + 0x264b094),0x20);
  if (MVar3 != 0) {
    FUN_005549c0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar3 = waveOutWrite(_DAT_0264b070,*(LPWAVEHDR *)(local_14 + 0x264b094),0x20);
  if (MVar3 != 0) {
    FUN_005549c0("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
