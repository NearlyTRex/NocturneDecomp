// Name: FUN_004c39b0
// Address: 004c39b0
// Address Range: [[004c39b0, 004c3ab4]]
// Convention: unknown
// Signature: void FUN_004c39b0(int param_1)

#include "nocturne.h"

void FUN_004c39b0(int param_1)

{
  FUN_00487ec0(param_1);
  if (0x00000007 < 4) {
    FUN_0040b8e0(param_1 + 0x10a60,"?speed" + 1);
  }
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  if ((1 < 0x00000007) && (0x00000007 < 7)) {
    FUN_0040b8e0(param_1 + 0x10a70,"guardDistance");
  }
  if (2 < 0x00000007) {
    FUN_0040b960(param_1 + 0x10b14,"livesLeft");
  }
  if (4 < 0x00000007) {
    FUN_0040bb60(param_1 + 0x2b4,"motion state");
  }
  if (0x00000007 < 6) {
    return;
  }
  FUN_0040bc50(param_1 + 0x2b4,"partStatus");
  FUN_0040b960(param_1 + 0x10b18,"spasmCount");
  FUN_0040b960(param_1 + 0x10b14,"livesLeft");
  FUN_0040b960(param_1 + 0x10b04,"ariseTimer");
  return;
}
