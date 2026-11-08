// Name: FUN_0055c540
// Address: 0055c540
// Address Range: [[0055c540, 0055c5ea]]
// Convention: unknown
// Signature: void FUN_0055c540(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055c540(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_005c04b0(param_2,&DAT_005f1115,param_1 + 0x194);
  iVar1 = FUN_005c10d0(*(uint *)(param_1 + 0x198),*(int *)(param_1 + 0x194) << 2);
  *(int *)(param_1 + 0x198) = iVar1;
  if (0 < *(int *)(param_1 + 0x194)) {
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\setutil.cpp";
      _DAT_01d1d404 = 0xe4;
      FUN_005030e0("Out of memory for pvsList - %d",*(int *)(param_1 + 0x194));
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x194)) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x198) + iVar3;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 4;
        FUN_005c04b0(param_2,&DAT_005f114c,iVar2);
      } while (iVar1 < *(int *)(param_1 + 0x194));
    }
  }
  return;
}
