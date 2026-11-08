// Name: FUN_0055d6f0
// Address: 0055d6f0
// Address Range: [[0055d6f0, 0055d868]]
// Convention: unknown
// Signature: undefined4 FUN_0055d6f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055d6f0(int param_1)

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
  if ((*(int *)(param_1 + 0x2cf54d0) == 0) ||
     (*(LPWAVEHDR *)(param_1 + 0x2cf5490) == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar3 = waveOutUnprepareHeader(_DAT_02cf546c,*(LPWAVEHDR *)(param_1 + 0x2cf5490),0x20);
  if (MVar3 != 0) {
    FUN_0055a560("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar4 = (int)((_DAT_02cf54f0 + (_DAT_02cf54f0 >> 0x1f) * -8) -
               (uint)((_DAT_02cf54f0 >> 0x1f) << 2 < 0)) >> 3;
  iVar7 = 0;
  local_14 = param_1;
  if (0 < _DAT_02cf54f4 * 4) {
    iVar2 = *(int *)(param_1 + 0x2cf54d0);
    iVar6 = 0;
    do {
      iVar5 = iVar6 + 4;
      iVar1 = iVar2 + iVar7;
      iVar7 = iVar7 + iVar4;
      *(int *)((int)local_34 + iVar6) = iVar1;
      iVar6 = iVar5;
    } while (iVar5 < _DAT_02cf54f4 * 4);
  }
  FUN_00559d90(local_34,_DAT_02cf54f0,_DAT_02cf54f4,_DAT_02cf54f8,_DAT_02cf54fc,
               iVar4 * _DAT_02cf54f4);
  *(int *)(*(int *)(local_14 + 0x2cf5490) + 4) =
       ((int)((_DAT_02cf54f0 + (_DAT_02cf54f0 >> 0x1f) * -8) -
             (uint)((_DAT_02cf54f0 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02cf54fc * _DAT_02cf54f4;
  MVar3 = waveOutPrepareHeader(_DAT_02cf546c,*(LPWAVEHDR *)(local_14 + 0x2cf5490),0x20);
  if (MVar3 != 0) {
    FUN_0055a560("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar3 = waveOutWrite(_DAT_02cf546c,*(LPWAVEHDR *)(local_14 + 0x2cf5490),0x20);
  if (MVar3 != 0) {
    FUN_0055a560("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
