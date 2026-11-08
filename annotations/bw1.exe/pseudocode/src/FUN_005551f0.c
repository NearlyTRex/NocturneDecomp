// Name: FUN_005551f0
// Address: 005551f0
// Address Range: [[005551f0, 005552ec]]
// Convention: unknown
// Signature: void FUN_005551f0(int param_1,int param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_005551f0(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte local_38 [4];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (*(int *)(0x01CCF390 + 0x20c) == 0) {
    if ((*(int *)(0x01CCF390 + 0x210) != 0) && (iVar1 = FUN_00483e60(DAT_00612560), iVar1 == 0)) {
      FUN_00554a90(param_1,param_2,param_3,0xffff);
      return;
    }
    if ((*(int *)(param_1 + 0x15ac88) != 0) && (iVar2 = 0, iVar1 = param_2, 0 < param_3)) {
      do {
        local_34 = *(uint *)(iVar1 + 4);
        local_30 = *(uint *)(iVar1 + 8);
        local_2c = *(uint *)(iVar1 + 0xc);
        local_28 = *(uint *)(iVar1 + 0x10);
        local_24 = *(uint *)(iVar1 + 0x14);
        local_20 = *(uint *)(iVar1 + 0x18);
        local_1c = *(uint *)(iVar1 + 0x24);
        local_18 = *(uint *)(iVar1 + 0x30);
        local_14 = *(uint *)(iVar1 + 0x3c);
        iVar1 = iVar1 + 0x48;
        iVar2 = iVar2 + 1;
        FUN_00483c50(DAT_00612560,local_38,&DAT_004511e0);
      } while (iVar2 < param_3);
    }
    FUN_00484210(DAT_00612560,param_2,param_3,param_4);
  }
  return;
}
