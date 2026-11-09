// Name: engine_clipper.c_setFarPlaneDistance_FUN_00439090
// Address: 00439090
// Address Range: [[00439090, 004390a2]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_setFarPlaneDistance_FUN_00439090(int distance)

#include "nocturne.h"

void __cdecl engine_clipper_c_setFarPlaneDistance_FUN_00439090(int distance)

{
  if (distance == 0) {
    distance = 0x7fffffff;
  }
  DAT_005f12f4 = distance;
  return;
}
