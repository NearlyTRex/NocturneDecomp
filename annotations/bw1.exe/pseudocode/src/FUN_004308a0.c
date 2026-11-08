// Name: FUN_004308a0
// Address: 004308a0
// Address Range: [[004308a0, 00430952]]
// Convention: unknown
// Signature: void FUN_004308a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

void FUN_004308a0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x3120) < 0x32) &&
     (((param_6 != 0 || (iVar1 = FUN_0040c550(param_1,"CHero"), iVar1 == 0)) &&
      (*(char *)(param_1 + 0x24a8) != '\0')))) {
    iVar2 = FUN_0056a8f0(param_1 + 0x158,param_2);
    iVar3 = 0;
    iVar1 = param_1;
    if (0 < *(int *)(param_1 + 0x3120)) {
      do {
        if (iVar2 == *(int *)(iVar1 + 0x3130)) {
          return;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x18;
      } while (iVar3 < *(int *)(param_1 + 0x3120));
    }
    *(uint *)(param_1 + 0x3124) = param_4;
    *(uint *)(param_1 + 0x3128) = param_5;
    uVar4 = FUN_00569f30(param_1 + 0x158,iVar2);
    FUN_0042f4d0(param_1,uVar4);
    *(uint *)(param_1 + 0xfc) = 1;
    return;
  }
  return;
}
