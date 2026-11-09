// Name: sound_sndmain.cpp_FUN_00557170
// Address: 00557170
// Address Range: [[00556090, 00556092] [00557170, 005571d2]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00557170(double param_1,double param_2,double param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_00557170(double param_1,double param_2,double param_3,float param_4)

{
  if ((param_3 - *(double *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8)) *
      (param_3 - *(double *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8)) +
      (param_2 - *(double *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8)) *
      (param_2 - *(double *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8)) +
      (param_1 - *(double *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8)) *
      (param_1 - *(double *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8)) <=
      (double)param_4 * (double)param_4) {
    return 1;
  }
  return 0;
}
