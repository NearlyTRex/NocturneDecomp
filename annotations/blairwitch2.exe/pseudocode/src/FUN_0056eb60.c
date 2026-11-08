// Name: FUN_0056eb60
// Address: 0056eb60
// Address Range: [[0056eb60, 0056eecb]]
// Convention: unknown
// Signature: void FUN_0056eb60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056eb60(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint auStack_28 [3];
  uint auStack_1c [3];
  
  if (0 < *(int *)(param_1 + 0x2d0c)) {
    bVar1 = false;
    iVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
    bVar2 = false;
    if (iVar3 < 2) {
      if ((*(int *)(param_1 + 0x2d04) == 0) && ((float)_DAT_005ebf35 < *(float *)(param_1 + 0x2d08))
         ) {
        bVar2 = true;
      }
      if ((*(int *)(param_1 + 0x2d04) == 1) && (*(float *)(param_1 + 0x2d08) < (float)_DAT_005ebf3d)
         ) {
        bVar2 = true;
      }
      if ((*(int *)(param_1 + 0x2d04) == 2) && ((float)_DAT_005ebf45 < *(float *)(param_1 + 0x2d08))
         ) {
        bVar1 = true;
      }
      if ((*(int *)(param_1 + 0x2d04) == 3) && (*(float *)(param_1 + 0x2d08) < (float)_DAT_005ebf45)
         ) {
        bVar1 = true;
      }
      if ((*(int *)(param_1 + 0x2d04) == 4) && (*(float *)(param_1 + 0x2d08) < (float)_DAT_005ebf4d)
         ) {
        bVar1 = true;
      }
      if ((*(int *)(param_1 + 0x2d04) == 5) && ((float)_DAT_005ebf55 < *(float *)(param_1 + 0x2d08))
         ) {
        bVar1 = true;
      }
      if ((*(int *)(param_1 + 0x2d04) == 9) && (*(float *)(param_1 + 0x2d08) < (float)_DAT_005ebf4d)
         ) {
        bVar1 = true;
      }
      if (((*(int *)(param_1 + 0x2d04) == 0xf) &&
          ((float)_DAT_005ebf3d < *(float *)(param_1 + 0x2d08))) &&
         ((double)*(float *)(param_1 + 0x2d08) < _DAT_005ebf5d)) {
        bVar1 = true;
      }
    }
    iVar3 = *(int *)(param_1 + 0x2ea0);
    if (bVar2) {
      FUN_005b18e0(iVar3,"?Bip01 L Forearm" + 1,0x32);
      FUN_005b18e0(iVar3,"Bip01 L Forearm",0x33);
      FUN_005b18e0(iVar3,"Bip01 L Forearm",0x34);
      FUN_005b18e0(iVar3,"Bip01 L Forearm",0x35);
      FUN_005b18e0(iVar3,"Bip01 L Forearm",0x36);
      FUN_005b18e0(iVar3,"Bip01 L Forearm",0x37);
      FUN_005b18e0(iVar3,"Bip01 R Forearm",0x20);
      FUN_005b18e0(iVar3,"Bip01 R Forearm",0x21);
      FUN_005b18e0(iVar3,"Bip01 R Forearm",0x22);
      FUN_005b18e0(iVar3,"Bip01 R Forearm",0x23);
      FUN_005b18e0(iVar3,"Bip01 R Forearm",0x24);
      FUN_005b18e0(iVar3,"Bip01 R Forearm",0x25);
    }
    else {
      FUN_005b1980(iVar3,0x32);
      FUN_005b1980(iVar3,0x33);
      FUN_005b1980(iVar3,0x34);
      FUN_005b1980(iVar3,0x35);
      FUN_005b1980(iVar3,0x36);
      FUN_005b1980(iVar3,0x37);
      FUN_005b1980(iVar3,0x20);
      FUN_005b1980(iVar3,0x21);
      FUN_005b1980(iVar3,0x22);
      FUN_005b1980(iVar3,0x23);
      FUN_005b1980(iVar3,0x24);
      FUN_005b1980(iVar3,0x25);
    }
    if (bVar1) {
      FUN_005b18e0(iVar3,"Bip01 L Forearm",0x2f);
      FUN_005b18e0(iVar3,"Bip01 L Forearm",0x32);
    }
    else {
      FUN_005b1980(iVar3,0x2f);
      FUN_005b1980(iVar3,0x32);
    }
    puVar5 = (uint *)(iVar3 + 0x3ab24);
    iVar4 = FUN_005035c0(param_1 + 0x2b4);
    if (*(int *)(iVar4 + 0x24) == 0x2a) {
      if (puVar5 != auStack_28) {
        *(uint *)(iVar3 + 0x3ab28) = 0;
        *puVar5 = 0;
        *(uint *)(iVar3 + 0x3ab2c) = 0xc1a00000;
        return;
      }
    }
    else if (*(int *)(iVar4 + 0x24) == 0x2b) {
      if (puVar5 != auStack_1c) {
        *(uint *)(iVar3 + 0x3ab28) = 0;
        *puVar5 = 0;
        *(uint *)(iVar3 + 0x3ab2c) = 0x41a00000;
        return;
      }
    }
  }
  return;
}
