// Name: FUN_0058fcb0
// Address: 0058fcb0
// Address Range: [[0058fcb0, 0059001e]]
// Convention: unknown
// Signature: void FUN_0058fcb0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058fcb0(int param_1,int param_2)

{
  byte *puVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x27b0) != 0) {
    return;
  }
  if (*(int *)(0x01CCF390 + 0x1ec) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CCF390 + 0x248) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  FUN_004ebe80();
  if ((0.0 < *(float *)(param_1 + 0xc1d0)) && (0xb < *(int *)(param_2 + 0x30))) {
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  *(uint *)(param_1 + 0xc1d0) = _DAT_00606078;
  iVar2 = FUN_0040c550(*(uint *)(param_2 + 0x38),"CBugs");
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0xc1d0) = 0x3e19999a;
  }
  iVar2 = 0x01CCF390;
  *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  puVar1 = PTR_DAT_00611100;
  if (((*(int *)(iVar2 + 0xdc) != 0) && (0xb < *(int *)(param_2 + 0x30))) &&
     (*(float *)(param_1 + 0x2538) <= 0.0)) {
    *(uint *)(param_1 + 0x2538) = 0;
    FUN_00445430(puVar1,"Using auto health\n");
    FUN_004fc3e0();
    FUN_00445430(PTR_DAT_00611100,"hit points: %3.2f\n",(double)*(float *)(param_1 + 0x2538));
  }
  if (0.0 < *(float *)(param_1 + 0x2538)) {
    if (0.0 < *(float *)(param_2 + 4)) {
      if ((((*(int *)(param_2 + 0x30) != 0x69) && (*(int *)(param_1 + 0x1ff84) == 0)) &&
          ((*(int *)(param_1 + 0x20000) == 0 && (*(int *)(param_1 + 0x1ff5c) == 0)))) &&
         ((iVar2 = FUN_0040c600(*(uint *)(param_2 + 0x34),_DAT_02c8ad44), iVar2 == 0 ||
          (iVar2 = FUN_0040cd00(), iVar2 != 0)))) {
        FUN_005247c0(param_1 + 0x158,0x31,1);
      }
      iVar2 = FUN_005735a0();
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"stranger_hit??.wav")
        ;
        *(uint *)(param_1 + 0x2023c) = uVar3;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0xf0))();
    iVar2 = FUN_00524770();
    if ((*(int *)(iVar2 + 0x24) != 0x36) && (iVar2 = FUN_00524770(), *(int *)(iVar2 + 0x24) != 0x35)
       ) {
      if ((*(int *)(param_1 + 0x1ff84) == 0) && (*(int *)(param_1 + 0x20000) == 0)) {
        if (*(int *)(param_2 + 0x30) == 1) {
          uVar5 = 0x100000034;
        }
        else {
          uVar3 = 1;
          fVar4 = (float)FUN_0040cc00(0,0x42c80000,1);
          uVar5 = CONCAT44(uVar3,(fVar4 <= _DAT_005f6fb5) + 0x32);
        }
      }
      else {
        uVar5 = 0x10000001a;
        *(uint *)(param_1 + 0x1ff84) = 0;
        *(uint *)(param_1 + 0x20000) = 0;
      }
      FUN_005247c0(param_1 + 0x158,uVar5);
      FUN_00573a80();
      if (*(int *)(param_2 + 0x30) != 1) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"stranger_die??.wav")
        ;
        *(uint *)(param_1 + 0x2023c) = uVar3;
      }
      FUN_004e64d0(0x01CD0E3C,param_1,0x32,0x42480000,0);
    }
    if (*(int *)(param_1 + 0x20004) == *(int *)(param_1 + 0x25b0)) {
      *(uint *)(param_1 + 0x20004) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
    if (*(int *)(param_1 + 0x2628) == *(int *)(param_1 + 0x20004)) {
      *(uint *)(param_1 + 0x20004) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
  }
  if (0.0 < *(float *)(param_2 + 4)) {
    FUN_004d6320();
  }
  FUN_004319e0(param_1,param_2);
  return;
}
