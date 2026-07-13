// Name: FUN_10007420
// Address: 10007420
// Address Range: [[10007420, 1000756c]]
// Convention: unknown
// Signature: uint FUN_10007420(uint param_1,FILE *param_2)

#include "nocturne.h"

uint FUN_10007420(uint param_1,FILE *param_2)

{
  uint _FileHandle;
  FILE *_File;
  int iVar1;
  byte *puVar2;
  uint uVar3;
  uint uVar4;
  
  _File = param_2;
  _FileHandle = param_2->_file;
  uVar3 = param_2->_flag;
  if (((uVar3 & 0x82) == 0) || ((uVar3 & 0x40) != 0)) {
    param_2->_flag = uVar3 | 0x20;
    return 0xffffffff;
  }
  if ((uVar3 & 1) != 0) {
    param_2->_cnt = 0;
    if ((param_2->_flag & 0x10U) == 0) {
      param_2->_flag = param_2->_flag | 0x20;
      return 0xffffffff;
    }
    param_2->_ptr = param_2->_base;
    param_2->_flag = param_2->_flag & 0xfffffffe;
  }
  uVar3 = param_2->_flag;
  uVar4 = 0;
  param_2->_flag = uVar3 | 2;
  param_2->_flag = uVar3 & 0xffffffef | 2;
  param_2->_cnt = 0;
  if ((param_2->_flag & 0x10cU) == 0) {
    if ((param_2 == (FILE *)&DAT_100170a8) || (param_2 == (FILE *)&DAT_100170c8)) {
      iVar1 = FUN_100091b0(_FileHandle);
      if (iVar1 != 0) goto LAB_100074a4;
    }
    __getbuf(_File);
  }
LAB_100074a4:
  if ((_File->_flag & 0x108U) == 0) {
    uVar3 = 1;
    uVar4 = __write(_FileHandle,&param_1,1);
  }
  else {
    uVar3 = (int)_File->_ptr - (int)_File->_base;
    _File->_ptr = _File->_base + 1;
    _File->_cnt = _File->_bufsiz + -1;
    if ((int)uVar3 < 1) {
      puVar2 = &DAT_10016db0;
      if (_FileHandle != 0xffffffff) {
        puVar2 = (byte *)
                 (*(int *)((int)&DAT_10241870 + ((int)(_FileHandle & 0xffffffe7) >> 3)) +
                 (_FileHandle & 0x1f) * 0x24);
      }
      if ((puVar2[4] & 0x20) != 0) {
        __write(_FileHandle,(void *)0x0,2);
      }
    }
    else {
      uVar4 = __write(_FileHandle,_File->_base,uVar3);
    }
    *_File->_base = (char)param_1;
  }
  if (uVar4 != uVar3) {
    _File->_flag = _File->_flag | 0x20;
    return 0xffffffff;
  }
  return param_1 & 0xff;
}
