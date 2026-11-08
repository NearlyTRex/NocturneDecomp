// Name: FUN_005a427c
// Address: 005a427c
// Address Range: [[005a427c, 005a438d]]
// Convention: unknown
// Signature: int FUN_005a427c(undefined4 param_1,undefined1 param_2,uint param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

int FUN_005a427c(uint param_1,byte param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  *(byte *)(param_6 + 0xc) = *(byte *)(param_6 + 0xc) & 0xfc;
  *(uint *)(param_6 + 0xc) = *(uint *)(param_6 + 0xc) | param_3;
  cVar1 = FUN_005a35a0(param_2);
  if (cVar1 == 'r') {
    uVar3 = 0;
    if ((param_3 & 2) != 0) {
      uVar3 = 2;
    }
    if ((param_3 & 0x40) == 0) {
      uVar3 = uVar3 | 0x100;
    }
    else {
      uVar3 = uVar3 | 0x200;
    }
    uVar4 = 0;
  }
  else {
    bVar2 = ((param_3 & 1) != 0) + 0x21;
    if ((param_3 & 0x80) == 0) {
      bVar2 = bVar2 | 0x40;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    if ((param_3 & 0x40) == 0) {
      uVar3 = CONCAT11(1,bVar2);
    }
    else {
      uVar3 = CONCAT11(2,bVar2);
    }
    uVar4 = 0x180;
  }
  uVar4 = FUN_005aa0c4(param_1,uVar3,param_5,uVar4);
  *(uint *)(param_6 + 0x10) = uVar4;
  if (*(int *)(param_6 + 0x10) == -1) {
    FUN_005a9950(param_6);
    return 0;
  }
  *(uint *)(param_6 + 4) = 0;
  *(uint *)(param_6 + 0x14) = 0;
  *(uint *)(*(int *)(param_6 + 8) + 0xc) = 0;
  *(uint *)(*(int *)(param_6 + 8) + 0x10) = param_4;
  *(uint *)(*(int *)(param_6 + 8) + 0x15) = 0;
  *(uint *)(*(int *)(param_6 + 8) + 8) = 0;
  if ((param_3 & 0x80) != 0) {
    FUN_005a457c(param_6,0,2);
  }
  FUN_005aa340(param_6);
  return param_6;
}
