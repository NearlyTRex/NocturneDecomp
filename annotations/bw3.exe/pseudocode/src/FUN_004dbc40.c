// Name: FUN_004dbc40
// Address: 004dbc40
// Address Range: [[004dbc40, 004dbd71]]
// Convention: unknown
// Signature: void FUN_004dbc40(int param_1,int param_2)

#include "nocturne.h"

void FUN_004dbc40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(0x01D2130C + 0x264) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x33c) == 0) {
    iVar4 = 0;
    iVar2 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar1 = FUN_0040c790(*(uint *)(iVar2 + 0x14),"CWeapon");
        if ((iVar1 == 0) &&
           (iVar1 = FUN_0040c790(*(uint *)(iVar2 + 0x14),"CAmmo"), iVar1 == 0)) {
          *(uint *)(param_1 + 0x33c) = *(uint *)(iVar2 + 0x14);
          break;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x10));
    }
    if (*(int *)(param_1 + 0x33c) == 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0x344) & 0x7fffffff) != 0) {
      return;
    }
  }
  else {
    iVar4 = 0;
    iVar2 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        if (*(int *)(param_1 + 0x33c) == *(int *)(iVar2 + 0x14)) break;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x10));
    }
    if ((*(uint *)(param_1 + 0x344) & 0x7fffffff) != 0) {
      FUN_004dd390(param_1);
      iVar2 = iVar4;
      while( true ) {
        iVar2 = iVar2 + param_2;
        if (iVar2 < *(int *)(param_1 + 0x10)) {
          if (iVar2 < 0) {
            iVar2 = *(int *)(param_1 + 0x10) + -1;
          }
        }
        else {
          iVar2 = 0;
        }
        iVar3 = iVar2 * 4 + param_1;
        iVar1 = FUN_0040c790(*(uint *)(iVar3 + 0x14),"CWeapon");
        if ((iVar1 == 0) &&
           (iVar1 = FUN_0040c790(*(uint *)(iVar3 + 0x14),"CAmmo"), iVar1 == 0))
        break;
        if (iVar2 == iVar4) {
          return;
        }
      }
      *(uint *)(param_1 + 0x33c) = *(uint *)(iVar3 + 0x14);
      return;
    }
  }
  FUN_004dd390(param_1);
  return;
}
