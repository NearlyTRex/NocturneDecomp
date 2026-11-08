// Name: FUN_004db9d0
// Address: 004db9d0
// Address Range: [[004db9d0, 004dbb4b]]
// Convention: unknown
// Signature: void FUN_004db9d0(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004db9d0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    *(uint *)(param_1 + 0x610 + *(int *)(param_1 + 0x468) * 4) = 0;
  }
  else {
    iVar4 = 0;
    FUN_004dd270(param_1,1);
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar1 = param_1;
      do {
        if (*(int *)(*(int *)(param_1 + 0x468) * 4 + param_1 + 0x610) == *(int *)(iVar1 + 0x14))
        break;
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x10));
    }
    iVar1 = *(int *)(param_1 + 0x468) * 4 + param_1;
    if ((*(int *)(iVar1 + 0x610) != 0) &&
       (*(int *)(param_1 + 0x46c + iVar4 * 4) != *(int *)(param_1 + 0x468))) {
      *(uint *)(iVar1 + 0x610) = 0;
    }
    iVar1 = 0;
    while( true ) {
      iVar4 = iVar4 + param_4;
      if (iVar4 < *(int *)(param_1 + 0x10)) {
        if (iVar4 < 0) {
          iVar4 = *(int *)(param_1 + 0x10) + -1;
        }
      }
      else {
        iVar4 = 0;
      }
      iVar3 = param_1 + iVar4 * 4;
      iVar2 = FUN_0040c8f0(*(uint *)(iVar3 + 0x14),_DAT_02661f38);
      if ((((*(int *)(param_1 + 0x468) == *(int *)(iVar3 + 0x46c)) && (iVar2 != 0)) &&
          (iVar3 = FUN_004dd0a0(param_1,iVar2,param_3), iVar3 != 0)) &&
         ((param_2 == 0 || (iVar2 == param_2)))) break;
      iVar1 = iVar1 + 1;
      if (99 < iVar1) {
        return;
      }
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x468) * 4 + param_1 + 0x610);
    if (iVar4 != iVar2) {
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x14))(iVar4,0x3dcccccd);
      }
      *(int *)(param_1 + 0x610 + *(int *)(param_1 + 0x468) * 4) = iVar2;
      FUN_004dd020(param_1,999);
      return;
    }
  }
  return;
}
