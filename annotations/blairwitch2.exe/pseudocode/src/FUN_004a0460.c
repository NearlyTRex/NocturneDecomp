// Name: FUN_004a0460
// Address: 004a0460
// Address Range: [[004a0460, 004a057a]]
// Convention: unknown
// Signature: void FUN_004a0460(int param_1)

#include "nocturne.h"

void FUN_004a0460(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040b4b0(param_1 + 0x2b4,"?flameSize" + 1);
  if (1 < 0x00000007) {
    FUN_0040b960(param_1 + 0x304,"whichFlame");
    FUN_0040b8e0(param_1 + 0x308,"globeScalar");
  }
  if (2 < 0x00000007) {
    FUN_0040b730(param_1 + 0x314,"onEvent");
  }
  if (3 < 0x00000007) {
    FUN_0040b730(param_1 + 0x378,"onEvent");
  }
  if (4 < 0x00000007) {
    FUN_0040b960(param_1 + 0x310,"flameState");
  }
  if (5 < 0x00000007) {
    FUN_0040b8e0(param_1 + 0x3dc,"intensity");
    FUN_0040b8e0(param_1 + 0x3e0,"randomness");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040b960(param_1 + 0x3e4,"burnHero");
  FUN_0040b960(param_1 + 1000,"burnEnemy");
  return;
}
