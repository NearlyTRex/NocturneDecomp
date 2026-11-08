// Name: FUN_004b1bf0
// Address: 004b1bf0
// Address Range: [[004b1bf0, 004b1df0]]
// Convention: unknown
// Signature: void FUN_004b1bf0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1bf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0x10a60) & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CB6900 + 0x1ec) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CB6900 + 0x248) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)(param_1 + 0x10a60) = 0x3F000000;
  fVar3 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  iVar2 = param_1 + 0x2b4;
  *(float *)(param_1 + 0x25a8) = fVar3;
  if (0.0 < fVar3) {
    if (0.0 < *(float *)(param_2 + 4)) {
      if (*(int *)(param_1 + 0x25614) == 0) {
        FUN_00503620(iVar2,8,1);
      }
      if (*(int *)(0x01CB6900 + 0xd4) != 2) {
        iVar2 = *(int *)(param_1 + 0x2b0);
        uVar4 = FUN_0040cf60(0x3e800000,0x3ecccccd);
        (**(code **)(iVar2 + 0x3c))(param_1,"gb-hit[1,6].wav",uVar4);
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar1 = FUN_005035c0(iVar2);
    if (*(int *)(iVar1 + 0x24) != 0xc) {
      iVar2 = FUN_005035c0(iVar2);
      if (*(int *)(iVar2 + 0x24) != 0xb) {
        *(uint *)(param_1 + 0x276c) = 0;
        fVar3 = (float)FUN_0040cf60(0,0x42c80000,1);
        FUN_00503620(param_1 + 0x2b4,(fVar3 <= _DAT_005d71b3) + '\t');
        if (*(int *)(0x01CB6900 + 0xd4) != 2) {
          iVar2 = *(int *)(param_1 + 0x2b0);
          uVar4 = FUN_0040cf60(0x3e800000,0x3ecccccd);
          (**(code **)(iVar2 + 0x3c))(param_1,"gb-die[1,6].wav",uVar4);
        }
        FUN_004c9cc0(0x01CB8284,param_1,0x32,0x42480000,0);
      }
    }
  }
  if (*(float *)(param_2 + 4) <= 0.0) {
    FUN_00427fb0(param_1,param_2);
    return;
  }
  FUN_004bb8b0(0x01CB6900);
  FUN_00427fb0(param_1,param_2);
  return;
}
