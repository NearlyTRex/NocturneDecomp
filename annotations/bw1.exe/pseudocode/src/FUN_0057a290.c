// Name: FUN_0057a290
// Address: 0057a290
// Address Range: [[0057a290, 0057a336]]
// Convention: unknown
// Signature: undefined4 FUN_0057a290(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0057a290(int param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_006235d0 < 0) {
    DAT_006235d0 = 0;
    Ordinal_2(&LAB_00579f70,0);
  }
  if ((-1 < param_1) && (param_1 < DAT_006235d0)) {
    *(int *)(param_2 + 0x104) = param_1;
    param_1 = param_1 * 0x11c;
    *(uint *)(param_2 + 0x100) = 1;
    uVar1 = *(uint *)(param_1 + 0x2c8115c);
    *(uint *)(param_2 + 0x10c) = 0;
    *(uint *)(param_2 + 0x108) = uVar1;
    *(uint *)(param_2 + 0x114) = *(uint *)(param_1 + 0x2c81158);
    *(uint *)(param_2 + 0x110) = *(uint *)(param_1 + 0x2c81044);
    FUN_005bfb40(param_2,"DirectSound: %s",param_1 + 0x2c81058);
    return 1;
  }
  return 0;
}
