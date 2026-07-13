// Name: FUN_00421880
// Address: 00421880
// Address Range: [[00421880, 00421998]]
// Convention: unknown
// Signature: void FUN_00421880(int param_1)

#include "nocturne.h"

void FUN_00421880(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004796c0(param_1);
  FUN_0040c900(param_1 + 0xbd28,"?count" + 1);
  FUN_0040c900(param_1 + 0x1212c,"modelCount");
  if (DAT_00763e88 == 1) {
    iVar1 = param_1 + 0x12130;
    do {
      FUN_00454580(iVar1,&DAT_00579c6e);
      iVar1 = iVar1 + 0x17c;
    } while (iVar1 != param_1 + 0x12720);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1212c)) {
    iVar2 = param_1 + 0x12130;
    do {
      iVar1 = iVar1 + 1;
      FUN_0040ca00(iVar2,"modelName");
      iVar2 = iVar2 + 0x17c;
    } while (iVar1 < *(int *)(param_1 + 0x1212c));
  }
  FUN_0040c900(param_1 + 0x19700,"allowChase");
  FUN_0040c900(param_1 + 0x19704,"allowSwarm");
  FUN_0040c6d0(param_1 + 0x19708,"allowChaseEvent");
  FUN_0040c6d0(param_1 + 0x1976c,"allowSwarmEvent");
  FUN_0040c6d0(param_1 + 0x197d0,"animateEvent");
  return;
}
