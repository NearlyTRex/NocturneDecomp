// Name: FUN_005a6cc0
// Address: 005a6cc0
// Address Range: [[005a6cc0, 005a6d93]]
// Convention: unknown
// Signature: void FUN_005a6cc0(int param_1)

#include "nocturne.h"

void FUN_005a6cc0(int param_1)

{
  FUN_004a0520(param_1);
  if (1 < 0x00000004) {
    FUN_0040b870(param_1 + 0x158,"@human model motion state" + 1);
    FUN_0040b870(param_1 + 0xc268,"bat model motion state");
  }
  if (2 < 0x00000004) {
    FUN_0040b6f0(param_1 + 0xbf3e8,"wayPoint0");
    FUN_0040b6f0(param_1 + 0xbf3ec,"wayPoint1");
    FUN_0040b6f0(param_1 + 0xbf3f0,"wayPoint2");
    FUN_0040b6f0(param_1 + 0xbf3f4,"wayPoint3");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b670(param_1 + 0xbe79c,&DAT_005f8e80);
  FUN_0040b5f0(param_1 + 0xbf3cc,"morphT");
  return;
}
