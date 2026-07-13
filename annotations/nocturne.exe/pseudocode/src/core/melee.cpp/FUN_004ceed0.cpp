// Name: FUN_004ceed0
// Address: 004ceed0
// Address Range: [[004ceed0, 004ceef8]]
// Convention: unknown
// Signature: undefined4 FUN_004ceed0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ceed0(void)

{
  _DAT_01cc4800 = "..\\core\\melee.cpp";
  _DAT_01cc4804 = 0x8c;
  FUN_004c8440("CMelee::fire - should never be called...");
  return 1;
}
