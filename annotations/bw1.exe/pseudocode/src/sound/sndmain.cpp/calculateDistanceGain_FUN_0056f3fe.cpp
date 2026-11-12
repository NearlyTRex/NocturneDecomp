// Name: sound_sndmain.cpp_calculateDistanceGain_FUN_0056f3fe
// Address: 0056f3fe
// Address Range: [[0056f3fe, 0056f461]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_0056f3fe(float distance,float reference_distance,float min_distance,float max_distance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_0056f3fe(float distance,float reference_distance,float min_distance,float max_distance)

{
  if (distance < min_distance) {
    distance = min_distance;
  }
  if (max_distance < distance) {
    distance = max_distance;
  }
  if (distance <= reference_distance * _DAT_005f3148) {
    return 20.0;
  }
  return reference_distance / distance;
}
