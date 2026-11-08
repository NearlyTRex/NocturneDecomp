// Name: FUN_0046e4e0
// Address: 0046e4e0
// Address Range: [[0046e4e0, 0046e5d7]]
// Convention: unknown
// Signature: void FUN_0046e4e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e4e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (0 < _DAT_01bdd858) {
      puVar4 = &DAT_01bdd860;
      iVar6 = _DAT_01bdd858 * 4;
      iVar3 = 0;
      do {
        *(byte **)(iVar3 + 0x1c04960) = puVar4;
        iVar3 = iVar3 + 4;
        puVar4 = puVar4 + 0x20;
      } while (iVar3 < iVar6);
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      puVar4 = &LAB_0046e4b0;
    }
    else {
      puVar4 = &LAB_0046e480;
    }
    FUN_005a29e8(0x1c04960,_DAT_01bdd858,4,puVar4);
    *(uint *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_0046d460(param_1,1);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < _DAT_01bdd858) {
      iVar5 = 0;
      do {
        iVar2 = **(int **)(iVar5 + 0x1c04960);
        if (iVar6 != iVar2) {
          FUN_0046e5e0(param_1,iVar2 * 0x48 + 0x1c09780);
          iVar6 = iVar2;
        }
        piVar1 = (int *)(iVar5 + 0x1c04960);
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        FUN_0046ba70(param_1,*piVar1 + 0xc,*(uint *)(*piVar1 + 4));
      } while (iVar3 < _DAT_01bdd858);
    }
    FUN_0046d460(param_1,0);
  }
  return;
}
