// Name: FUN_00409c90
// Address: 00409c90
// Address Range: [[00409c90, 00409cb8]]
// Convention: unknown
// Signature: undefined4 FUN_00409c90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00409c90(void)

{
  _DAT_01d1d400 = "..\\core\\actor.cpp";
  _DAT_01d1d404 = 0x5ac;
  FUN_005030e0("CDemonActor::processActionButton - should never be called for this base class!");
  return 1;
}
