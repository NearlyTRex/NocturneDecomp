// Name: sound_sndmain.cpp_calculateDistanceGain_FUN_00552900
// Address: 00552900
// Address Range: [[00552900, 00552961]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_00552900(float distance,float reference_distance,float min_distance,float max_distance)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_00552900(float distance,float reference_distance,float min_distance,float max_distance)

{
  if (distance < min_distance) {
    distance = min_distance;
  }
  if (max_distance < distance) {
    distance = max_distance;
  }
  if (distance <= reference_distance * 0.05f) {
    return 20.0;
  }
  return reference_distance / distance;
}
