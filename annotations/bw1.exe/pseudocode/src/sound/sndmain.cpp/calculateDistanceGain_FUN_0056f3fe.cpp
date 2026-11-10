// Name: sound_sndmain.cpp_calculateDistanceGain_FUN_0056f3fe
// Address: 0056f3fe
// Address Range: [[0056f3fe, 0056f461]]
// Convention: unknown
// Signature: float sound_sndmain_cpp_calculateDistanceGain_FUN_0056f3fe(float param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float sound_sndmain_cpp_calculateDistanceGain_FUN_0056f3fe(float param_1,float param_2,float param_3,float param_4)

{
  if (param_1 < param_3) {
    param_1 = param_3;
  }
  if (param_4 < param_1) {
    param_1 = param_4;
  }
  if (param_1 <= param_2 * _DAT_005f3148) {
    return 20.0;
  }
  return param_2 / param_1;
}
