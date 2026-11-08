// Name: FUN_004cab10
// Address: 004cab10
// Address Range: [[004cab10, 004cad10]]
// Convention: unknown
// Signature: void FUN_004cab10(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cab10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0xc1d0) & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CCF390 + 0x1ec) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CCF390 + 0x248) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)(param_1 + 0xc1d0) = 0x3F000000;
  fVar3 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar2 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar3;
  if (0.0 < fVar3) {
    if (0.0 < *(float *)(param_2 + 4)) {
      if (*(int *)(param_1 + 0x1ff84) == 0) {
        FUN_005247c0(iVar2,8,1);
      }
      if (*(int *)(0x01CCF390 + 0xd4) != 2) {
        iVar2 = *(int *)(param_1 + 0x154);
        uVar4 = FUN_0040cc00(0x3e800000,0x3ecccccd);
        (**(code **)(iVar2 + 0x34))(param_1,"gb-hit[1,6].wav",uVar4);
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar1 = FUN_00524770(iVar2);
    if (*(int *)(iVar1 + 0x24) != 0xc) {
      iVar2 = FUN_00524770(iVar2);
      if (*(int *)(iVar2 + 0x24) != 0xb) {
        *(uint *)(param_1 + 0x26fc) = 0;
        fVar3 = (float)FUN_0040cc00(0,0x42c80000,1);
        FUN_005247c0(param_1 + 0x158,(fVar3 <= _DAT_005e122c) + '\t');
        if (*(int *)(0x01CCF390 + 0xd4) != 2) {
          iVar2 = *(int *)(param_1 + 0x154);
          uVar4 = FUN_0040cc00(0x3e800000,0x3ecccccd);
          (**(code **)(iVar2 + 0x34))(param_1,"gb-die[1,6].wav",uVar4);
        }
        FUN_004e64d0(0x01CD0E3C,param_1,0x32,0x42480000,0);
      }
    }
  }
  if (*(float *)(param_2 + 4) <= 0.0) {
    FUN_004319e0(param_1,param_2);
    return;
  }
  FUN_004d6320(0x01CCF390);
  FUN_004319e0(param_1,param_2);
  return;
}
