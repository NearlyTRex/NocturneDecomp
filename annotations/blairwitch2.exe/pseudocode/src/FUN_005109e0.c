// Name: FUN_005109e0
// Address: 005109e0
// Address Range: [[005109e0, 00510aa5]]
// Convention: unknown
// Signature: void FUN_005109e0(int param_1)

#include "nocturne.h"

void FUN_005109e0(int param_1)

{
  if (0x00000006 < 2) {
    FUN_0040c330(param_1);
    FUN_0040b8e0(param_1 + 0x25a8,"hitPoints");
    return;
  }
  FUN_00422c30(param_1);
  if (2 < 0x00000006) {
    FUN_0040bae0(param_1 + 0x2b4,"modelName");
    FUN_0040bb60(param_1 + 0x2b4,"motion state");
  }
  if (3 < 0x00000006) {
    FUN_0040b960(param_1 + 0x2433c,"shootMe");
  }
  if (4 < 0x00000006) {
    FUN_0040b960(param_1 + 0x24340,"poolMe");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b8e0(param_1 + 0x24344,"speed");
  return;
}
