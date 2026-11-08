// Name: FUN_004e21f0
// Address: 004e21f0
// Address Range: [[004e21f0, 004e22ed]]
// Convention: unknown
// Signature: void FUN_004e21f0(int param_1)

#include "nocturne.h"

void FUN_004e21f0(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b1c0(param_1 + 0x158,"?glassSize" + 1);
  FUN_0040b440(param_1 + 0x16c,"glassTexture");
  if (1 < 0x00000006) {
    FUN_0040b670(param_1 + 0x17c,"opacity");
  }
  if (2 < 0x00000006) {
    FUN_0040b670(param_1 + 0x180,"shattered");
    FUN_0040b440(param_1 + 0x184,"breakEvent");
  }
  if (3 < 0x00000006) {
    FUN_0040b670(param_1 + 0x1e8,"mirrorFlag");
  }
  if (4 < 0x00000006) {
    FUN_0040b440(param_1 + 0x30c,"breakableCondition");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b670(param_1 + 0x370,"backgroundFlag");
  FUN_0040b440(param_1 + 0x37c,"brokenTexture");
  return;
}
