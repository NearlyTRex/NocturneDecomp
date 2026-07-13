// Name: FUN_0054f510
// Address: 0054f510
// Address Range: [[0054f510, 0054f77a]]
// Convention: unknown
// Signature: int FUN_0054f510(int param_1)

#include "nocturne.h"

int FUN_0054f510(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte auStack_78 [24];
  byte local_60 [24];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  byte auStack_3c [12];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_60,0);
  iStack_18 = FUN_0041ceb0(uVar1);
  *(int *)(param_1 + 0x1064) = iStack_18;
  if (iStack_18 != 0) {
    iVar2 = FUN_00461090(DAT_005ae704);
    if ((iVar2 == 0) || (*(int *)(0x01C775EC + 0x240) != 0)) {
      FUN_004544d0(param_1 + 0x150,0,0xffffffff);
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x930)) {
        iVar5 = param_1 + 0x948;
        iStack_14 = param_1 + 0xac4;
        iVar6 = param_1 + 0xadc;
        iVar4 = param_1 + 0xad0;
        do {
          FUN_00460aa0(DAT_005ae704,iVar6,iVar4);
          FUN_00460aa0(DAT_005ae704,iStack_14,0);
          FUN_004544d0(iVar5,0,0xffffffff);
          thunk_FUN_004cdbc0(DAT_005ae704);
          thunk_FUN_004cdbc0(DAT_005ae704);
          iStack_14 = iStack_14 + 0x1b4;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0x1b4;
          iVar6 = iVar6 + 0x1b4;
          iVar5 = iVar5 + 0x1b4;
        } while (iVar2 < *(int *)(param_1 + 0x930));
      }
    }
    else {
      uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_78);
      FUN_0041dcc0(uVar1);
    }
  }
  FUN_00409f60(param_1);
  if ((*(int *)(param_1 + 0x1064) != 0) && (iVar2 = FUN_00461090(DAT_005ae704), iVar2 == 0)) {
    uStack_28 = 0x40c00000;
    uStack_1c = 0x40c00000;
    uStack_30 = 0x3f91eb85;
    uStack_2c = 0xbe27ef9e;
    uStack_24 = 0xbf91eb85;
    uStack_20 = 0xbe27ef9e;
    FUN_0040a240(param_1,&uStack_48,&uStack_30);
    FUN_00451b70(&uStack_48,param_1 + 0x30,0x42600000,0x41200000);
    puVar3 = (uint *)FUN_0040a240(param_1,auStack_3c,&uStack_24);
    if (&uStack_48 != puVar3) {
      uStack_48 = *puVar3;
      uStack_44 = puVar3[1];
      uStack_40 = puVar3[2];
    }
    FUN_00451b70(&uStack_48,param_1 + 0x30,0x42600000,0x41200000);
    return iStack_18;
  }
  return iStack_18;
}
