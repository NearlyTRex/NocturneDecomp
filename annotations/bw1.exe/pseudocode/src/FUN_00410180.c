// Name: FUN_00410180
// Address: 00410180
// Address Range: [[00410180, 004101d8]]
// Convention: unknown
// Signature: void FUN_00410180(int param_1)

#include "nocturne.h"

void FUN_00410180(int param_1)

{
  FUN_004eab00(param_1);
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b440(param_1 + 0x1ffac,"summonEvent");
  FUN_0040b440(param_1 + 0x20010,"goAwayEvent");
  FUN_0040b670(param_1 + 0x200a4,"summoned");
  return;
}
