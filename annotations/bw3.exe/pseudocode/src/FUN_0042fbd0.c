// Name: FUN_0042fbd0
// Address: 0042fbd0
// Address Range: [[0042fbd0, 0042fc8c]]
// Convention: unknown
// Signature: void FUN_0042fbd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6,undefined4 param_7)

#include "nocturne.h"

void FUN_0042fbd0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x33a0) < 0x32) &&
     (((param_6 != 0 || (iVar1 = FUN_0040c790(param_1,"CHero"), iVar1 == 0)) &&
      (*(char *)(param_1 + 0x24a8) != '\0')))) {
    iVar2 = FUN_0054f480(param_1 + 0x158,param_2);
    iVar3 = 0;
    iVar1 = param_1;
    if (0 < *(int *)(param_1 + 0x33a0)) {
      do {
        if (iVar2 == *(int *)(iVar1 + 0x33b0)) {
          return;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x18;
      } while (iVar3 < *(int *)(param_1 + 0x33a0));
    }
    *(uint *)(param_1 + 0x33a4) = param_4;
    *(uint *)(param_1 + 0x33a8) = param_5;
    *(uint *)(param_1 + 0x3260) = param_7;
    uVar4 = FUN_0054eac0(param_1 + 0x158,iVar2);
    FUN_0042e4b0(param_1,uVar4);
    *(uint *)(param_1 + 0xfc) = 1;
    return;
  }
  return;
}
