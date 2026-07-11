// Name: FUN_004796c0
// Address: 004796c0
// Address Range: [[004796c0, 00479811]]
// Convention: unknown
// Signature: void FUN_004796c0(int param_1)

#include "nocturne.h"

void FUN_004796c0(int param_1)

{
  if (0x0000000A < 4) {
    FUN_0040d2d0(param_1);
    if (1 < 0x0000000A) {
      FUN_0040c880(param_1 + 0xbc8c,"speed");
    }
    if (2 < 0x0000000A) {
      FUN_0040c880(param_1 + 0x2434,"hitPoints");
      FUN_0040c900(param_1 + 0xbc90,"poolMe");
      return;
    }
  }
  else {
    FUN_004244b0(param_1);
    FUN_0040c880(param_1 + 0xbc8c,"speed");
    FUN_0040c900(param_1 + 0xbc90,"poolMe");
    if (4 < 0x0000000A) {
      FUN_0040c900(param_1 + 0xbc94,"randomizeMe");
    }
    if (5 < 0x0000000A) {
      FUN_0040c980(param_1 + 0xbd1c,"scriptVictim");
    }
    if (6 < 0x0000000A) {
      FUN_0040c6d0(param_1 + 0xbcb0,"patrolNamePattern");
    }
    if (7 < 0x0000000A) {
      FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
    }
    if (8 < 0x0000000A) {
      FUN_0040c880(param_1 + 0xbd18,"victimHeight");
    }
    if (9 < 0x0000000A) {
      FUN_0040c980(param_1 + 0xbca4,"victim");
      return;
    }
  }
  return;
}
