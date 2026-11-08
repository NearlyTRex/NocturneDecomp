// Name: FUN_00537520
// Address: 00537520
// Address Range: [[00537520, 005375b3]]
// Convention: unknown
// Signature: void FUN_00537520(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537520(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_0203a414) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(&DAT_0203a418 + iVar2);
      if (iVar1 != 0) {
        (*(code *)**(uint **)(iVar1 + 0x3c))(iVar1,2);
      }
      iVar1 = _DAT_0203a414;
      iVar3 = iVar3 + 1;
      *(uint *)(&DAT_0203a418 + iVar2) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  _DAT_0203a414 = 0;
  if (0 < *(int *)(param_1 + 0x19a2c)) {
    iVar2 = param_1 + 0x19a30;
    do {
      FUN_00542b50(iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1898;
    } while (iVar3 < *(int *)(param_1 + 0x19a2c));
  }
  FUN_0045c470();
  FUN_00448f30(0x2038f4c);
  return;
}
