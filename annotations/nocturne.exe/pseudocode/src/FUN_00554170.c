// Name: FUN_00554170
// Address: 00554170
// Address Range: [[00554170, 0055424b]]
// Convention: unknown
// Signature: void FUN_00554170(int param_1)

#include "nocturne.h"

void FUN_00554170(int param_1)

{
  byte local_104 [256];
  
  FUN_0040d2d0(param_1);
  FUN_0040ca00(param_1 + 0x150,"modelName");
  if (2 < 0x00000007) {
    FUN_0040c980(param_1 + 0x2fc,"carriedByActor");
  }
  if (3 < 0x00000007) {
    FUN_0040c900(param_1 + 0x2cc,"weaponState");
    FUN_0040c900(param_1 + 0x560,"ammoCount");
    FUN_0040c900(param_1 + 0x564,"ammoType");
  }
  if (0x00000007 == 5) {
    FUN_0040c7f0(local_104,"descriptiveName");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040c880(param_1 + 0x568,"simTimer");
  return;
}
