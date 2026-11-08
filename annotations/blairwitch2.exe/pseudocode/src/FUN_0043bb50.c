// Name: FUN_0043bb50
// Address: 0043bb50
// Address Range: [[0043bb50, 0043bc25]]
// Convention: unknown
// Signature: void FUN_0043bb50(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bb50(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((((*(int *)(param_1 + 0x11d4) < param_2[1]) && (*(int *)(param_1 + 0x11d8) < param_2[3])) &&
      (*param_2 < *(int *)(param_1 + 0x11dc))) && (param_2[2] < *(int *)(param_1 + 0x11e0))) {
    if (_DAT_01c37788 != 0) {
      FUN_00560050(0,0,0,DAT_006141b8 + -1,DAT_006141bc + -1);
      return;
    }
    iVar4 = param_2[2];
    if (iVar4 <= param_2[3]) {
      iVar3 = iVar4 * 4;
      do {
        piVar1 = (int *)(&DAT_01c2b64c + iVar3);
        iVar2 = *(int *)(param_1 + 0x144) * iVar4;
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
        FUN_00470201(*param_2 * 4 + *piVar1,*(int *)(param_1 + 0x15c) + (iVar2 + *param_2) * 4,
                     (param_2[1] - *param_2) * 4 + 4);
      } while (iVar4 <= param_2[3]);
    }
  }
  return;
}
