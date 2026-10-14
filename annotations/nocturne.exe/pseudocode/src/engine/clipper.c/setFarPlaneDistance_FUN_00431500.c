// Name: engine_clipper.c_setFarPlaneDistance_FUN_00431500
// Address: 00431500
// Address Range: [[00431500, 00431512]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_setFarPlaneDistance_FUN_00431500(int distance)

#include "nocturne.h"

void __cdecl engine_clipper_c_setFarPlaneDistance_FUN_00431500(int distance)

{
  if (distance == 0) {
    distance = 0x7fffffff;
  }
  g_FarPlaneDistance = distance;
  return;
}
