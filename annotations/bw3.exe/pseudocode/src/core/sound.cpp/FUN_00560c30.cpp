// Name: FUN_00560c30
// Address: 00560c30
// Address Range: [[00560c30, 00560c88]]
// Convention: unknown
// Signature: void FUN_00560c30(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00560c30(uint param_1,int param_2)

{
  if ((param_2 < 0) || (0x1a < param_2)) {
    _DAT_01d71de0 = "..\\core\\sound.cpp";
    _DAT_01d71de4 = 0x3fd;
    FUN_004e4330("CSound::setReverbPreset - invalid index");
  }
  param_2 = param_2 * 0x10;
  FUN_00560c00(param_1,*(uint *)(&DAT_00604600 + param_2),
               *(uint *)(&DAT_00604604 + param_2),*(uint *)(&DAT_00604608 + param_2));
  return;
}
