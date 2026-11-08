// Name: FUN_00551b90
// Address: 00551b90
// Address Range: [[00551b90, 00551c23]]
// Convention: unknown
// Signature: void FUN_00551b90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551b90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01fe4cb4) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(&DAT_01fe4cb8 + iVar2);
      if (iVar1 != 0) {
        (*(code *)**(uint **)(iVar1 + 0x3c))(iVar1,2);
      }
      iVar1 = _DAT_01fe4cb4;
      iVar3 = iVar3 + 1;
      *(uint *)(&DAT_01fe4cb8 + iVar2) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  _DAT_01fe4cb4 = 0;
  if (0 < *(int *)(param_1 + 0x19a2c)) {
    iVar2 = param_1 + 0x19a30;
    do {
      FUN_0055d190(iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1898;
    } while (iVar3 < *(int *)(param_1 + 0x19a2c));
  }
  FUN_00462760();
  FUN_0044cdf0(0x1fe37ec);
  return;
}
