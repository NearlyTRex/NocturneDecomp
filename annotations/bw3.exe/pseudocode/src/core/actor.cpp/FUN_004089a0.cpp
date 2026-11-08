// Name: FUN_004089a0
// Address: 004089a0
// Address Range: [[004089a0, 004089cc]]
// Convention: unknown
// Signature: undefined4 FUN_004089a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004089a0(void)

{
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0x2dc;
  FUN_004e4330("CDemonActor::customRayIntersect should not be called for this base class");
  return 0x40000000;
}
