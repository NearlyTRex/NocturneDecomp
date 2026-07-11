// Name: FUN_0052ece0
// Address: 0052ece0
// Address Range: [[0052ece0, 0052ed38]]
// Convention: unknown
// Signature: void FUN_0052ece0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052ece0(uint param_1,int param_2)

{
  if ((param_2 < 0) || (0x1a < param_2)) {
    _DAT_01cc4800 = "..\\core\\sound.cpp";
    _DAT_01cc4804 = 0x402;
    FUN_004c8440("CSound::setReverbPreset - invalid index");
  }
  param_2 = param_2 * 0x10;
  FUN_0052ecb0(param_1,*(uint *)(&DAT_005bed70 + param_2),
               *(uint *)(&DAT_005bed74 + param_2),*(uint *)(&DAT_005bed78 + param_2));
  return;
}
