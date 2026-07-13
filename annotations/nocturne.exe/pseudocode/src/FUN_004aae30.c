// Name: FUN_004aae30
// Address: 004aae30
// Address Range: [[004aae30, 004aaf34]]
// Convention: unknown
// Signature: void FUN_004aae30(int param_1)

#include "nocturne.h"

void FUN_004aae30(int param_1)

{
  FUN_004796c0(param_1);
  if (0x00000007 < 4) {
    FUN_0040c880(param_1 + 0xbc8c,"?speed" + 1);
  }
  FUN_0040ca80(param_1 + 0x150,"modelName");
  if ((1 < 0x00000007) && (0x00000007 < 7)) {
    FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  if (2 < 0x00000007) {
    FUN_0040c900(param_1 + 0xbd40,"livesLeft");
  }
  if (4 < 0x00000007) {
    FUN_0040cb00(param_1 + 0x150,"motion state");
  }
  if (0x00000007 < 6) {
    return;
  }
  FUN_0040cbf0(param_1 + 0x150,"partStatus");
  FUN_0040c900(param_1 + 0xbd44,"spasmCount");
  FUN_0040c900(param_1 + 0xbd40,"livesLeft");
  FUN_0040c900(param_1 + 0xbd30,"ariseTimer");
  return;
}
