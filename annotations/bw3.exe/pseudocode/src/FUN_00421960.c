// Name: FUN_00421960
// Address: 00421960
// Address Range: [[00421960, 00421a98]]
// Convention: unknown
// Signature: void FUN_00421960(int param_1)

#include "nocturne.h"

void FUN_00421960(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00489120(param_1);
  FUN_0040b8b0(param_1 + 0xd058,"?count" + 1);
  FUN_0040b8b0(param_1 + 0x1345c,"modelCount");
  if (DAT_007df9b8 == 1) {
    FUN_004625f0(param_1 + 0x13460,&DAT_005b7782);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1345c)) {
    iVar1 = param_1 + 0x13460;
    do {
      iVar2 = iVar2 + 1;
      FUN_0040b9b0(iVar1,"modelName");
      iVar1 = iVar1 + 0x17c;
    } while (iVar2 < *(int *)(param_1 + 0x1345c));
  }
  FUN_0040b8b0(param_1 + 0x1bd2c,"allowChase");
  FUN_0040b8b0(param_1 + 0x1bd30,"allowSwarm");
  FUN_0040b680(param_1 + 0x1bd3c,"allowChaseEvent");
  FUN_0040b680(param_1 + 0x1bda0,"allowSwarmEvent");
  FUN_0040b680(param_1 + 0x1be04,"animateEvent");
  if (1 < 0x00000002) {
    FUN_0040b830(param_1 + 0x1bd34,"remove_bug_timer");
    FUN_0040b830(param_1 + 0x1bd38,"max_life_timer");
    return;
  }
  return;
}
