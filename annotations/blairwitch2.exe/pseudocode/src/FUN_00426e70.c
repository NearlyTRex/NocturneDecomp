// Name: FUN_00426e70
// Address: 00426e70
// Address Range: [[00426e70, 00426f22]]
// Convention: unknown
// Signature: void FUN_00426e70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

void FUN_00426e70(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x3564) < 0x32) &&
     (((param_6 != 0 || (iVar1 = FUN_0040c840(param_1,"KCHero" + 1), iVar1 == 0)) &&
      (*(char *)(param_1 + 0x2514) != '\0')))) {
    iVar2 = FUN_00548250(param_1 + 0x2b4,param_2);
    iVar3 = 0;
    iVar1 = param_1;
    if (0 < *(int *)(param_1 + 0x3564)) {
      do {
        if (iVar2 == *(int *)(iVar1 + 0x3574)) {
          return;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x18;
      } while (iVar3 < *(int *)(param_1 + 0x3564));
    }
    *(uint *)(param_1 + 0x3568) = param_4;
    *(uint *)(param_1 + 0x356c) = param_5;
    uVar4 = FUN_00547890(param_1 + 0x2b4,iVar2);
    FUN_00425bb0(param_1,uVar4);
    *(uint *)(param_1 + 0xfc) = 1;
    return;
  }
  return;
}
