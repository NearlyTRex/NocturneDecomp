// Name: sound_sndmain.cpp_calculateDistanceGain_FUN_00522ea0
// Address: 00522ea0
// Address Range: [[00522ea0, 00522f03]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_00522ea0(float distance,float reference_distance,float min_distance,float max_distance)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_00522ea0(float distance,float reference_distance,float min_distance,float max_distance)

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
