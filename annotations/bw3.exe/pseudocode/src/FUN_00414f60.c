// Name: FUN_00414f60
// Address: 00414f60
// Address Range: [[00414f60, 00414fc5]]
// Convention: unknown
// Signature: void FUN_00414f60(int param_1)

#include "nocturne.h"

void FUN_00414f60(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00408890(param_1);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18c)) {
    iVar2 = param_1 + 400;
    do {
      iVar1 = iVar1 + 1;
      FUN_0046e5e0(DAT_005f2afc,iVar2);
      iVar2 = iVar2 + 0x18;
    } while (iVar1 < *(int *)(param_1 + 0x18c));
  }
  if ((*(int *)(param_1 + 0xcb4) == 0) && (*(int *)(param_1 + 0x74c) == 0)) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
