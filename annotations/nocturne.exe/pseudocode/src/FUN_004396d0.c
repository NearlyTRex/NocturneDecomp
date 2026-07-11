// Name: FUN_004396d0
// Address: 004396d0
// Address Range: [[004396d0, 00439752]]
// Convention: unknown
// Signature: void FUN_004396d0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004396d0(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = 1 << ((char)*(uint *)(param_1 + 8) - 1U & 0x1f);
  if (uVar3 != 0) {
    do {
      if ((iVar1 - 1U & uVar3) != 0) {
        if ((param_2 & uVar3) == 0) break;
        FUN_00438c40(param_3,1,1,param_4);
      }
      uVar3 = (int)uVar3 >> 1;
      if (uVar3 == 0) {
        return;
      }
    } while( true );
  }
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 & param_2;
      uVar3 = (int)uVar3 >> 1;
      FUN_00438c40(param_3,1,uVar2 != 0,param_4);
    } while (uVar3 != 0);
    return;
  }
  return;
}
