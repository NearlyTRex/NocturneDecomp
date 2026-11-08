// Name: FUN_0050ef30
// Address: 0050ef30
// Address Range: [[0050ef30, 0050f0cb]]
// Convention: unknown
// Signature: void FUN_0050ef30(int param_1)

#include "nocturne.h"

void FUN_0050ef30(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,"?modelName" + 1);
  FUN_0040b680(param_1 + 0x2d4,"startEvent");
  FUN_0040b8b0(param_1 + 0x39c,"moving");
  FUN_0040b830(param_1 + 0x3a0,"param");
  FUN_0040b830(param_1 + 0x3a8,"maxAngle");
  if (1 < 0x00000008) {
    FUN_0040b680(param_1 + 0x3ac,"swooshSound");
  }
  if (2 < 0x00000008) {
    FUN_0040b680(param_1 + 0x3d0,"creak1Sound");
    FUN_0040b680(param_1 + 0x3f0,"creak2Sound");
    FUN_0040b830(param_1 + 0x3cc,"swooshPhaseBias");
  }
  if (3 < 0x00000008) {
    FUN_0040b8b0(param_1 + 0x428,"killHero");
    FUN_0040b8b0(param_1 + 0x42c,"killEnemy");
  }
  if (4 < 0x00000008) {
    FUN_0040b830(param_1 + 0x430,"decay");
    FUN_0040b830(param_1 + 0x434,"decayTimer");
  }
  if (5 < 0x00000008) {
    FUN_0040b8b0(param_1 + 0x438,"groundType");
  }
  if (6 < 0x00000008) {
    FUN_0040b680(param_1 + 0x338,"stopEvent");
  }
  if (0x00000008 < 8) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x43c,"oneShot");
  return;
}
