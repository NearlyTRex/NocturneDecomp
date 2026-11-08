// Name: FUN_004e7200
// Address: 004e7200
// Address Range: [[004e7200, 004e7228]]
// Convention: unknown
// Signature: undefined4 FUN_004e7200(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e7200(void)

{
  _DAT_01d71de0 = "..\\core\\melee.cpp";
  _DAT_01d71de4 = 0x8c;
  FUN_004e4330("CMelee::fire - should never be called...");
  return 1;
}
