// Name: FUN_005917b0
// Address: 005917b0
// Address Range: [[005917b0, 00591b1b]]
// Convention: unknown
// Signature: void FUN_005917b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005917b0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint auStack_28 [3];
  uint auStack_1c [3];
  
  if (0 < *(int *)(param_1 + 0x2ca0)) {
    bVar1 = false;
    iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
    bVar2 = false;
    if (iVar3 < 2) {
      if ((*(int *)(param_1 + 0x2c98) == 0) && ((float)_DAT_005f71a9 < *(float *)(param_1 + 0x2c9c))
         ) {
        bVar2 = true;
      }
      if ((*(int *)(param_1 + 0x2c98) == 1) && (*(float *)(param_1 + 0x2c9c) < (float)_DAT_005f71b1)
         ) {
        bVar2 = true;
      }
      if ((*(int *)(param_1 + 0x2c98) == 2) && ((float)_DAT_005f71b9 < *(float *)(param_1 + 0x2c9c))
         ) {
        bVar1 = true;
      }
      if ((*(int *)(param_1 + 0x2c98) == 3) && (*(float *)(param_1 + 0x2c9c) < (float)_DAT_005f71b9)
         ) {
        bVar1 = true;
      }
      if ((*(int *)(param_1 + 0x2c98) == 4) && (*(float *)(param_1 + 0x2c9c) < (float)_DAT_005f71c1)
         ) {
        bVar1 = true;
      }
      if ((*(int *)(param_1 + 0x2c98) == 5) && ((float)_DAT_005f71c9 < *(float *)(param_1 + 0x2c9c))
         ) {
        bVar1 = true;
      }
      if ((*(int *)(param_1 + 0x2c98) == 9) && (*(float *)(param_1 + 0x2c9c) < (float)_DAT_005f71c1)
         ) {
        bVar1 = true;
      }
      if (((*(int *)(param_1 + 0x2c98) == 0xf) &&
          ((float)_DAT_005f71b1 < *(float *)(param_1 + 0x2c9c))) &&
         ((double)*(float *)(param_1 + 0x2c9c) < _DAT_005f71d1)) {
        bVar1 = true;
      }
    }
    iVar3 = *(int *)(param_1 + 0x2e34);
    if (bVar2) {
      FUN_00442100(iVar3,"?Bip01 L Forearm" + 1,0x32);
      FUN_00442100(iVar3,"Bip01 L Forearm",0x33);
      FUN_00442100(iVar3,"Bip01 L Forearm",0x34);
      FUN_00442100(iVar3,"Bip01 L Forearm",0x35);
      FUN_00442100(iVar3,"Bip01 L Forearm",0x36);
      FUN_00442100(iVar3,"Bip01 L Forearm",0x37);
      FUN_00442100(iVar3,"Bip01 R Forearm",0x20);
      FUN_00442100(iVar3,"Bip01 R Forearm",0x21);
      FUN_00442100(iVar3,"Bip01 R Forearm",0x22);
      FUN_00442100(iVar3,"Bip01 R Forearm",0x23);
      FUN_00442100(iVar3,"Bip01 R Forearm",0x24);
      FUN_00442100(iVar3,"Bip01 R Forearm",0x25);
    }
    else {
      FUN_004421a0(iVar3,0x32);
      FUN_004421a0(iVar3,0x33);
      FUN_004421a0(iVar3,0x34);
      FUN_004421a0(iVar3,0x35);
      FUN_004421a0(iVar3,0x36);
      FUN_004421a0(iVar3,0x37);
      FUN_004421a0(iVar3,0x20);
      FUN_004421a0(iVar3,0x21);
      FUN_004421a0(iVar3,0x22);
      FUN_004421a0(iVar3,0x23);
      FUN_004421a0(iVar3,0x24);
      FUN_004421a0(iVar3,0x25);
    }
    if (bVar1) {
      FUN_00442100(iVar3,"Bip01 L Forearm",0x2f);
      FUN_00442100(iVar3,"Bip01 L Forearm",0x32);
    }
    else {
      FUN_004421a0(iVar3,0x2f);
      FUN_004421a0(iVar3,0x32);
    }
    puVar5 = (uint *)(iVar3 + 0x3ab24);
    iVar4 = FUN_00524770(param_1 + 0x158);
    if (*(int *)(iVar4 + 0x24) == 0x37) {
      if (puVar5 != auStack_28) {
        *(uint *)(iVar3 + 0x3ab28) = 0;
        *puVar5 = 0;
        *(uint *)(iVar3 + 0x3ab2c) = 0xc1a00000;
        return;
      }
    }
    else if (*(int *)(iVar4 + 0x24) == 0x38) {
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
