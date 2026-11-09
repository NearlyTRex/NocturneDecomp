// Name: engine_clipper.c_setFarPlaneDistance_FUN_00430620
// Address: 00430620
// Address Range: [[00430620, 00430632]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_setFarPlaneDistance_FUN_00430620(int distance)

#include "nocturne.h"

void __cdecl engine_clipper_c_setFarPlaneDistance_FUN_00430620(int distance)

{
  if (distance == 0) {
    distance = 0x7fffffff;
  }
  DAT_00609b34 = distance;
  return;
}
