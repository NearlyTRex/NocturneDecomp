// Name: FUN_005ad9f0
// Address: 005ad9f0
// Address Range: [[005ad9f0, 005ada4f]]
// Convention: unknown
// Signature: void FUN_005ad9f0(int param_1)

#include "nocturne.h"

void FUN_005ad9f0(int param_1)

{
  FUN_0041c7f0(param_1);
  FUN_0040b8e0(param_1 + 0x7dc,"@sleepTime" + 1);
  FUN_0040b8e0(param_1 + 0x7e0,"effectTime");
  FUN_0040b8e0(param_1 + 0x7e4,"effectDamage");
  FUN_0040b8e0(param_1 + 0x7d4,"triggerRadius");
  return;
}
