// Name: FUN_00574490
// Address: 00574490
// Address Range: [[00574490, 00574510]]
// Convention: unknown
// Signature: int FUN_00574490(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

int FUN_00574490(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < 0x400)) {
    iVar2 = FUN_005b8130(param_2 * 0x60 + param_1 + 8,param_3);
    if (iVar2 == 0) {
      return param_2;
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18004)) {
    iVar3 = param_1 + 8;
    do {
      iVar1 = FUN_005b8130(iVar3,param_3);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x60;
    } while (iVar2 < *(int *)(param_1 + 0x18004));
  }
  return -1;
}
