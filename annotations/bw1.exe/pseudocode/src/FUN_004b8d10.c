// Name: FUN_004b8d10
// Address: 004b8d10
// Address Range: [[004b8d10, 004b8e2a]]
// Convention: unknown
// Signature: void FUN_004b8d10(int param_1)

#include "nocturne.h"

void FUN_004b8d10(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b1c0(param_1 + 0x158,"?flameSize" + 1);
  if (1 < 0x00000007) {
    FUN_0040b670(param_1 + 0x1a8,"whichFlame");
    FUN_0040b5f0(param_1 + 0x1ac,"globeScalar");
  }
  if (2 < 0x00000007) {
    FUN_0040b440(param_1 + 0x1b8,"onEvent");
  }
  if (3 < 0x00000007) {
    FUN_0040b440(param_1 + 0x21c,"onEvent");
  }
  if (4 < 0x00000007) {
    FUN_0040b670(param_1 + 0x1b4,"flameState");
  }
  if (5 < 0x00000007) {
    FUN_0040b5f0(param_1 + 0x280,"intensity");
    FUN_0040b5f0(param_1 + 0x284,"randomness");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040b670(param_1 + 0x288,"burnHero");
  FUN_0040b670(param_1 + 0x28c,"burnEnemy");
  return;
}
