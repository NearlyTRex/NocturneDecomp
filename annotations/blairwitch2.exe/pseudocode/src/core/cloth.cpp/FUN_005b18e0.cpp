// Name: FUN_005b18e0
// Address: 005b18e0
// Address Range: [[005b18e0, 005b1974]]
// Convention: unknown
// Signature: void FUN_005b18e0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b18e0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x37b4c)) {
    iVar3 = param_1 + 0x37b50;
    do {
      iVar1 = FUN_005b8c30(param_2,iVar3);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xac;
    } while (iVar2 < *(int *)(param_1 + 0x37b4c));
  }
  if (iVar2 == *(int *)(param_1 + 0x37b4c)) {
    _DAT_01d046a0 = "..\\core\\cloth.cpp";
    _DAT_01d046a4 = 0xab4;
    FUN_004e4500("CCloth::grabCloth - Can't find bone %s",param_2);
  }
  *(uint *)(param_1 + 0x40c + param_3 * 0x11c) = 1;
  *(int *)(param_1 + 0x470 + param_3 * 0x11c) = iVar2;
  return;
}
