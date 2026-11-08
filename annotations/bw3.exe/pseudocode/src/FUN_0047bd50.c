// Name: FUN_0047bd50
// Address: 0047bd50
// Address Range: [[0047bd50, 0047bf7f]]
// Convention: unknown
// Signature: void FUN_0047bd50(int param_1)

#include "nocturne.h"

void FUN_0047bd50(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4b);
  if (iVar2 != 0) {
    bVar1 = true;
    if (0 < *(int *)(param_1 + 0x134)) {
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
    }
  }
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4d);
  if (iVar2 != 0) {
    bVar1 = true;
    if (*(int *)(param_1 + 0x134) < *(int *)(param_1 + 0x130)) {
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
    }
  }
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x47);
  if (iVar2 != 0) {
    bVar1 = true;
    *(uint *)(param_1 + 0x134) = 0;
  }
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4f);
  if (iVar2 != 0) {
    bVar1 = true;
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x130);
  }
  iVar2 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
  if (iVar2 == 0) {
    iVar2 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a);
    if (iVar2 == 0) {
      if (bVar1) {
        FUN_0047baf0(param_1);
      }
      iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x53);
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x134);
        if (iVar2 != *(int *)(param_1 + 0x138)) {
          FUN_0047bc10(param_1);
          return;
        }
        FUN_0047bba0(param_1,iVar2,iVar2 + 1);
        return;
      }
    }
    else {
      iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x52);
      if (iVar2 != 0) {
        FUN_0047bc10(param_1);
        FUN_0047bcf0(param_1);
      }
      iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x53);
      if (iVar2 != 0) {
        FUN_0047bca0(param_1);
        FUN_0047bc10(param_1);
        return;
      }
    }
  }
  else {
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2d);
    if (iVar2 != 0) {
      FUN_0047bca0(param_1);
      FUN_0047bc10(param_1);
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x52);
    if (iVar2 != 0) {
      FUN_0047bca0(param_1);
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2e);
    if (iVar2 != 0) {
      FUN_0047bca0(param_1);
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2f);
    if (iVar2 != 0) {
      FUN_0047bc10(param_1);
      FUN_0047bcf0(param_1);
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x53);
    if (iVar2 != 0) {
      FUN_0047bc10(param_1);
    }
    FUN_00580770();
  }
  return;
}
