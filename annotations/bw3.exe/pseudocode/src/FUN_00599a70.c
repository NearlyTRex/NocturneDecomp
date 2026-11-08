// Name: FUN_00599a70
// Address: 00599a70
// Address Range: [[00599a70, 00599b14]]
// Convention: unknown
// Signature: undefined4 FUN_00599a70(int param_1)

#include "nocturne.h"

uint FUN_00599a70(int param_1)

{
  int iVar1;
  
  if ((*(float *)(param_1 + 0x214a0) <= 1.0) && (*(int *)(param_1 + 0x24fc) == 0)) {
    FUN_004087f0(param_1);
    if ((*(uint *)(param_1 + 0x214a0) & 0x7fffffff) == 0) {
      FUN_0042d8e0(param_1);
      FUN_00408830(param_1);
      return 1;
    }
    iVar1 = param_1 + 0x20874;
    FUN_004fab90(iVar1,0,param_1 + 0x158,0);
    FUN_004fab90(iVar1,1,*(int *)(param_1 + 0x20870) + 0x158,0);
    FUN_004fb0e0(iVar1,*(uint *)(param_1 + 0x214a0));
    FUN_00408830(param_1);
    return 1;
  }
  return 0;
}
