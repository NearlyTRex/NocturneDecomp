// Name: FUN_004acbc0
// Address: 004acbc0
// Address Range: [[004acbc0, 004accbd]]
// Convention: unknown
// Signature: void FUN_004acbc0(int param_1)

#include "nocturne.h"

void FUN_004acbc0(int param_1)

{
  FUN_0040d2d0(param_1);
  FUN_0040c450(param_1 + 0x150,"?glassSize" + 1);
  FUN_0040c6d0(param_1 + 0x164,"glassTexture");
  if (1 < 0x00000006) {
    FUN_0040c900(param_1 + 0x174,"opacity");
  }
  if (2 < 0x00000006) {
    FUN_0040c900(param_1 + 0x178,"shattered");
    FUN_0040c6d0(param_1 + 0x17c,"breakEvent");
  }
  if (3 < 0x00000006) {
    FUN_0040c900(param_1 + 0x1e0,"mirrorFlag");
  }
  if (4 < 0x00000006) {
    FUN_0040c6d0(param_1 + 0x304,"breakableCondition");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040c900(param_1 + 0x368,"backgroundFlag");
  FUN_0040c6d0(param_1 + 0x374,"brokenTexture");
  return;
}
