// Name: FUN_00541a20
// Address: 00541a20
// Address Range: [[00541a20, 00541a5f] [00541a61, 00541a6e]]
// Convention: unknown
// Signature: undefined4 FUN_00541a20(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00541a20(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x15b428)) {
    do {
      iVar1 = FUN_00541350(param_1,iVar3,param_2);
      if (iVar1 != 0) {
        uVar2 = FUN_005419e0(param_1,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x15b428));
  }
  return 0xffffffff;
}
