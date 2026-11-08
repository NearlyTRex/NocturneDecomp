// Name: FUN_0057abc0
// Address: 0057abc0
// Address Range: [[0057abc0, 0057ac6c]]
// Convention: unknown
// Signature: undefined4 FUN_0057abc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057abc0(int param_1)

{
  MMRESULT MVar1;
  
  param_1 = param_1 * 4;
  if ((*(int *)(&DAT_02c829cc + param_1) == 0) || (*(int *)(param_1 + 0x2c8292c) == 0)) {
    return 0;
  }
  *(int *)(*(int *)(param_1 + 0x2c8292c) + 4) =
       _DAT_02c82a20 *
       ((int)((_DAT_02c82a1c + (_DAT_02c82a1c >> 0x1f) * -8) -
             (uint)((_DAT_02c82a1c >> 0x1f) << 2 < 0)) >> 3) * _DAT_02c82a2c;
  MVar1 = waveInPrepareHeader(_DAT_02c828d8,*(LPWAVEHDR *)(param_1 + 0x2c8292c),0x20);
  if (MVar1 != 0) {
    FUN_005773f0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar1 = waveInAddBuffer(_DAT_02c828d8,*(LPWAVEHDR *)(param_1 + 0x2c8292c),0x20);
  if (MVar1 == 0) {
    return 1;
  }
  FUN_005773f0("waveOutWrite failed!");
  return 0;
}
