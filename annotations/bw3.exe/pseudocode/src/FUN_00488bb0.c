// Name: FUN_00488bb0
// Address: 00488bb0
// Address Range: [[00488bb0, 00488e88]]
// Convention: unknown
// Signature: void FUN_00488bb0(int param_1)

#include "nocturne.h"

void FUN_00488bb0(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b8b0(param_1 + 0x158,"?emitterType" + 1);
  FUN_0040b400(param_1 + 0x15c,"emitterSize");
  FUN_0040b680(param_1 + 0x16c,"eventOn");
  FUN_0040b680(param_1 + 0x1d0,"eventOff");
  if (1 < 0x0000000E) {
    FUN_0040b8b0(param_1 + 0x168,"emitterState");
  }
  if (*(int *)(param_1 + 0x158) == 3) {
    FUN_0040b8b0(param_1 + 0x23c,"laserR");
    FUN_0040b8b0(param_1 + 0x240,"laserG");
    FUN_0040b8b0(param_1 + 0x244,"laserB");
    if (2 < 0x0000000E) {
      FUN_0040b8b0(param_1 + 0x238,"laserType");
    }
  }
  if (2 < 0x0000000E) {
    FUN_0040b830(param_1 + 0x234,"maxEmitTime");
    FUN_0040b830(param_1 + 0x468,"emitPeriod");
  }
  if (3 < 0x0000000E) {
    FUN_0040b9b0(param_1 + 0x248,"modelName");
    FUN_0040b830(param_1 + 0x3c4,"rockSpeed");
  }
  if (4 < 0x0000000E) {
    FUN_0040b8b0(param_1 + 0x3e4,"periodicFlag");
    FUN_0040b830(param_1 + 1000,"maxWaitTime");
  }
  if (5 < 0x0000000E) {
    FUN_0040b930(param_1 + 0x3f0,"destActor");
  }
  if (6 < 0x0000000E) {
    FUN_0040b680(param_1 + 0x3f8,"wavName");
    FUN_0040b8b0(param_1 + 0x460,"sfxType");
  }
  if (7 < 0x0000000E) {
    FUN_0040b830(param_1 + 0x3c8,"windResist");
  }
  if (8 < 0x0000000E) {
    FUN_0040b830(param_1 + 0x3f4,"soundRadius");
  }
  if (9 < 0x0000000E) {
    FUN_0040b830(param_1 + 0x3cc,"maxSpeed");
  }
  if (10 < 0x0000000E) {
    FUN_0040b8b0(param_1 + 0x3d0,"EFireflyType");
    FUN_0040b8b0(param_1 + 0x3d4,"fizzle");
    FUN_0040b8b0(param_1 + 0x3d8,"bright");
    FUN_0040b8b0(param_1 + 0x3dc,"deltaMult");
  }
  if (0xb < 0x0000000E) {
    FUN_0040b830(param_1 + 0x3e0,"FFSize");
  }
  if (0xc < 0x0000000E) {
    FUN_0040b830(param_1 + 0x4b8,"emitRadius");
  }
  if (0x0000000E < 0xe) {
    return;
  }
  FUN_0040b830(param_1 + 0x4bc,"bloodVel");
  return;
}
