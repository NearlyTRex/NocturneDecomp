// Name: FUN_00442100
// Address: 00442100
// Address Range: [[00442100, 00442194]]
// Convention: unknown
// Signature: void FUN_00442100(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442100(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x37b4c)) {
    iVar3 = param_1 + 0x37b50;
    do {
      iVar1 = FUN_005c0f80(param_2,iVar3);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xac;
    } while (iVar2 < *(int *)(param_1 + 0x37b4c));
  }
  if (iVar2 == *(int *)(param_1 + 0x37b4c)) {
    _DAT_01d1d400 = "..\\core\\cloth.cpp";
    _DAT_01d1d404 = 0xab4;
    FUN_005030e0("CCloth::grabCloth - Can't find bone %s",param_2);
  }
  *(uint *)(param_1 + 0x40c + param_3 * 0x11c) = 1;
  *(int *)(param_1 + 0x470 + param_3 * 0x11c) = iVar2;
  return;
}
