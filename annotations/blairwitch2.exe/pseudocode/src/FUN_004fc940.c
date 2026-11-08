// Name: FUN_004fc940
// Address: 004fc940
// Address Range: [[004fc940, 004fca82]]
// Convention: unknown
// Signature: void FUN_004fc940(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc940(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte local_24 [20];
  
  if (param_1[1099] != 0) {
    iVar2 = 0;
    piVar1 = param_1;
    if (0 < param_1[1099]) {
      do {
        iVar2 = iVar2 + 1;
        FUN_004fc570(param_1,piVar1[0x44c],piVar1[0x4b0]);
        piVar1 = piVar1 + 1;
      } while (iVar2 < param_1[1099]);
    }
    param_1[1099] = 0;
  }
  FUN_004fc820(param_1);
  if (-1 < param_1[0x44a]) {
    iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    *(int *)(iVar2 + 0x20) = param_1[0x447];
    *(int *)(iVar2 + 0x24) = param_1[0x448];
    *(int *)(iVar2 + 0x28) = param_1[0x449];
    *(int *)(iVar2 + 0x2c) = param_1[0x44a];
    if (param_1[0x44a] != *param_1) {
      FUN_0055b1f0();
      FUN_0040d420(local_24);
      FUN_0040d540(local_24);
      FUN_00589560();
      FUN_004fc6b0(param_1,param_1[0x44a]);
      FUN_005308e0(0x01E661B8);
      FUN_0052d980(0x01E661B8);
      *(uint *)(0x01E65CD0 + 0x10) = 2;
      FUN_0040d440(local_24,0);
    }
    param_1[0x44a] = -1;
    param_1[0x449] = 0;
    param_1[0x448] = param_1[0x449];
    param_1[0x447] = param_1[0x448];
  }
  return;
}
