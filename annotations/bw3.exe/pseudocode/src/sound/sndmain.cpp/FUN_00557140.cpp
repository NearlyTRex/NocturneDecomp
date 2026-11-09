// Name: sound_sndmain.cpp_FUN_00557140
// Address: 00557140
// Address Range: [[00557140, 0055716f]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00557140(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00557140(float param_1)

{
  _DAT_00604244 = 1.0 / param_1;
  DAT_00604240 = param_1;
  if (_DAT_02cf3280 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf3280 + 0x28))(_DAT_02cf3280,param_1);
  return;
}
