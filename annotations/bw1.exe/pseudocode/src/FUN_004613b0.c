// Name: FUN_004613b0
// Address: 004613b0
// Address Range: [[004613b0, 00461521]]
// Convention: unknown
// Signature: void FUN_004613b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004613b0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_00524770(param_1 + 0x158);
  iVar1 = *(int *)(iVar1 + 0x24);
  if (*(int *)(param_1 + 0xc9c0) == 0) {
    if (*(float *)(param_1 + 0xc1e4) <= 0.0) {
      *(uint *)(param_1 + 0xc1e4) = _DAT_005fea28;
      (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
      if (((iVar1 != 0xb) && (iVar1 != 0xc)) && (iVar1 != 0xd)) {
        iVar1 = FUN_0040cc60(0,2,1);
        FUN_005247c0(param_1 + 0x158,iVar1 + 0xb);
        return;
      }
      fVar2 = (float)FUN_00525020(param_1 + 0x158);
      if ((float)_DAT_005d8ed8 < fVar2) {
        iVar1 = FUN_0040cc60(0,2,1);
        FUN_005247c0(param_1 + 0x158,iVar1 + 0xb);
        return;
      }
    }
  }
  else {
    if (iVar1 == 0x12) {
      iVar1 = FUN_0040c550(*(uint *)(param_2 + 0x34),&DAT_005d8e6c);
      if (iVar1 != 0) {
        FUN_004a1b70(0x01C51D80,"ShotDjienWithPistol");
      }
      iVar1 = FUN_0040c550(*(uint *)(param_2 + 0x34),"CRifle");
      if (iVar1 != 0) {
        FUN_004a1b70(0x01C51D80,"ShotDjienWithRifle");
      }
      iVar1 = FUN_0040c550(*(uint *)(param_2 + 0x34),"CLightgun");
      if (iVar1 != 0) {
        FUN_004a1b70(0x01C51D80,"ShotDjienWithLightgun");
      }
    }
    FUN_004a1b70(0x01C51D80,"DjienInvulnerable");
  }
  return;
}
