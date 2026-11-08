// Name: FUN_005109b0
// Address: 005109b0
// Address Range: [[005109b0, 00510a7e]]
// Convention: unknown
// Signature: void FUN_005109b0(int param_1)

#include "nocturne.h"

void FUN_005109b0(int param_1)

{
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"speed");
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  FUN_0040b440(param_1 + 0xc2cc,"attackCondition");
  FUN_0040b670(param_1 + 0x46e60,"attackMode");
  FUN_0040b6f0(param_1 + 0x46e64,"mirrorPlaneActor");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b870(param_1 + 0x158,"motion state");
    FUN_0040b440(param_1 + 0x46e68,"morphActorType");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b440(param_1 + 0xc268,"mirrorCondition");
  return;
}
