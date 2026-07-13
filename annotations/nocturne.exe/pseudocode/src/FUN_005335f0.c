// Name: FUN_005335f0
// Address: 005335f0
// Address Range: [[005335f0, 0053373f]]
// Convention: unknown
// Signature: void FUN_005335f0(int param_1)

#include "nocturne.h"

void FUN_005335f0(int param_1)

{
  FUN_0040d2d0(param_1);
  FUN_0040ca00(param_1 + 0x150,">modelName" + 1);
  FUN_0040c900(param_1 + 0x2cc,"spikeType");
  FUN_0040c900(param_1 + 0x2d0,"spikeState");
  FUN_0040c900(param_1 + 0x2d4,"areWeActive");
  FUN_0040c880(param_1 + 0x2e4,"extendDistance");
  FUN_0040c6d0(param_1 + 0x2e8,"startEvent");
  FUN_0040c6d0(param_1 + 0x34c,"stopEvent");
  FUN_0040c6d0(param_1 + 0x3b0,"extendEvent");
  FUN_0040c6d0(param_1 + 0x414,"retractEvent");
  FUN_0040c880(param_1 + 0x478,"extendTime");
  FUN_0040c880(param_1 + 0x47c,"retractTime");
  FUN_0040c6d0(param_1 + 0x484,"extendSound");
  FUN_0040c6d0(param_1 + 0x4e8,"retractSound");
  FUN_0040c880(param_1 + 0x54c,"period");
  FUN_0040c880(param_1 + 0x550,"damageStrength");
  FUN_0040c880(param_1 + 0x554,"param");
  return;
}
