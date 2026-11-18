// Name: sound_sndmain.cpp_calculateDistanceGain_FUN_0056f400
// Address: 0056f400
// Address Range: [[0056f400, 0056f461]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_0056f400(float distance,float reference_distance,float min_distance,float max_distance)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_0056f400(float distance,float reference_distance,float min_distance,float max_distance)

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
