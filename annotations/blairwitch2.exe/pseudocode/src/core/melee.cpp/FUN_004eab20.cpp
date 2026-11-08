// Name: FUN_004eab20
// Address: 004eab20
// Address Range: [[004eab20, 004eab48]]
// Convention: unknown
// Signature: undefined4 FUN_004eab20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004eab20(void)

{
  _DAT_01d046a0 = "..\\core\\melee.cpp";
  _DAT_01d046a4 = 0x8e;
  FUN_004e4500("CMelee::fire - should never be called...");
  return 1;
}
