// Name: sound_sndmain.cpp_FUN_00574080
// Address: 00574080
// Address Range: [[00574080, 005740f7]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00574080(double param_1,double param_2,double param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_00574080(double param_1,double param_2,double param_3)

{
  if ((_DAT_02c7fc8c != 0) &&
     ((param_3 - _DAT_02c7fc20) * (param_3 - _DAT_02c7fc20) +
      (param_2 - _DAT_02c7fc10) * (param_2 - _DAT_02c7fc10) +
      (param_1 - _DAT_02c7fc00) * (param_1 - _DAT_02c7fc00) <=
      (param_3 - _DAT_02c7fc18) * (param_3 - _DAT_02c7fc18) +
      (param_2 - _DAT_02c7fc08) * (param_2 - _DAT_02c7fc08) +
      (param_1 - _DAT_02c7fbf8) * (param_1 - _DAT_02c7fbf8))) {
    return 1;
  }
  return 0;
}
