// Name: FUN_0057db00
// Address: 0057db00
// Address Range: [[0057db00, 0057db58]]
// Convention: unknown
// Signature: void FUN_0057db00(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057db00(uint param_1,int param_2)

{
  if ((param_2 < 0) || (0x1a < param_2)) {
    _DAT_01d1d400 = "..\\core\\sound.cpp";
    _DAT_01d1d404 = 0x402;
    FUN_005030e0("CSound::setReverbPreset - invalid index");
  }
  param_2 = param_2 * 0x10;
  FUN_0057dad0(param_1,*(uint *)(&DAT_006236c0 + param_2),
               *(uint *)(&DAT_006236c4 + param_2),*(uint *)(&DAT_006236c8 + param_2));
  return;
}
