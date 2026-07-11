// Name: FUN_005402f0
// Address: 005402f0
// Address Range: [[005402f0, 00540652]]
// Convention: unknown
// Signature: void FUN_005402f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005402f0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint auStack_28 [3];
  uint auStack_1c [3];
  
  bVar1 = false;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  bVar2 = false;
  if (iVar3 < 2) {
    if ((*(int *)(param_1 + 0x2a84) == 0) && ((float)_DAT_00595f9f < *(float *)(param_1 + 0x2a88)))
    {
      bVar2 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 1) && (*(float *)(param_1 + 0x2a88) < (float)_DAT_00595fa7))
    {
      bVar2 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 2) && ((float)_DAT_00595faf < *(float *)(param_1 + 0x2a88)))
    {
      bVar1 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 3) && (*(float *)(param_1 + 0x2a88) < (float)_DAT_00595faf))
    {
      bVar1 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 4) && (*(float *)(param_1 + 0x2a88) < (float)_DAT_00595fb7))
    {
      bVar1 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 5) && ((float)_DAT_00595fbf < *(float *)(param_1 + 0x2a88)))
    {
      bVar1 = true;
    }
    if ((*(int *)(param_1 + 0x2a84) == 9) && (*(float *)(param_1 + 0x2a88) < (float)_DAT_00595fb7))
    {
      bVar1 = true;
    }
    if (((*(int *)(param_1 + 0x2a84) == 0xf) &&
        ((float)_DAT_00595fa7 < *(float *)(param_1 + 0x2a88))) &&
       ((double)*(float *)(param_1 + 0x2a88) < _DAT_00595fc7)) {
      bVar1 = true;
    }
  }
  iVar3 = *(int *)(param_1 + 0x2c20);
  if (bVar2) {
    FUN_004386b0(iVar3,"?Bip01 L Forearm" + 1,0x32);
    FUN_004386b0(iVar3,"Bip01 L Forearm",0x33);
    FUN_004386b0(iVar3,"Bip01 L Forearm",0x34);
    FUN_004386b0(iVar3,"Bip01 L Forearm",0x35);
    FUN_004386b0(iVar3,"Bip01 L Forearm",0x36);
    FUN_004386b0(iVar3,"Bip01 L Forearm",0x37);
    FUN_004386b0(iVar3,"Bip01 R Forearm",0x20);
    FUN_004386b0(iVar3,"Bip01 R Forearm",0x21);
    FUN_004386b0(iVar3,"Bip01 R Forearm",0x22);
    FUN_004386b0(iVar3,"Bip01 R Forearm",0x23);
    FUN_004386b0(iVar3,"Bip01 R Forearm",0x24);
    FUN_004386b0(iVar3,"Bip01 R Forearm",0x25);
  }
  else {
    FUN_00438750(iVar3,0x32);
    FUN_00438750(iVar3,0x33);
    FUN_00438750(iVar3,0x34);
    FUN_00438750(iVar3,0x35);
    FUN_00438750(iVar3,0x36);
    FUN_00438750(iVar3,0x37);
    FUN_00438750(iVar3,0x20);
    FUN_00438750(iVar3,0x21);
    FUN_00438750(iVar3,0x22);
    FUN_00438750(iVar3,0x23);
    FUN_00438750(iVar3,0x24);
    FUN_00438750(iVar3,0x25);
  }
  if (bVar1) {
    FUN_004386b0(iVar3,"Bip01 L Forearm",0x2f);
    FUN_004386b0(iVar3,"Bip01 L Forearm",0x32);
  }
  else {
    FUN_00438750(iVar3,0x2f);
    FUN_00438750(iVar3,0x32);
  }
  puVar5 = (uint *)(iVar3 + 0x3ab24);
  iVar4 = FUN_004e1660(param_1 + 0x150);
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
  return;
}
