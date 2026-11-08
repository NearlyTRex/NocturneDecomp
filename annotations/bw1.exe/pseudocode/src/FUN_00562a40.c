// Name: FUN_00562a40
// Address: 00562a40
// Address Range: [[00562a40, 00562ae8]]
// Convention: unknown
// Signature: void FUN_00562a40(int param_1)

#include "nocturne.h"

void FUN_00562a40(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x158,"@modelName" + 1);
  FUN_0040b5f0(param_1 + 0x2d8,"weight");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b1c0(param_1 + 0x340,"initialVelocity");
    FUN_0040b1c0(param_1 + 0x34c,"initRotVel");
    FUN_0040b440(param_1 + 0x2dc,"triggerEvent");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b670(param_1 + 0x2d4,&DAT_005f1ac4);
  return;
}
