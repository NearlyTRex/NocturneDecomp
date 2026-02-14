// Name: sound_sndmain.cpp_calculateDistanceGain_FUN_005a56c0
// Address: 005a56c0
// Address Range: [[005a56c0, 005a5723]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_005a56c0(float distance,float reference_distance,float min_distance,float max_distance)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_005a56c0(float distance,float reference_distance,float min_distance,float max_distance)

{
  if (distance < min_distance) {
    distance = min_distance;
  }
  if (max_distance < distance) {
    distance = max_distance;
  }
  if (distance <= reference_distance * (float)0.050000000000000003) {
    return 20.0;
  }
  return reference_distance / distance;
}
