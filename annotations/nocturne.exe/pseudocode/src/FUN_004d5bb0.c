// Name: FUN_004d5bb0
// Address: 004d5bb0
// Address Range: [[004d5bb0, 004d5c7e]]
// Convention: unknown
// Signature: void FUN_004d5bb0(int param_1)

#include "nocturne.h"

void FUN_004d5bb0(int param_1)

{
  FUN_004796c0(param_1);
  FUN_0040c880(param_1 + 0xbc8c,"speed");
  FUN_0040ca80(param_1 + 0x150,"modelName");
  FUN_0040c6d0(param_1 + 0xbd88,"attackCondition");
  FUN_0040c900(param_1 + 0x4691c,"attackMode");
  FUN_0040c980(param_1 + 0x46920,"mirrorPlaneActor");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040cb00(param_1 + 0x150,"motion state");
    FUN_0040c6d0(param_1 + 0x46924,"morphActorType");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040c6d0(param_1 + 0xbd24,"mirrorCondition");
  return;
}
