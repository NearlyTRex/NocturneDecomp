// Name: FUN_00558190
// Address: 00558190
// Address Range: [[00558190, 0055823c]]
// Convention: unknown
// Signature: undefined4 FUN_00558190(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00558190(int param_1)

{
  MMRESULT MVar1;
  
  param_1 = param_1 * 4;
  if ((*(int *)(&DAT_0264b1fc + param_1) == 0) || (*(int *)(param_1 + 0x264b15c) == 0)) {
    return 0;
  }
  *(int *)(*(int *)(param_1 + 0x264b15c) + 4) =
       _DAT_0264b250 *
       ((int)((_DAT_0264b24c + (_DAT_0264b24c >> 0x1f) * -8) -
             (uint)((_DAT_0264b24c >> 0x1f) << 2 < 0)) >> 3) * _DAT_0264b25c;
  MVar1 = waveInPrepareHeader(_DAT_0264b108,*(LPWAVEHDR *)(param_1 + 0x264b15c),0x20);
  if (MVar1 != 0) {
    FUN_005549c0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar1 = waveInAddBuffer(_DAT_0264b108,*(LPWAVEHDR *)(param_1 + 0x264b15c),0x20);
  if (MVar1 == 0) {
    return 1;
  }
  FUN_005549c0("waveOutWrite failed!");
  return 0;
}
