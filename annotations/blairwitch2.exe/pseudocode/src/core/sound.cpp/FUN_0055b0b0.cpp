// Name: FUN_0055b0b0
// Address: 0055b0b0
// Address Range: [[0055b0b0, 0055b108]]
// Convention: unknown
// Signature: void FUN_0055b0b0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055b0b0(uint param_1,int param_2)

{
  if ((param_2 < 0) || (0x1a < param_2)) {
    _DAT_01d046a0 = "..\\core\\sound.cpp";
    _DAT_01d046a4 = 0x404;
    FUN_004e4500("CSound::setReverbPreset - invalid index");
  }
  param_2 = param_2 * 0x10;
  FUN_0055b080(param_1,*(uint *)(&DAT_0061c070 + param_2),
               *(uint *)(&DAT_0061c074 + param_2),*(uint *)(&DAT_0061c078 + param_2));
  return;
}
