// Name: crt_unknown.c_FUN_005b8f9c
// Address: 005b8f9c
// Address Range: [[005b8f9c, 005b90ad]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005b8f9c(undefined4 param_1,byte param_2,uint param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

int FUN_005b8f9c(uint param_1,byte param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  *(byte *)(param_6 + 0xc) = *(byte *)(param_6 + 0xc) & 0xfc;
  *(uint *)(param_6 + 0xc) = *(uint *)(param_6 + 0xc) | param_3;
  iVar3 = tolower((uint)param_2);
  if ((char)iVar3 == 'r') {
    uVar2 = 0;
    if ((param_3 & 2) != 0) {
      uVar2 = 2;
    }
    if ((param_3 & 0x40) == 0) {
      uVar2 = uVar2 | 0x100;
    }
    else {
      uVar2 = uVar2 | 0x200;
    }
    uVar4 = 0;
  }
  else {
    bVar1 = ((param_3 & 1) != 0) + 0x21;
    if ((param_3 & 0x80) == 0) {
      bVar1 = bVar1 | 0x40;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    if ((param_3 & 0x40) == 0) {
      uVar2 = CONCAT11(1,bVar1);
    }
    else {
      uVar2 = CONCAT11(2,bVar1);
    }
    uVar4 = 0x180;
  }
  uVar4 = FUN_005bef94(param_1,uVar2,param_5,uVar4);
  *(uint *)(param_6 + 0x10) = uVar4;
  if (*(int *)(param_6 + 0x10) == -1) {
    FUN_005be810(param_6);
    return 0;
  }
  *(uint *)(param_6 + 4) = 0;
  *(uint *)(param_6 + 0x14) = 0;
  *(uint *)(*(int *)(param_6 + 8) + 0xc) = 0;
  *(uint *)(*(int *)(param_6 + 8) + 0x10) = param_4;
  *(uint *)(*(int *)(param_6 + 8) + 0x15) = 0;
  *(uint *)(*(int *)(param_6 + 8) + 8) = 0;
  if ((param_3 & 0x80) != 0) {
    _fseek(param_6,0,2);
  }
  FUN_005bf210(param_6);
  return param_6;
}
