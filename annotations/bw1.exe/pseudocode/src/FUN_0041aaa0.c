// Name: FUN_0041aaa0
// Address: 0041aaa0
// Address Range: [[0041aaa0, 0041ab1b]]
// Convention: unknown
// Signature: void FUN_0041aaa0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

#include "nocturne.h"

void FUN_0041aaa0(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x28c);
  if (iVar1 < 3) {
    puVar2 = (uint *)(param_1 + 0x290 + iVar1 * 0x194);
    *(int *)(param_1 + 0x28c) = iVar1 + 1;
    if (puVar2 != param_3) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2[2] = param_3[2];
    }
    if (puVar2 + 3 != param_4) {
      puVar2[3] = *param_4;
      puVar2[4] = param_4[1];
      puVar2[5] = param_4[2];
    }
    FUN_00468950(puVar2 + 6,param_2);
    FUN_004688e0(puVar2 + 6);
  }
  return;
}
