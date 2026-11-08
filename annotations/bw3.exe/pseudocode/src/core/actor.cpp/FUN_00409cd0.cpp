// Name: FUN_00409cd0
// Address: 00409cd0
// Address Range: [[00409cd0, 00409cf8]]
// Convention: unknown
// Signature: undefined4 FUN_00409cd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00409cd0(void)

{
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0x5ac;
  FUN_004e4330("CDemonActor::processActionButton - should never be called for this base class!");
  return 1;
}
