// Name: FUN_00589d60
// Address: 00589d60
// Address Range: [[00589d60, 00589e3b]]
// Convention: unknown
// Signature: void FUN_00589d60(int param_1)

#include "nocturne.h"

void FUN_00589d60(int param_1)

{
  byte local_104 [256];
  
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,"modelName");
  if (2 < 0x00000007) {
    FUN_0040b9e0(param_1 + 0x460,"carriedByActor");
  }
  if (3 < 0x00000007) {
    FUN_0040b960(param_1 + 0x430,"weaponState");
    FUN_0040b960(param_1 + 0x6c4,"ammoCount");
    FUN_0040b960(param_1 + 0x6c8,"ammoType");
  }
  if (0x00000007 == 5) {
    FUN_0040b850(local_104,"descriptiveName");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040b8e0(param_1 + 0x6cc,"simTimer");
  return;
}
