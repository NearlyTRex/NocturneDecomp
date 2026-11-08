// Name: FUN_004dbb40
// Address: 004dbb40
// Address Range: [[004dbb40, 004dbc3a]]
// Convention: unknown
// Signature: void FUN_004dbb40(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dbb40(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    *(uint *)(param_1 + 0x338) = 0;
  }
  else {
    iVar3 = 0;
    FUN_004dd340(param_1,1);
    iVar4 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        if (*(int *)(param_1 + 0x338) == *(int *)(iVar4 + 0x14)) break;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    iVar4 = 0;
    while( true ) {
      iVar3 = iVar3 + param_4;
      if (iVar3 < *(int *)(param_1 + 0x10)) {
        if (iVar3 < 0) {
          iVar3 = *(int *)(param_1 + 0x10) + -1;
        }
      }
      else {
        iVar3 = 0;
      }
      iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x14 + iVar3 * 4),_DAT_02d0c150);
      if (((iVar1 != 0) && (iVar2 = FUN_004dd310(param_1,iVar1,param_3), iVar2 != 0)) &&
         ((param_2 == 0 || (iVar1 == param_2)))) break;
      iVar4 = iVar4 + 1;
      if (99 < iVar4) {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 0x338);
    if (iVar3 != iVar1) {
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,0x3dcccccd);
      }
      *(int *)(param_1 + 0x338) = iVar1;
      FUN_004dd2d0(param_1,999);
      return;
    }
  }
  return;
}
