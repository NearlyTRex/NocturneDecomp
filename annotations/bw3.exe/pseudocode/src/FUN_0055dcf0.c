// Name: FUN_0055dcf0
// Address: 0055dcf0
// Address Range: [[0055dcf0, 0055dd9c]]
// Convention: unknown
// Signature: undefined4 FUN_0055dcf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055dcf0(int param_1)

{
  MMRESULT MVar1;
  
  param_1 = param_1 * 4;
  if ((*(int *)(&DAT_02cf55f8 + param_1) == 0) || (*(int *)(param_1 + 0x2cf5558) == 0)) {
    return 0;
  }
  *(int *)(*(int *)(param_1 + 0x2cf5558) + 4) =
       _DAT_02cf564c *
       ((int)((_DAT_02cf5648 + (_DAT_02cf5648 >> 0x1f) * -8) -
             (uint)((_DAT_02cf5648 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02cf5658;
  MVar1 = waveInPrepareHeader(_DAT_02cf5504,*(LPWAVEHDR *)(param_1 + 0x2cf5558),0x20);
  if (MVar1 != 0) {
    FUN_0055a560("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar1 = waveInAddBuffer(_DAT_02cf5504,*(LPWAVEHDR *)(param_1 + 0x2cf5558),0x20);
  if (MVar1 == 0) {
    return 1;
  }
  FUN_0055a560("waveOutWrite failed!");
  return 0;
}
