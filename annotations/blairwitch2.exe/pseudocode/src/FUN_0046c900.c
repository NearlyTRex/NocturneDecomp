// Name: FUN_0046c900
// Address: 0046c900
// Address Range: [[0046c900, 0046c9f7]]
// Convention: unknown
// Signature: void FUN_0046c900(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c900(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (0 < _DAT_01ba5cc4) {
      puVar4 = &DAT_01ba5ccc;
      iVar6 = _DAT_01ba5cc4 * 4;
      iVar3 = 0;
      do {
        *(byte **)(iVar3 + 0x1bccdcc) = puVar4;
        iVar3 = iVar3 + 4;
        puVar4 = puVar4 + 0x20;
      } while (iVar3 < iVar6);
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      puVar4 = &LAB_0046c8d0;
    }
    else {
      puVar4 = &LAB_0046c8a0;
    }
    FUN_005b78b8(0x1bccdcc,_DAT_01ba5cc4,4,puVar4);
    *(uint *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_0046b880(param_1,1);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < _DAT_01ba5cc4) {
      iVar5 = 0;
      do {
        iVar2 = **(int **)(iVar5 + 0x1bccdcc);
        if (iVar6 != iVar2) {
          FUN_0046ca00(param_1,iVar2 * 0x48 + 0x1bd1bec);
          iVar6 = iVar2;
        }
        piVar1 = (int *)(iVar5 + 0x1bccdcc);
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        FUN_00469e80(param_1,*piVar1 + 0xc,*(uint *)(*piVar1 + 4));
      } while (iVar3 < _DAT_01ba5cc4);
    }
    FUN_0046b880(param_1,0);
  }
  return;
}
