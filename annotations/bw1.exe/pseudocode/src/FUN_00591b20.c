// Name: FUN_00591b20
// Address: 00591b20
// Address Range: [[00591b20, 00591bdd]]
// Convention: unknown
// Signature: void FUN_00591b20(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00591b20(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x20004);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0xc))(iVar2,param_2);
    iVar2 = FUN_0040c600(*(uint *)(param_1 + 0x20004),_DAT_01c3db94);
    if (iVar2 != 0) {
      iVar3 = FUN_004926b0(iVar2);
      if (iVar3 != 0) {
        *(uint *)(iVar2 + 0x584) = 0;
        *(uint *)(iVar2 + 0x580) = *(uint *)(iVar2 + 0x584);
        *(uint *)(iVar2 + 0x57c) = *(uint *)(iVar2 + 0x580);
        (**(code **)(*(int *)(iVar2 + 0x154) + 0xe4))(iVar2);
        *(uint *)(param_1 + 0x20004) = 0;
        *(uint *)(param_1 + 0x2c98) = 0;
        uVar1 = 0x41200000;
        *(uint *)(param_1 + 0x2c9c) = 0;
        *(uint *)(param_1 + 0x1ffbc) = uVar1;
        if (*(int *)(param_1 + 0x1ff5c) == 3) {
          *(uint *)(param_1 + 0x1ff5c) = 0;
          return;
        }
      }
    }
  }
  return;
}
