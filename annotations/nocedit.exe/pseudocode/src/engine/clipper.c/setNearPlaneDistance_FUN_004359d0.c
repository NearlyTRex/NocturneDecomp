// Name: engine_clipper.c_setNearPlaneDistance_FUN_004359d0
// Address: 004359d0
// Address Range: [[004359d0, 004359e2]]
// Convention: __cdecl
// Signature: void engine_clipper.c_setNearPlaneDistance_FUN_004359d0(int distance)

#include "nocturne.h"

void __cdecl engine_clipper_c_setNearPlaneDistance_FUN_004359d0(int distance)

{
  if (distance == 0) {
    distance = 0x7fffffff;
  }
  g_NearPlaneDistance = distance;
  return;
}
