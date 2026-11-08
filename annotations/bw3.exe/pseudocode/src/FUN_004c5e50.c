// Name: FUN_004c5e50
// Address: 004c5e50
// Address Range: [[004c5e50, 004c5ef5]]
// Convention: unknown
// Signature: void FUN_004c5e50(int param_1)

#include "nocturne.h"

void FUN_004c5e50(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  FUN_0040bab0(param_1 + 0x158,"motion state");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b8b0(param_1 + 0xd084,"stoneRed");
  FUN_0040b8b0(param_1 + 0xd088,"stoneGreen");
  FUN_0040b8b0(param_1 + 0xd08c,"stoneBlue");
  FUN_0040b930(param_1 + 0xd090,"homeBase");
  return;
}
