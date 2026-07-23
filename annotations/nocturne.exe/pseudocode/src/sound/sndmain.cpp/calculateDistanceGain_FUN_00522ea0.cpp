// Name: sound_sndmain.cpp_calculateDistanceGain_FUN_00522ea0
// Address: 00522ea0
// Address Range: [[00522ea0, 00522f03]]
// Convention: unknown
// Signature: float sound_sndmain_cpp_calculateDistanceGain_FUN_00522ea0(float param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

float sound_sndmain_cpp_calculateDistanceGain_FUN_00522ea0(float param_1,float param_2,float param_3,float param_4)

{
  if (param_1 < param_3) {
    param_1 = param_3;
  }
  if (param_4 < param_1) {
    param_1 = param_4;
  }
  if (param_1 <= param_2 * (float)0.050000000000000003) {
    return 20.0;
  }
  return param_2 / param_1;
}
