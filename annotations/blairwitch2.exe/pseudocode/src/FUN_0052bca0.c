// Name: FUN_0052bca0
// Address: 0052bca0
// Address Range: [[0052bca0, 0052bd12]]
// Convention: unknown
// Signature: void FUN_0052bca0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052bca0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10c);
  iVar3 = *(int *)(param_1 + 0x110);
  iVar1 = *(int *)(param_1 + 0x108);
  if (param_1 == _DAT_0200a3a4) {
    iVar1 = (iVar1 * 3) / 2;
    iVar2 = (iVar2 * 3) / 2;
    iVar3 = (iVar3 * 3) / 2;
  }
  FUN_005344c0(0x01E661B8,iVar1,iVar2,iVar3);
  return;
}
