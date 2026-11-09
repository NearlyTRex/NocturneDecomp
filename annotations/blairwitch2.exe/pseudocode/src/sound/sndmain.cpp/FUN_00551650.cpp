// Name: sound_sndmain.cpp_FUN_00551650
// Address: 00551650
// Address Range: [[00551650, 005516c7]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00551650(double param_1,double param_2,double param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_00551650(double param_1,double param_2,double param_3)

{
  if ((_DAT_026484bc != 0) &&
     ((param_3 - _DAT_02648450) * (param_3 - _DAT_02648450) +
      (param_2 - _DAT_02648440) * (param_2 - _DAT_02648440) +
      (param_1 - _DAT_02648430) * (param_1 - _DAT_02648430) <=
      (param_3 - _DAT_02648448) * (param_3 - _DAT_02648448) +
      (param_2 - _DAT_02648438) * (param_2 - _DAT_02648438) +
      (param_1 - _DAT_02648428) * (param_1 - _DAT_02648428))) {
    return 1;
  }
  return 0;
}
