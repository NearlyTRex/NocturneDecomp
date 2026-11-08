// Name: FUN_00408b90
// Address: 00408b90
// Address Range: [[00408b90, 00408bbc]]
// Convention: unknown
// Signature: undefined4 FUN_00408b90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00408b90(void)

{
  _DAT_01d046a0 = "..\\core\\actor.cpp";
  _DAT_01d046a4 = 0x2e3;
  FUN_004e4500("CDemonActor::customRayIntersect should not be called for this base class");
  return 0x40000000;
}
