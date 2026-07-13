// Name: FUN_1000f2d0
// Address: 1000f2d0
// Address Range: [[1000f2d0, 1000f357]]
// Convention: unknown
// Signature: void FUN_1000f2d0(int param_1,uint param_2,int *param_3,uint *param_4)

#include "nocturne.h"

void FUN_1000f2d0(int param_1,uint param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_10018214 != 0) {
    FUN_1000f360(param_1,param_3,param_4);
    return;
  }
  if (param_2 < *param_4) {
    DAT_10018214 = 0;
    uVar1 = 0;
    uVar2 = param_2;
    while (uVar2 = uVar2 - 1, uVar2 != 0xffffffff) {
      *(char *)(*param_3 + uVar2) = (char)(param_1 % 10) + '0';
      param_1 = param_1 / 10;
      uVar1 = param_2;
    }
    *param_3 = *param_3 + uVar1;
    *param_4 = *param_4 - uVar1;
    return;
  }
  *param_4 = 0;
  return;
}
