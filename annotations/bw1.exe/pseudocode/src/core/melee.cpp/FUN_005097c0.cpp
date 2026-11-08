// Name: FUN_005097c0
// Address: 005097c0
// Address Range: [[005097c0, 005097e8]]
// Convention: unknown
// Signature: undefined4 FUN_005097c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005097c0(void)

{
  _DAT_01d1d400 = "..\\core\\melee.cpp";
  _DAT_01d1d404 = 0x8c;
  FUN_005030e0("CMelee::fire - should never be called...");
  return 1;
}
