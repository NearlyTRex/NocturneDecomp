// Name: FUN_004fc240
// Address: 004fc240
// Address Range: [[004fc240, 004fc307]]
// Convention: unknown
// Signature: undefined4 FUN_004fc240(int param_1,uint param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004fc240(int param_1,uint param_2,int param_3)

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
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = FUN_0040c600(*(uint *)(iVar3 + 0x14),_DAT_01d1bc9c);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x2d4) & param_2) != 0)) {
        if (param_3 == 0) {
          return 1;
        }
        uVar2 = FUN_00531090("You used a key.",0x40a00000);
        FUN_004cc190(0x01CCF390,uVar2);
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 == 0) {
          return 1;
        }
        (**(code **)(*(int *)(iVar3 + 0x154) + 0x2c))(iVar3,"key-unlock.wav");
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  if (param_3 != 0) {
    uVar2 = FUN_00531090("You need the right key",0x40a00000);
    FUN_004cc190(0x01CCF390,uVar2);
  }
  return 0;
}
