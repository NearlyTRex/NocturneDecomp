// Name: FUN_004dbb50
// Address: 004dbb50
// Address Range: [[004dbb50, 004dbc53]]
// Convention: unknown
// Signature: void FUN_004dbb50(int param_1,int param_2)

#include "nocturne.h"

void FUN_004dbb50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_004dd2c0(param_1);
  iVar2 = *(int *)(param_1 + 0x468) * 4 + param_1;
  if (*(int *)(iVar2 + 0x5fc) == 0) {
    iVar3 = 0;
    iVar2 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar1 = FUN_0040c840(*(uint *)(iVar2 + 0x14),"CWeapon");
        if ((iVar1 == 0) && (*(int *)(param_1 + 0x468) == *(int *)(iVar2 + 0x46c))) {
          *(uint *)(param_1 + *(int *)(param_1 + 0x468) * 4 + 0x5fc) =
               *(uint *)(iVar2 + 0x14);
          return;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    return;
  }
  iVar3 = 0;
  iVar1 = param_1;
  iVar4 = iVar3;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar4 = iVar3;
      if (*(int *)(iVar2 + 0x5fc) == *(int *)(iVar1 + 0x14)) break;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 4;
      iVar4 = iVar3;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  while( true ) {
    iVar3 = iVar3 + param_2;
    if (iVar3 < *(int *)(param_1 + 0x10)) {
      if (iVar3 < 0) {
        iVar3 = *(int *)(param_1 + 0x10) + -1;
      }
    }
    else {
      iVar3 = 0;
    }
    iVar1 = iVar3 * 4 + param_1;
    iVar2 = FUN_0040c840(*(uint *)(iVar1 + 0x14),"CWeapon");
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x468) == *(int *)(iVar1 + 0x46c))) break;
    if (iVar3 == iVar4) {
      return;
    }
  }
  *(uint *)(param_1 + *(int *)(param_1 + 0x468) * 4 + 0x5fc) = *(uint *)(iVar1 + 0x14);
  return;
}
