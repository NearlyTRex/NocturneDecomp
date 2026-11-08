// Name: FUN_00527a90
// Address: 00527a90
// Address Range: [[00527a90, 00527ba3]]
// Convention: unknown
// Signature: void FUN_00527a90(int param_1)

#include "nocturne.h"

void FUN_00527a90(int param_1)

{
  FUN_00509800(param_1);
  FUN_0040b680(param_1 + 0x206c8,"transformEvent");
  FUN_0040b680(param_1 + 0x2072c,"targetModelName");
  FUN_0040b830(param_1 + 0x21440,"morphTime");
  if ((1 < 0x00000008) && (0x00000008 < 5)) {
    FUN_0040ba30(param_1 + 0x158,"modelName");
    FUN_0040bab0(param_1 + 0x158,"motion state");
  }
  if (2 < 0x00000008) {
    FUN_0040b830(param_1 + 0x21444,"morphSize");
  }
  if (3 < 0x00000008) {
    FUN_0040b680(param_1 + 0x2074c,"nameOfTarget");
  }
  if (5 < 0x00000008) {
    FUN_0040b680(param_1 + 0x207ac,"transformWav");
  }
  if (6 < 0x00000008) {
    FUN_0040b680(param_1 + 0x2076c,"targetClass");
  }
  if (0x00000008 < 8) {
    return;
  }
  FUN_0040b680(param_1 + 0x2078c,"targetState");
  return;
}
