// Name: FUN_0045ee60
// Address: 0045ee60
// Address Range: [[0045ee60, 0045eeda]]
// Convention: unknown
// Signature: void FUN_0045ee60(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ee60(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_00404610(param_2 + 8), iVar1 != 0)) {
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
    FUN_0045ed80(param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
  }
  return;
}
