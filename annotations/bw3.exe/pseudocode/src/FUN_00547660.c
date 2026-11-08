// Name: FUN_00547660
// Address: 00547660
// Address Range: [[00547660, 00547708]]
// Convention: unknown
// Signature: void FUN_00547660(int param_1)

#include "nocturne.h"

void FUN_00547660(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,"@modelName" + 1);
  FUN_0040b830(param_1 + 0x2d8,"weight");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b400(param_1 + 0x340,"initialVelocity");
    FUN_0040b400(param_1 + 0x34c,"initRotVel");
    FUN_0040b680(param_1 + 0x2dc,"triggerEvent");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b8b0(param_1 + 0x2d4,&DAT_005d15ef);
  return;
}
