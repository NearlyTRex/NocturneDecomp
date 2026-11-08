// Name: FUN_005308e0
// Address: 005308e0
// Address Range: [[005308e0, 00530973]]
// Convention: unknown
// Signature: void FUN_005308e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005308e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01fc8d00) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(&DAT_01fc8d04 + iVar2);
      if (iVar1 != 0) {
        (*(code *)**(uint **)(iVar1 + 0x3c))(iVar1,2);
      }
      iVar1 = _DAT_01fc8d00;
      iVar3 = iVar3 + 1;
      *(uint *)(&DAT_01fc8d04 + iVar2) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  _DAT_01fc8d00 = 0;
  if (0 < *(int *)(param_1 + 0x19a2c)) {
    iVar2 = param_1 + 0x19a30;
    do {
      FUN_0053b8c0(iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1898;
    } while (iVar3 < *(int *)(param_1 + 0x19a2c));
  }
  FUN_00449f60();
  FUN_0043b730(0x1fc7838);
  return;
}
