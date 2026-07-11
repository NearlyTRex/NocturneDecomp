// Name: FUN_004c0850
// Address: 004c0850
// Address Range: [[004c0850, 004c094a]]
// Convention: unknown
// Signature: void FUN_004c0850(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c0850(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) < 1) {
    *(uint *)(param_1 + 0x330) = 0;
  }
  else {
    iVar3 = 0;
    FUN_004c1d20(param_1,1);
    iVar4 = param_1;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + 0x330) == *(int *)(iVar4 + 0xc)) break;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 8));
    }
    iVar4 = 0;
    while( true ) {
      iVar3 = iVar3 + param_4;
      if (iVar3 < *(int *)(param_1 + 8)) {
        if (iVar3 < 0) {
          iVar3 = *(int *)(param_1 + 8) + -1;
        }
      }
      else {
        iVar3 = 0;
      }
      iVar1 = FUN_0040d890(*(uint *)(param_1 + 0xc + iVar3 * 4),_DAT_02ddf9a8);
      if (((iVar1 != 0) && (iVar2 = FUN_004c1bf0(param_1,iVar1,param_3), iVar2 != 0)) &&
         ((param_2 == 0 || (iVar1 == param_2)))) break;
      iVar4 = iVar4 + 1;
      if (99 < iVar4) {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 0x330);
    if (iVar3 != iVar1) {
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x14c) + 4))(iVar3,0x3dcccccd);
      }
      *(int *)(param_1 + 0x330) = iVar1;
      FUN_004c1b90(param_1,999);
      return;
    }
  }
  return;
}
