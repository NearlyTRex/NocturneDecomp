// Name: FUN_00484e00
// Address: 00484e00
// Address Range: [[00484e00, 00484ef7]]
// Convention: unknown
// Signature: void FUN_00484e00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484e00(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (0 < _DAT_01bc1280) {
      puVar4 = &DAT_01bc1288;
      iVar6 = _DAT_01bc1280 * 4;
      iVar3 = 0;
      do {
        *(byte **)(iVar3 + 0x1be8388) = puVar4;
        iVar3 = iVar3 + 4;
        puVar4 = puVar4 + 0x20;
      } while (iVar3 < iVar6);
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      puVar4 = &LAB_00484dd0;
    }
    else {
      puVar4 = &LAB_00484da0;
    }
    FUN_005bfc68(0x1be8388,_DAT_01bc1280,4,puVar4);
    *(uint *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00483d80(param_1,1);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < _DAT_01bc1280) {
      iVar5 = 0;
      do {
        iVar2 = **(int **)(iVar5 + 0x1be8388);
        if (iVar6 != iVar2) {
          FUN_00484f00(param_1,iVar2 * 0x48 + 0x1bed1a8);
          iVar6 = iVar2;
        }
        piVar1 = (int *)(iVar5 + 0x1be8388);
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        FUN_00482390(param_1,*piVar1 + 0xc,*(uint *)(*piVar1 + 4));
      } while (iVar3 < _DAT_01bc1280);
    }
    FUN_00483d80(param_1,0);
  }
  return;
}
