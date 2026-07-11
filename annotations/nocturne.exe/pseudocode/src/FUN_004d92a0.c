// Name: FUN_004d92a0
// Address: 004d92a0
// Address Range: [[004d92a0, 004d93cc]]
// Convention: unknown
// Signature: void FUN_004d92a0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d92a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x14b] != 0) {
    iVar2 = 0;
    piVar1 = param_1;
    if (0 < param_1[0x14b]) {
      do {
        iVar2 = iVar2 + 1;
        FUN_004d8f90(param_1,piVar1[0x14c],piVar1[0x1b0]);
        piVar1 = piVar1 + 1;
      } while (iVar2 < param_1[0x14b]);
    }
    param_1[0x14b] = 0;
  }
  FUN_004d9180(param_1);
  if (-1 < param_1[0x14a]) {
    iVar2 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    *(int *)(iVar2 + 0x20) = param_1[0x147];
    *(int *)(iVar2 + 0x24) = param_1[0x148];
    *(int *)(iVar2 + 0x28) = param_1[0x149];
    *(int *)(iVar2 + 0x2c) = param_1[0x14a];
    if (param_1[0x14a] != *param_1) {
      FUN_0052ee70();
      FUN_00402600("Changing sets...",0,0);
      FUN_00402600("Insert wipe here...",0,0xb);
      FUN_00553910();
      FUN_004d9020(param_1,param_1[0x14a]);
      FUN_0050ad20(0x01E57284);
      FUN_005084c0(0x01E57284);
      *(uint *)(0x01E56DA0 + 0x10) = 2;
    }
    param_1[0x14a] = -1;
    param_1[0x149] = 0;
    param_1[0x148] = param_1[0x149];
    param_1[0x147] = param_1[0x148];
  }
  return;
}
