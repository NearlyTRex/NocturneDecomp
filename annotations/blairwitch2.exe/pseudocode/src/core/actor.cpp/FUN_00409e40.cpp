// Name: FUN_00409e40
// Address: 00409e40
// Address Range: [[00409e40, 00409e68]]
// Convention: unknown
// Signature: undefined4 FUN_00409e40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00409e40(void)

{
  _DAT_01d046a0 = "..\\core\\actor.cpp";
  _DAT_01d046a4 = 0x5b2;
  FUN_004e4500("CDemonActor::processActionButton - should never be called for this base class!");
  return 1;
}
