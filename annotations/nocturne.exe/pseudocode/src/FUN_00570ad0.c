// Name: FUN_00570ad0
// Address: 00570ad0
// Address Range: [[00570ad0, 00570bc1]]
// Convention: unknown
// Signature: undefined4 FUN_00570ad0(char *param_1,uint *param_2,uint param_3)

#include "nocturne.h"

uint FUN_00570ad0(char *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  _stat _Stack_50;
  
  uVar2 = *param_2;
  if ((uVar2 & 3) == 3) {
    uVar4 = 0x22;
  }
  else if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) {
      return 0xffffffff;
    }
    uVar4 = 0x21;
  }
  else {
    uVar4 = 0;
  }
  if ((uVar2 & 8) != 0) {
    uVar4 = uVar4 | 0x10;
  }
  if ((uVar2 & 0x10) != 0) {
    uVar4 = uVar4 | 0x40;
  }
  if ((uVar2 & 0x20) != 0) {
    uVar4 = uVar4 & 0xffffffdf;
  }
  if ((uVar2 & 0x100) == 0) {
    uVar4 = uVar4 | 0x100;
    *(byte *)param_2 = (byte)*param_2 | 0x80;
  }
  else {
    uVar4 = uVar4 | 0x200;
  }
  if ((((uVar2 & 0x40) != 0) && ((uVar4 | 0x20) != 0)) &&
     (iVar1 = getFileStat(param_1,&_Stack_50), iVar1 != -1)) {
    return 0xffffffff;
  }
  uVar2 = param_3 & 0x7000;
  uVar3 = 0;
  if (uVar2 < 0x2000) {
    if (uVar2 == 0x1000) {
      uVar3 = 0x20;
    }
  }
  else if (uVar2 < 0x2001) {
    uVar3 = 0x30;
  }
  else if (0x2fff < uVar2) {
    if (uVar2 < 0x3001) {
      uVar3 = 0x40;
    }
    else if (uVar2 == 0x4000) {
      uVar3 = 0x10;
    }
  }
  param_3 = param_3 & 0xffff8fff;
  uVar3 = CreateFileVariadic(param_1,uVar4,uVar3,param_3);
  return uVar3;
}
