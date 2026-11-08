// Name: FUN_00540450
// Address: 00540450
// Address Range: [[00540450, 005404f8]]
// Convention: unknown
// Signature: void FUN_00540450(int param_1)

#include "nocturne.h"

void FUN_00540450(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,"@modelName" + 1);
  FUN_0040b8e0(param_1 + 0x434,"weight");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b4b0(param_1 + 0x49c,"initialVelocity");
    FUN_0040b4b0(param_1 + 0x4a8,"initRotVel");
    FUN_0040b730(param_1 + 0x438,"triggerEvent");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b960(param_1 + 0x430,&DAT_005e68f2);
  return;
}
