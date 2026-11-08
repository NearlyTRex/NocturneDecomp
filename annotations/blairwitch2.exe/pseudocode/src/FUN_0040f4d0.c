// Name: FUN_0040f4d0
// Address: 0040f4d0
// Address Range: [[0040f4d0, 0040f550]]
// Convention: unknown
// Signature: void FUN_0040f4d0(int param_1)

#include "nocturne.h"

void FUN_0040f4d0(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b8,"modelName");
  FUN_0040b960(param_1 + 0x434,"collideWithMe");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b960(param_1 + 0x438,"groundType");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b960(param_1 + 0x2b4,"castShadowsFlag");
  return;
}
