// Name: sound_sndmain.cpp_calculateDistanceGain_FUN_0054cd90
// Address: 0054cd90
// Address Range: [[0054cd90, 0054cdf1]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_0054cd90(float distance,float reference_distance,float min_distance,float max_distance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_0054cd90(float distance,float reference_distance,float min_distance,float max_distance)

{
  if (distance < min_distance) {
    distance = min_distance;
  }
  if (max_distance < distance) {
    distance = max_distance;
  }
  if (distance <= reference_distance * _DAT_005e7f4e) {
    return 20.0;
  }
  return reference_distance / distance;
}
