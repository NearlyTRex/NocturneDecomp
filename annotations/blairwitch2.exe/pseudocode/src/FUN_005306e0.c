// Name: FUN_005306e0
// Address: 005306e0
// Address Range: [[005306e0, 00530748]]
// Convention: unknown
// Signature: void FUN_005306e0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005306e0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01fc961c) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (param_2 == *(int *)(iVar2 + 0x1fc9620)) {
        _DAT_01fc961c = _DAT_01fc961c + -1;
        FUN_005ba1f0(iVar2 + 0x1fc9620,iVar2 + 0x1fc9624,(_DAT_01fc961c - iVar3) * 4);
        return;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < _DAT_01fc961c * 4);
  }
  return;
}
