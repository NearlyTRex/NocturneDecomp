// Name: FUN_005ad8b0
// Address: 005ad8b0
// Address Range: [[005ad8b0, 005ad98b]]
// Convention: unknown
// Signature: void FUN_005ad8b0(int param_1)

#include "nocturne.h"

void FUN_005ad8b0(int param_1)

{
  byte local_104 [256];
  
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x158,"modelName");
  if (2 < 0x00000007) {
    FUN_0040b6f0(param_1 + 0x304,"carriedByActor");
  }
  if (3 < 0x00000007) {
    FUN_0040b670(param_1 + 0x2d4,"weaponState");
    FUN_0040b670(param_1 + 0x568,"ammoCount");
    FUN_0040b670(param_1 + 0x56c,"ammoType");
  }
  if (0x00000007 == 5) {
    FUN_0040b560(local_104,"descriptiveName");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040b5f0(param_1 + 0x570,"simTimer");
  return;
}
