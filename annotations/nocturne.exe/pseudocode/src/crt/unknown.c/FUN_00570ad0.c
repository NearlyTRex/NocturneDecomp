// Name: crt_unknown.c_FUN_00570ad0
// Address: 00570ad0
// Address Range: [[00570ad0, 00570bc1]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_00570ad0(char *param_1,uint *param_2,uint param_3)

#include "nocturne.h"

int FUN_00570ad0(char *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  _stat _Stack_50;
  
  uVar1 = *param_2;
  if ((uVar1 & 3) == 3) {
    uVar3 = 0x22;
  }
  else if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      return -1;
    }
    uVar3 = 0x21;
  }
  else {
    uVar3 = 0;
  }
  if ((uVar1 & 8) != 0) {
    uVar3 = uVar3 | 0x10;
  }
  if ((uVar1 & 0x10) != 0) {
    uVar3 = uVar3 | 0x40;
  }
  if ((uVar1 & 0x20) != 0) {
    uVar3 = uVar3 & 0xffffffdf;
  }
  if ((uVar1 & 0x100) == 0) {
    uVar3 = uVar3 | 0x100;
    *(byte *)param_2 = (byte)*param_2 | 0x80;
  }
  else {
    uVar3 = uVar3 | 0x200;
  }
  if ((((uVar1 & 0x40) != 0) && ((uVar3 | 0x20) != 0)) &&
     (iVar2 = getFileStat(param_1,&_Stack_50), iVar2 != -1)) {
    return -1;
  }
  param_3 = param_3 & 0x7000;
  iVar2 = 0;
  if (param_3 < 0x2000) {
    if (param_3 == 0x1000) {
      iVar2 = 0x20;
    }
  }
  else if (param_3 < 0x2001) {
    iVar2 = 0x30;
  }
  else if (0x2fff < param_3) {
    if (param_3 < 0x3001) {
      iVar2 = 0x40;
    }
    else if (param_3 == 0x4000) {
      iVar2 = 0x10;
    }
  }
  iVar2 = CreateFileVariadic(param_1,uVar3,iVar2);
  return iVar2;
}
