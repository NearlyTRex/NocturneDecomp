// Name: FUN_004c0950
// Address: 004c0950
// Address Range: [[004c0950, 004c0a44]]
// Convention: unknown
// Signature: void FUN_004c0950(int param_1,int param_2)

#include "nocturne.h"

void FUN_004c0950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_004c1d70(param_1);
  if (*(int *)(param_1 + 0x334) == 0) {
    iVar3 = 0;
    iVar4 = param_1;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar1 = FUN_0040d7e0(*(uint *)(iVar4 + 0xc),"CWeapon");
        if ((iVar1 == 0) &&
           (iVar1 = FUN_0040d7e0(*(uint *)(iVar4 + 0xc),"CAmmo"), iVar1 == 0)) {
          *(uint *)(param_1 + 0x334) = *(uint *)(iVar4 + 0xc);
          return;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 8));
    }
    return;
  }
  iVar4 = 0;
  iVar3 = param_1;
  iVar1 = iVar4;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = iVar4;
      if (*(int *)(param_1 + 0x334) == *(int *)(iVar3 + 0xc)) break;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar1 = iVar4;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  while( true ) {
    iVar4 = iVar4 + param_2;
    if (iVar4 < *(int *)(param_1 + 8)) {
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 8) + -1;
      }
    }
    else {
      iVar4 = 0;
    }
    iVar2 = iVar4 * 4 + param_1;
    iVar3 = FUN_0040d7e0(*(uint *)(iVar2 + 0xc),"CWeapon");
    if ((iVar3 == 0) &&
       (iVar3 = FUN_0040d7e0(*(uint *)(iVar2 + 0xc),"CAmmo"), iVar3 == 0)) break;
    if (iVar4 == iVar1) {
      return;
    }
  }
  *(uint *)(param_1 + 0x334) = *(uint *)(iVar2 + 0xc);
  return;
}
