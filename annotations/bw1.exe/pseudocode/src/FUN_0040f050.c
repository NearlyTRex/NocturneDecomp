// Name: FUN_0040f050
// Address: 0040f050
// Address Range: [[0040f050, 0040f0d0]]
// Convention: unknown
// Signature: void FUN_0040f050(int param_1)

#include "nocturne.h"

void FUN_0040f050(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x15c,"modelName");
  FUN_0040b670(param_1 + 0x2d8,"collideWithMe");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b670(param_1 + 0x2dc,"groundType");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b670(param_1 + 0x158,"castShadowsFlag");
  return;
}
