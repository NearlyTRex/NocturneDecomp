// Name: FUN_004c0b40
// Address: 004c0b40
// Address Range: [[004c0b40, 004c0be5]]
// Convention: unknown
// Signature: void FUN_004c0b40(int param_1)

#include "nocturne.h"

void FUN_004c0b40(int param_1)

{
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"?speed" + 1);
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  FUN_0040bb60(param_1 + 0x2b4,"motion state");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b960(param_1 + 0x10b28,"stoneRed");
  FUN_0040b960(param_1 + 0x10b2c,"stoneGreen");
  FUN_0040b960(param_1 + 0x10b30,"stoneBlue");
  FUN_0040b9e0(param_1 + 0x10b34,"homeBase");
  return;
}
