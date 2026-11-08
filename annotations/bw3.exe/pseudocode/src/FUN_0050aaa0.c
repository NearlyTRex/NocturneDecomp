// Name: FUN_0050aaa0
// Address: 0050aaa0
// Address Range: [[0050aaa0, 0050ab79]]
// Convention: unknown
// Signature: void FUN_0050aaa0(int param_1)

#include "nocturne.h"

void FUN_0050aaa0(int param_1)

{
  FUN_00509800(param_1);
  FUN_0040b680(param_1 + 0x206c8,"transformEvent");
  FUN_0040b680(param_1 + 0x2072c,"wolfModelName");
  FUN_0040b830(param_1 + 0x21400,"morphTime");
  if ((1 < 0x00000006) && (0x00000006 < 5)) {
    FUN_0040ba30(param_1 + 0x158,"modelName");
    FUN_0040bab0(param_1 + 0x158,"motion state");
  }
  if (2 < 0x00000006) {
    FUN_0040b830(param_1 + 0x21404,"wolfSize");
  }
  if (3 < 0x00000006) {
    FUN_0040b680(param_1 + 0x2074c,"nameOfWolf");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b680(param_1 + 0x2076c,"transformWav");
  return;
}
