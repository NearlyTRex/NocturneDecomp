// Name: sound_sndmain.cpp_FUN_005515e0
// Address: 005515e0
// Address Range: [[00550510, 00550512] [005515e0, 00551642]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_005515e0(double param_1,double param_2,double param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_005515e0(double param_1,double param_2,double param_3,float param_4)

{
  if ((param_3 - *(double *)(&DAT_02648448 + _DAT_026484b8 * 8)) *
      (param_3 - *(double *)(&DAT_02648448 + _DAT_026484b8 * 8)) +
      (param_2 - *(double *)(&DAT_02648438 + _DAT_026484b8 * 8)) *
      (param_2 - *(double *)(&DAT_02648438 + _DAT_026484b8 * 8)) +
      (param_1 - *(double *)(&DAT_02648428 + _DAT_026484b8 * 8)) *
      (param_1 - *(double *)(&DAT_02648428 + _DAT_026484b8 * 8)) <=
      (double)param_4 * (double)param_4) {
    return 1;
  }
  return 0;
}
