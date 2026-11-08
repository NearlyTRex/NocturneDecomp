// Name: FUN_004c5a80
// Address: 004c5a80
// Address Range: [[004c5a80, 004c5b7d]]
// Convention: unknown
// Signature: void FUN_004c5a80(int param_1)

#include "nocturne.h"

void FUN_004c5a80(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040b4b0(param_1 + 0x2b4,"?glassSize" + 1);
  FUN_0040b730(param_1 + 0x2c8,"glassTexture");
  if (1 < 0x00000006) {
    FUN_0040b960(param_1 + 0x2d8,"opacity");
  }
  if (2 < 0x00000006) {
    FUN_0040b960(param_1 + 0x2dc,"shattered");
    FUN_0040b730(param_1 + 0x2e0,"breakEvent");
  }
  if (3 < 0x00000006) {
    FUN_0040b960(param_1 + 0x344,"mirrorFlag");
  }
  if (4 < 0x00000006) {
    FUN_0040b730(param_1 + 0x468,"breakableCondition");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b960(param_1 + 0x4cc,"backgroundFlag");
  FUN_0040b730(param_1 + 0x4d8,"brokenTexture");
  return;
}
