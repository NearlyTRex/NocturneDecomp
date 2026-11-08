// Name: FUN_004a0520
// Address: 004a0520
// Address Range: [[004a0520, 004a0671]]
// Convention: unknown
// Signature: void FUN_004a0520(int param_1)

#include "nocturne.h"

void FUN_004a0520(int param_1)

{
  if (0x0000000A < 4) {
    FUN_0040c040(param_1);
    if (1 < 0x0000000A) {
      FUN_0040b5f0(param_1 + 0xc1d0,"speed");
    }
    if (2 < 0x0000000A) {
      FUN_0040b5f0(param_1 + 0x2538,"hitPoints");
      FUN_0040b670(param_1 + 0xc1d4,"poolMe");
      return;
    }
  }
  else {
    FUN_0042c7f0(param_1);
    FUN_0040b5f0(param_1 + 0xc1d0,"speed");
    FUN_0040b670(param_1 + 0xc1d4,"poolMe");
    if (4 < 0x0000000A) {
      FUN_0040b670(param_1 + 0xc1d8,"randomizeMe");
    }
    if (5 < 0x0000000A) {
      FUN_0040b6f0(param_1 + 0xc260,"scriptVictim");
    }
    if (6 < 0x0000000A) {
      FUN_0040b440(param_1 + 0xc1f4,"patrolNamePattern");
    }
    if (7 < 0x0000000A) {
      FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
    }
    if (8 < 0x0000000A) {
      FUN_0040b5f0(param_1 + 0xc25c,"victimHeight");
    }
    if (9 < 0x0000000A) {
      FUN_0040b6f0(param_1 + 0xc1e8,"victim");
      return;
    }
  }
  return;
}
