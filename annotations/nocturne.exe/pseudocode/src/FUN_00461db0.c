// Name: FUN_00461db0
// Address: 00461db0
// Address Range: [[00461db0, 00461ea7]]
// Convention: unknown
// Signature: void FUN_00461db0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461db0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (0 < _DAT_01b4d7ac) {
      puVar4 = &DAT_01b4d7b4;
      iVar6 = _DAT_01b4d7ac * 4;
      iVar3 = 0;
      do {
        *(byte **)(iVar3 + 0x1b748b4) = puVar4;
        iVar3 = iVar3 + 4;
        puVar4 = puVar4 + 0x20;
      } while (iVar3 < iVar6);
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      puVar4 = &LAB_00461d80;
    }
    else {
      puVar4 = &LAB_00461d50;
    }
    FUN_00563db8(0x1b748b4,_DAT_01b4d7ac,4,puVar4);
    *(uint *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00460fb0(param_1,1);
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < _DAT_01b4d7ac) {
      iVar5 = 0;
      do {
        iVar2 = **(int **)(iVar5 + 0x1b748b4);
        if (iVar6 != iVar2) {
          FUN_00461eb0(param_1,iVar2 * 0x48 + 0x1b796d4);
          iVar6 = iVar2;
        }
        piVar1 = (int *)(iVar5 + 0x1b748b4);
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        FUN_0045f5e0(param_1,*piVar1 + 0xc,*(uint *)(*piVar1 + 4));
      } while (iVar3 < _DAT_01b4d7ac);
    }
    FUN_00460fb0(param_1,0);
  }
  return;
}
