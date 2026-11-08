// Name: FUN_004f1c20
// Address: 004f1c20
// Address Range: [[004f1c20, 004f1cee]]
// Convention: unknown
// Signature: void FUN_004f1c20(int param_1)

#include "nocturne.h"

void FUN_004f1c20(int param_1)

{
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"speed");
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  FUN_0040b730(param_1 + 0x10b5c,"attackCondition");
  FUN_0040b960(param_1 + 0x4b6f0,"attackMode");
  FUN_0040b9e0(param_1 + 0x4b6f4,"mirrorPlaneActor");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040bb60(param_1 + 0x2b4,"motion state");
    FUN_0040b730(param_1 + 0x4b6f8,"morphActorType");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b730(param_1 + 0x10af8,"mirrorCondition");
  return;
}
