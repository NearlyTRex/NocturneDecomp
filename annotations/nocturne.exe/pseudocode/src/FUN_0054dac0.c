// Name: FUN_0054dac0
// Address: 0054dac0
// Address Range: [[0054dac0, 0054dc68]]
// Convention: unknown
// Signature: int FUN_0054dac0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054dac0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte local_2c [24];
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if (*(int *)(param_1 + 0x2404) != 0) {
    return 0;
  }
  FUN_00409f20(param_1);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_2c,0);
  iStack_14 = FUN_0041ceb0(uVar2);
  if (iStack_14 == 0) goto LAB_0054db8e;
  iStack_c = param_1 + 0x83638;
  iVar3 = param_1 + 0x48b08;
  if (*(int *)(param_1 + 0xbe168) == 0) {
    FUN_0051d9d0(param_1 + 0x150,0xffffffff,0xffffffff,1,0);
    FUN_00437db0(iVar3,0);
    iVar4 = iStack_c;
LAB_0054db50:
    FUN_00437db0(iVar4,0);
  }
  else {
    iVar4 = param_1 + 0xdfd8;
    iStack_10 = param_1 + 0xbd24;
    if (*(int *)(param_1 + 0xbe168) == 2) {
      FUN_0051d9d0(iStack_10,0xffffffff,0xffffffff,1,0);
      goto LAB_0054db50;
    }
    iVar1 = param_1 + 0xbe16c;
    FUN_004e0340(iVar1,0,param_1 + 0x150,0);
    FUN_004e0380(iVar1,0,iVar3,0,1);
    FUN_004e0380(iVar1,0,iVar3,0,2);
    iVar3 = iStack_c;
    FUN_004e0380(iVar1,0,iStack_c,0,3);
    FUN_004e0380(iVar1,0,iVar3,0,4);
    FUN_004e0340(iVar1,1,iStack_10,0);
    FUN_004e0380(iVar1,1,iVar4,0,1);
    FUN_004e0380(iVar1,1,iVar4,0,2);
    FUN_004e0820(iVar1,*(uint *)(param_1 + 0xbed98));
  }
  FUN_004265a0(param_1);
  if (_DAT_01cd4318 != 0) {
    iVar3 = FUN_00461090(DAT_005ae704);
    if (iVar3 == 0) {
      FUN_004e22b0(param_1 + 0x150,param_1);
    }
  }
LAB_0054db8e:
  FUN_00409f60(param_1);
  return iStack_14;
}
