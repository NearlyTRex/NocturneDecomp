// Name: FUN_00487ec0
// Address: 00487ec0
// Address Range: [[00487ec0, 00488011]]
// Convention: unknown
// Signature: void FUN_00487ec0(int param_1)

#include "nocturne.h"

void FUN_00487ec0(int param_1)

{
  if (0x0000000A < 4) {
    FUN_0040c330(param_1);
    if (1 < 0x0000000A) {
      FUN_0040b8e0(param_1 + 0x10a60,"speed");
    }
    if (2 < 0x0000000A) {
      FUN_0040b8e0(param_1 + 0x25a8,"hitPoints");
      FUN_0040b960(param_1 + 0x10a64,"poolMe");
      return;
    }
  }
  else {
    FUN_00422c30(param_1);
    FUN_0040b8e0(param_1 + 0x10a60,"speed");
    FUN_0040b960(param_1 + 0x10a64,"poolMe");
    if (4 < 0x0000000A) {
      FUN_0040b960(param_1 + 0x10a68,"randomizeMe");
    }
    if (5 < 0x0000000A) {
      FUN_0040b9e0(param_1 + 0x10af0,"scriptVictim");
    }
    if (6 < 0x0000000A) {
      FUN_0040b730(param_1 + 0x10a84,"patrolNamePattern");
    }
    if (7 < 0x0000000A) {
      FUN_0040b8e0(param_1 + 0x10a70,"guardDistance");
    }
    if (8 < 0x0000000A) {
      FUN_0040b8e0(param_1 + 0x10aec,"victimHeight");
    }
    if (9 < 0x0000000A) {
      FUN_0040b9e0(param_1 + 0x10a78,"victim");
      return;
    }
  }
  return;
}
