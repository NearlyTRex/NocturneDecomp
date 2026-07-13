// Name: FUN_00572338
// Address: 00572338
// Address Range: [[00572338, 005723ad]]
// Convention: unknown
// Signature: int FUN_00572338(int param_1,undefined4 param_2,uint param_3)

#include "nocturne.h"

int FUN_00572338(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != -1) {
    if (((*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x18)) ||
        (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14))) &&
       (iVar2 = (**(code **)(*(int *)(param_1 + 0x28) + 0x20))(param_1), iVar2 == -1)) {
      return -1;
    }
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else if (param_3 < 2) {
      uVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        return -1;
      }
      uVar1 = 2;
    }
    iVar2 = FUN_005689c0(*(uint *)(param_1 + 0x2c),param_2,uVar1);
  }
  return iVar2;
}
