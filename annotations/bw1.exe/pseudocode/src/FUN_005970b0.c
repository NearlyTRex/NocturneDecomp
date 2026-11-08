// Name: FUN_005970b0
// Address: 005970b0
// Address Range: [[005970b0, 00597130]]
// Convention: unknown
// Signature: int FUN_005970b0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

int FUN_005970b0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < 0x400)) {
    iVar2 = FUN_005c04e0(param_2 * 0x60 + param_1 + 8,param_3);
    if (iVar2 == 0) {
      return param_2;
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18004)) {
    iVar3 = param_1 + 8;
    do {
      iVar1 = FUN_005c04e0(iVar3,param_3);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x60;
    } while (iVar2 < *(int *)(param_1 + 0x18004));
  }
  return -1;
}
