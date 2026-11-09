// Name: engine_clipper.c_setFarPlaneDistance_FUN_0043b480
// Address: 0043b480
// Address Range: [[0043b480, 0043b492]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_setFarPlaneDistance_FUN_0043b480(int distance)

#include "nocturne.h"

void __cdecl engine_clipper_c_setFarPlaneDistance_FUN_0043b480(int distance)

{
  if (distance == 0) {
    distance = 0x7fffffff;
  }
  DAT_00610d44 = distance;
  return;
}
