// Name: FUN_004c31b0
// Address: 004c31b0
// Address Range: [[004c31b0, 004c3277]]
// Convention: unknown
// Signature: undefined4 FUN_004c31b0(int param_1,uint param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c31b0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar4 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = FUN_0040d890(*(uint *)(iVar3 + 0xc),_DAT_01cc30e0);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x2cc) & param_2) != 0)) {
        if (param_3 == 0) {
          return 1;
        }
        uVar2 = FUN_004ee370("@You used a key." + 1,0x40a00000);
        FUN_0049aa30(0x01C775EC,uVar2);
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          return 1;
        }
        (**(code **)(*(int *)(iVar3 + 0x14c) + 0x24))(iVar3,"key-unlock.wav");
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  if (param_3 != 0) {
    uVar2 = FUN_004ee370("You need the right key",0x40a00000);
    FUN_0049aa30(0x01C775EC,uVar2);
  }
  return 0;
}
