// Name: FUN_00410600
// Address: 00410600
// Address Range: [[00410600, 00410658]]
// Convention: unknown
// Signature: void FUN_00410600(int param_1)

#include "nocturne.h"

void FUN_00410600(int param_1)

{
  FUN_004ce590(param_1);
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b730(param_1 + 0x25640,"summonEvent");
  FUN_0040b730(param_1 + 0x256a4,"goAwayEvent");
  FUN_0040b960(param_1 + 0x25738,"summoned");
  return;
}
