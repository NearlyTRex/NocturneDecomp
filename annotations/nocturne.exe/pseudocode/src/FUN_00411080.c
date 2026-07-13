// Name: FUN_00411080
// Address: 00411080
// Address Range: [[00411080, 004110d8]]
// Convention: unknown
// Signature: void FUN_00411080(int param_1)

#include "nocturne.h"

void FUN_00411080(int param_1)

{
  FUN_004b49a0(param_1);
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040c6d0(param_1 + 0x1fa3c,"?summonEvent" + 1);
  FUN_0040c6d0(param_1 + 0x1faa0,"goAwayEvent");
  FUN_0040c900(param_1 + 0x1fb34,"summoned");
  return;
}
