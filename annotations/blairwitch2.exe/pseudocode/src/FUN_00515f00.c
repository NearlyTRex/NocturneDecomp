// Name: FUN_00515f00
// Address: 00515f00
// Address Range: [[00515f00, 0051609b]]
// Convention: unknown
// Signature: void FUN_00515f00(int param_1)

#include "nocturne.h"

void FUN_00515f00(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,"?modelName" + 1);
  FUN_0040b730(param_1 + 0x430,"startEvent");
  FUN_0040b960(param_1 + 0x4f8,"moving");
  FUN_0040b8e0(param_1 + 0x4fc,"param");
  FUN_0040b8e0(param_1 + 0x504,"maxAngle");
  if (1 < 0x00000008) {
    FUN_0040b730(param_1 + 0x508,"swooshSound");
  }
  if (2 < 0x00000008) {
    FUN_0040b730(param_1 + 0x52c,"creak1Sound");
    FUN_0040b730(param_1 + 0x54c,"creak2Sound");
    FUN_0040b8e0(param_1 + 0x528,"swooshPhaseBias");
  }
  if (3 < 0x00000008) {
    FUN_0040b960(param_1 + 0x584,"killHero");
    FUN_0040b960(param_1 + 0x588,"killEnemy");
  }
  if (4 < 0x00000008) {
    FUN_0040b8e0(param_1 + 0x58c,"decay");
    FUN_0040b8e0(param_1 + 0x590,"decayTimer");
  }
  if (5 < 0x00000008) {
    FUN_0040b960(param_1 + 0x594,"groundType");
  }
  if (6 < 0x00000008) {
    FUN_0040b730(param_1 + 0x494,"stopEvent");
  }
  if (0x00000008 < 8) {
    return;
  }
  FUN_0040b960(param_1 + 0x598,"oneShot");
  return;
}
