// Name: crt_unknown.c_FUN_005a427c
// Address: 005a427c
// Address Range: [[005a427c, 005a438d]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_FUN_005a427c(undefined4 param_1,byte param_2,uint param_3,char *param_4,undefined4 param_5,_FILE *param_6)

#include "nocturne.h"

_FILE * FUN_005a427c(uint param_1,byte param_2,uint param_3,char *param_4,uint param_5,_FILE *param_6)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  *(byte *)&param_6->_flag = (byte)param_6->_flag & 0xfc;
  param_6->_flag = param_6->_flag | param_3;
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
  iVar3 = FUN_005aa0c4(param_1,uVar2,param_5,uVar4);
  param_6->_handle = iVar3;
  if (param_6->_handle == -1) {
    FUN_005a9950(param_6);
    return (_FILE *)0x0;
  }
  param_6->_cnt = 0;
  param_6->_bufsize = 0;
  param_6->_link->__get_base = (char *)0x0;
  param_6->_link->__get_end = param_4;
  *(uint *)((int)&param_6->_link->__get_ptr + 1) = 0;
  param_6->_link->__reserve_end = (char *)0x0;
  if ((param_3 & 0x80) != 0) {
    _fseek(param_6,0,2);
  }
  FUN_005aa340(param_6);
  return param_6;
}
