// Name: FUN_0059e8c0
// Address: 0059e8c0
// Address Range: [[0059e8c0, 0059ebb1]]
// Convention: unknown
// Signature: void FUN_0059e8c0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_0059e8c0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"Nothing");
  }
  else if (param_3 == 1) {
    iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Nothing");
    if (iVar1 != 0) {
      FUN_0059ebc0(param_1,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"Animation");
  }
  else if (param_3 == 1) {
    iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Animation");
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x170))(param_1,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"Alert");
  }
  else if (param_3 == 1) {
    iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Alert");
    if (iVar1 != 0) {
      FUN_0059ec10(param_1,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"Patrol");
  }
  else if (param_3 == 1) {
    iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Patrol");
    if (iVar1 != 0) {
      FUN_0059ee00(param_1,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"Chasing");
  }
  else if (param_3 == 1) {
    iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Chasing");
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x178))(param_1,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"Death");
  }
  else if (param_3 == 1) {
    iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Death");
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x174))(param_1,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"AlertInvisible");
  }
  else if (param_3 == 1) {
    iVar1 = FUN_0059daa0(param_1 + 0x10af8,"AlertInvisible");
    if (iVar1 != 0) {
      FUN_0059ed50(param_1,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    FUN_0059d650(param_1 + 0x10af8,"SlamAnimation");
  }
  else if (param_3 == 1) {
    iVar1 = FUN_0059daa0(param_1 + 0x10af8,"SlamAnimation");
    if (iVar1 != 0) {
      return;
    }
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar1 = FUN_0059daa0(param_1 + 0x10af8,&DAT_005ef95b);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x158))(param_1,param_2);
        return;
      }
    }
    return;
  }
  FUN_0059d650(param_1 + 0x10af8,&DAT_005ef956);
  return;
}
