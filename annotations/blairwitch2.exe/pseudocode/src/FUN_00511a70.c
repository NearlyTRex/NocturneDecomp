// Name: FUN_00511a70
// Address: 00511a70
// Address Range: [[00511a70, 00511b49]]
// Convention: unknown
// Signature: void FUN_00511a70(int param_1)

#include "nocturne.h"

void FUN_00511a70(int param_1)

{
  FUN_005109e0(param_1);
  FUN_0040b730(param_1 + 0x24348,"transformEvent");
  FUN_0040b730(param_1 + 0x243ac,"wolfModelName");
  FUN_0040b8e0(param_1 + 0x25080,"morphTime");
  if ((1 < 0x00000006) && (0x00000006 < 5)) {
    FUN_0040bae0(param_1 + 0x2b4,"modelName");
    FUN_0040bb60(param_1 + 0x2b4,"motion state");
  }
  if (2 < 0x00000006) {
    FUN_0040b8e0(param_1 + 0x25084,"wolfSize");
  }
  if (3 < 0x00000006) {
    FUN_0040b730(param_1 + 0x243cc,"nameOfWolf");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b730(param_1 + 0x243ec,"transformWav");
  return;
}
