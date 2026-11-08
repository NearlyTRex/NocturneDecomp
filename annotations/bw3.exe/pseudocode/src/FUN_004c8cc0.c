// Name: FUN_004c8cc0
// Address: 004c8cc0
// Address Range: [[004c8cc0, 004c8dc4]]
// Convention: unknown
// Signature: void FUN_004c8cc0(int param_1)

#include "nocturne.h"

void FUN_004c8cc0(int param_1)

{
  FUN_00489120(param_1);
  if (0x00000007 < 4) {
    FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  }
  FUN_0040ba30(param_1 + 0x158,"modelName");
  if ((1 < 0x00000007) && (0x00000007 < 7)) {
    FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  if (2 < 0x00000007) {
    FUN_0040b8b0(param_1 + 0xd070,"livesLeft");
  }
  if (4 < 0x00000007) {
    FUN_0040bab0(param_1 + 0x158,"motion state");
  }
  if (0x00000007 < 6) {
    return;
  }
  FUN_0040bba0(param_1 + 0x158,"partStatus");
  FUN_0040b8b0(param_1 + 0xd074,"spasmCount");
  FUN_0040b8b0(param_1 + 0xd070,"livesLeft");
  FUN_0040b8b0(param_1 + 0xd060,"ariseTimer");
  return;
}
