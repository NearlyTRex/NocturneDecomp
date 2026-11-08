// Name: FUN_0051b8d0
// Address: 0051b8d0
// Address Range: [[0051b8d0, 0051ba55]]
// Convention: unknown
// Signature: void FUN_0051b8d0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b8d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte local_24 [20];
  
  if (param_1[0x44c] != 0) {
    iVar2 = 0;
    piVar1 = param_1;
    if (0 < param_1[0x44c]) {
      do {
        iVar2 = iVar2 + 1;
        FUN_0051b4d0(param_1,piVar1[0x44d],piVar1[0x4b1]);
        piVar1 = piVar1 + 1;
      } while (iVar2 < param_1[0x44c]);
    }
    param_1[0x44c] = 0;
  }
  FUN_0051b7b0(param_1);
  if (-1 < param_1[1099]) {
    iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    *(int *)(iVar2 + 0x20) = param_1[0x448];
    *(int *)(iVar2 + 0x24) = param_1[0x449];
    *(int *)(iVar2 + 0x28) = param_1[0x44a];
    *(int *)(iVar2 + 0x2c) = param_1[1099];
    if (param_1[1099] != *param_1) {
      FUN_0040d0a0(local_24);
      FUN_0040d1c0(local_24);
      FUN_0040d220(local_24,&DAT_01d33b88,0x280,0x1e0);
      iVar2 = 0;
      do {
        FUN_00581f50();
        FUN_0040d9a0(local_24);
        FUN_00581fa0(0);
        iVar2 = iVar2 + 1;
        FUN_005acff0();
      } while (iVar2 < 3);
      FUN_0051b610(param_1,param_1[1099]);
      FUN_00551b90(0x01E82168);
      FUN_0054ec60(0x01E82168);
      *(uint *)(0x01E81C80 + 0x10) = 2;
      FUN_0040d0c0(local_24,0);
    }
    param_1[0x405] = 0;
    param_1[1099] = -1;
    param_1[0x44a] = 0;
    param_1[0x449] = param_1[0x44a];
    param_1[0x448] = param_1[0x449];
  }
  return;
}
