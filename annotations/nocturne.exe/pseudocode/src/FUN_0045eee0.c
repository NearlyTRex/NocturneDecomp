// Name: FUN_0045eee0
// Address: 0045eee0
// Address Range: [[0045eee0, 0045ef89]]
// Convention: unknown
// Signature: void FUN_0045eee0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045eee0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_00404610(param_2 + 8), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar1 = param_2;
      iVar2 = 0;
      do {
        *(uint *)(&DAT_01b4d76c + iVar2) = *(uint *)(iVar1 + 0x18);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0xc;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (*(int *)(param_1 + 4) == 0) {
      _DAT_01c039a0 = 0xc0;
      _DAT_01c039a4 = 6;
      _DAT_01c00c7c = &LAB_00463d98;
    }
    else {
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = 0;
      _DAT_01c00c7c = &LAB_00463a79;
    }
    FUN_0045ed80(param_1,*(uint *)(param_2 + 4),&DAT_01b4d76c);
  }
  return;
}
