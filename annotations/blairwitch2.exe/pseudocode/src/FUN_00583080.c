// Name: FUN_00583080
// Address: 00583080
// Address Range: [[00583080, 00583153]]
// Convention: unknown
// Signature: void FUN_00583080(int param_1)

#include "nocturne.h"

void FUN_00583080(int param_1)

{
  FUN_00487ec0(param_1);
  if (1 < 0x00000004) {
    FUN_0040bb60(param_1 + 0x2b4,"@human model motion state" + 1);
    FUN_0040bb60(param_1 + 0x10af8,"bat model motion state");
  }
  if (2 < 0x00000004) {
    FUN_0040b9e0(param_1 + 0xc3b88,"wayPoint0");
    FUN_0040b9e0(param_1 + 0xc3b8c,"wayPoint1");
    FUN_0040b9e0(param_1 + 0xc3b90,"wayPoint2");
    FUN_0040b9e0(param_1 + 0xc3b94,"wayPoint3");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b960(param_1 + 0xc2f3c,&DAT_005edb24);
  FUN_0040b8e0(param_1 + 0xc3b6c,"morphT");
  return;
}
