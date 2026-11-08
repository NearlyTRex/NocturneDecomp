// Name: FUN_00460f90
// Address: 00460f90
// Address Range: [[00460f90, 00461089]]
// Convention: unknown
// Signature: void FUN_00460f90(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460f90(int param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x14c))(param_1,*param_2);
  if (iVar3 == -1) {
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    fVar1 = (float)_DAT_00612270;
    *(float *)(param_1 + 0xc2d8 + iVar3 * 4) =
         (float)param_2[1] + *(float *)(param_1 + 0xc2d8 + iVar3 * 4);
    if (fVar1 < *(float *)(param_1 + 0xc2d8 + iVar3 * 4)) {
      *(int *)(param_1 + 0xc2d0) = *(int *)(param_1 + 0xc2d0) + 1;
      iVar3 = FUN_00418940(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
      *(uint *)(iVar3 + 0xcc4) = 1;
      FUN_00431210(param_1,iVar3,*param_2,0);
      FUN_004352e0(param_1,"limb.wav");
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"djien-heart?.wav @ 6");
      FUN_00419b90(iVar3);
      uVar2 = 0x01C51D80;
      param_2[2] = (float)param_2[2] * (float)_DAT_005d8e60;
      FUN_004a1b70(uVar2,"DjienSackBlown");
      return;
    }
  }
  return;
}
