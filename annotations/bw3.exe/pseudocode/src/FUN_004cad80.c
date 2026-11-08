// Name: FUN_004cad80
// Address: 004cad80
// Address Range: [[004cad80, 004cae7d]]
// Convention: unknown
// Signature: void FUN_004cad80(int param_1)

#include "nocturne.h"

void FUN_004cad80(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b400(param_1 + 0x158,"?glassSize" + 1);
  FUN_0040b680(param_1 + 0x16c,"glassTexture");
  if (1 < 0x00000006) {
    FUN_0040b8b0(param_1 + 0x1ac,"opacity");
  }
  if (2 < 0x00000006) {
    FUN_0040b8b0(param_1 + 0x1b0,"shattered");
    FUN_0040b680(param_1 + 0x1b4,"breakEvent");
  }
  if (3 < 0x00000006) {
    FUN_0040b8b0(param_1 + 0x218,"mirrorFlag");
  }
  if (4 < 0x00000006) {
    FUN_0040b680(param_1 + 0x33c,"breakableCondition");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x3a0,"backgroundFlag");
  FUN_0040b680(param_1 + 0x3ac,"brokenTexture");
  return;
}
