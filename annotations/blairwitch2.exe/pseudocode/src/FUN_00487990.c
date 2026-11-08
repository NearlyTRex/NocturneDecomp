// Name: FUN_00487990
// Address: 00487990
// Address Range: [[00487990, 00487c68]]
// Convention: unknown
// Signature: void FUN_00487990(int param_1)

#include "nocturne.h"

void FUN_00487990(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040b960(param_1 + 0x2b4,"?emitterType" + 1);
  FUN_0040b4b0(param_1 + 0x2b8,"emitterSize");
  FUN_0040b730(param_1 + 0x2c8,"eventOn");
  FUN_0040b730(param_1 + 0x32c,"eventOff");
  if (1 < 0x0000000E) {
    FUN_0040b960(param_1 + 0x2c4,"emitterState");
  }
  if (*(int *)(param_1 + 0x2b4) == 3) {
    FUN_0040b960(param_1 + 0x398,"laserR");
    FUN_0040b960(param_1 + 0x39c,"laserG");
    FUN_0040b960(param_1 + 0x3a0,"laserB");
    if (2 < 0x0000000E) {
      FUN_0040b960(param_1 + 0x394,"laserType");
    }
  }
  if (2 < 0x0000000E) {
    FUN_0040b8e0(param_1 + 0x390,"maxEmitTime");
    FUN_0040b8e0(param_1 + 0x5c4,"emitPeriod");
  }
  if (3 < 0x0000000E) {
    FUN_0040ba60(param_1 + 0x3a4,"modelName");
    FUN_0040b8e0(param_1 + 0x520,"rockSpeed");
  }
  if (4 < 0x0000000E) {
    FUN_0040b960(param_1 + 0x540,"periodicFlag");
    FUN_0040b8e0(param_1 + 0x544,"maxWaitTime");
  }
  if (5 < 0x0000000E) {
    FUN_0040b9e0(param_1 + 0x54c,"destActor");
  }
  if (6 < 0x0000000E) {
    FUN_0040b730(param_1 + 0x554,"wavName");
    FUN_0040b960(param_1 + 0x5bc,"sfxType");
  }
  if (7 < 0x0000000E) {
    FUN_0040b8e0(param_1 + 0x524,"windResist");
  }
  if (8 < 0x0000000E) {
    FUN_0040b8e0(param_1 + 0x550,"soundRadius");
  }
  if (9 < 0x0000000E) {
    FUN_0040b8e0(param_1 + 0x528,"maxSpeed");
  }
  if (10 < 0x0000000E) {
    FUN_0040b960(param_1 + 0x52c,"EFireflyType");
    FUN_0040b960(param_1 + 0x530,"fizzle");
    FUN_0040b960(param_1 + 0x534,"bright");
    FUN_0040b960(param_1 + 0x538,"deltaMult");
  }
  if (0xb < 0x0000000E) {
    FUN_0040b8e0(param_1 + 0x53c,"FFSize");
  }
  if (0xc < 0x0000000E) {
    FUN_0040b8e0(param_1 + 0x614,"emitRadius");
  }
  if (0x0000000E < 0xe) {
    return;
  }
  FUN_0040b8e0(param_1 + 0x618,"bloodVel");
  return;
}
